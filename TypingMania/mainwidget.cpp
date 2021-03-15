#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "difficulty.h"
#include "howtoplay.h"
#include "language.h"
#include "color.h"

#include <QPropertyAnimation>
#include <QTextStream>
#include <QPalette>
#include <QPointer>
#include <QVector>
#include <QtMath>
#include <QTimer>
#include <QTime>
#include <QFont>
#include <QFile>
#include <QDir>

int newScoreValue = 0;
int newMistakesValue = 0;
int newTypedSymbolsValue = 0;


#define lazerMove(lazerX, lazerY) {\
    lazer->setGeometry(lazerX, lazerY, lazer->width(), lazer->height()),\
    lazer->repaint();\
}

#define changeEyeSize(eyeRadius) {\
    leftEye->setIconSize(QSize(eyeRadius, eyeRadius));\
    rightEye->setIconSize(QSize(eyeRadius, eyeRadius));\
    leftEye->repaint(), rightEye->repaint();\
}


QPropertyAnimation *frightenedLeftEye, *frightenedRightEye;
QPropertyAnimation *calmLeftEye, *calmRightEye;
QPropertyAnimation *leftEyeMove, *rightEyeMove;
QPropertyAnimation *lazerShoot, *hole;
QPropertyAnimation *lazerJump;

QTimer *mainTimer;
QTimer *frightenTimer;
QTimer *lazerMovementTimer;
QTimer *eyeMovementTimer;

QColor ballColor;

QRect wordGeometry;
QRect next_wordGeometry;
QRect next_next_wordGeometry;

QGroupBox *MainMenu;
QGroupBox *Game;
QGroupBox *Words;
QGroupBox *GameOver;
QGroupBox *GameOverDialog;

QLabel *word;
QLabel *next_word;
QLabel *next_next_word;
QLabel *score;
QLabel *mistakes;
QLabel *typedSymbols;
QLabel *wordInput;

QFont curWordFont;
QFont nextWordFont;
QFont nextNextWordFont;

QLineEdit *lineEdit;

QPushButton *play;
QPushButton *colorButton;
QPushButton *languageButton;
QPushButton *howToPlay;
QPushButton *quit;
QPushButton *lazer;
QPushButton *frontLazer;
QPushButton *leftEye;
QPushButton *rightEye;
QPushButton *ball;


long scoreValue = 0;
long mistakesValue = 0;
long typedSymbolsValue = 0;
long msec = 0;

QPoint CL(896, 476), CR(CL.x() + 69, 476);
QPoint mousePos;
double lk, lb, rk, rb;
const int cx = 1920/2, cy = 1080/2;
int jumpValue = 200;
int jumpSpeed = 50;
int posAfterJump;
int radius = 400;
long lazerPos = 1580;
int circleDiam = 200;
bool danger = 0;
int eyeRadius = 45;
int newEyeRadius = 55;

void MainWidget::WordInit(QString lang) //заполняем "словарь" приложения
{
    QFile languageFile("language.txt");
    if (lang == "")
    {
        languageFile.open(QIODevice::ReadOnly | QIODevice::Text);

        QTextStream langIn(&languageFile);
        QString l;
        langIn >> language;
        languageFile.close();
    }
    else
    {
        language = lang;
        languageFile.open(QIODevice::WriteOnly);
        languageFile.write(lang.toUtf8());
        languageFile.close();
    }

    ui->language->setIcon(QIcon(language + ".txt"));

    QString path = "vocabularies/" + language + ".txt";
    QString icon = ":/lng/lng/" + language + ".png";
    QFile vocabulary(path);
    ui->language->setIcon(QIcon(icon));

    vocabulary.open(QIODevice::ReadOnly | QIODevice::Text);
    wordMass.clear();
    QTextStream in(&vocabulary);
    QString line;
    while (!in.atEnd()) {
        in >> line;
        wordMass.append(line);
    }
    vocabulary.close();

    qsrand(time(0));
    ui->word->setText(wordMass[rand()%wordMass.size()]);
    ui->next_word->setText(wordMass[rand()%wordMass.size()]);
    ui->next_next_word->setText(wordMass[rand()%wordMass.size()]);
}

std::wstring wchar(QString c)
{
    //возвращает поступающую строку в формате wstring (нужно при работе ScoreCounter)
    return c.toStdWString();
}

void MainWidget::BallColorInit()
{
    QFile file("color.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return;
    QTextStream in(&file);
    QString line;
    in >> line, ballColor = QColor(line.toInt(), 0,0);
    in >> line, ballColor = QColor(ballColor.red(), line.toInt(),0);
    in >> line, ballColor = QColor(ballColor.red(), ballColor.green(), line.toInt());
    file.close();
}

int MainWidget::ScoreCounter(QString str) //количество очков в слове str
{
    int score = 0;

    if (language == "russian")
    {
        std::wstring word = str.toStdWString();
        std::wstring c;
        for (size_t i = 0; i < word.length(); ++i)
        {
            c = QString(word[i]).toStdWString();
            if (c == wchar("а")) {score += 1; continue;}
            if (c == wchar("б")) {score += 5; continue;}
            if (c == wchar("в")) {score += 3; continue;}
            if (c == wchar("г")) {score += 4; continue;}
            if (c == wchar("д")) {score += 3; continue;}
            if (c == wchar("е")) {score += 1; continue;}
            if (c == wchar("ё")) {score += 7; continue;}
            if (c == wchar("ж")) {score += 5; continue;}
            if (c == wchar("з")) {score += 4; continue;}
            if (c == wchar("и")) {score += 1; continue;}
            if (c == wchar("й")) {score += 5; continue;}
            if (c == wchar("к")) {score += 3; continue;}
            if (c == wchar("л")) {score += 3; continue;}
            if (c == wchar("м")) {score += 3; continue;}
            if (c == wchar("н")) {score += 2; continue;}
            if (c == wchar("о")) {score += 1; continue;}
            if (c == wchar("п")) {score += 3; continue;}
            if (c == wchar("р")) {score += 2; continue;}
            if (c == wchar("с")) {score += 2; continue;}
            if (c == wchar("т")) {score += 2; continue;}
            if (c == wchar("у")) {score += 4; continue;}
            if (c == wchar("ф")) {score += 7; continue;}
            if (c == wchar("х")) {score += 5; continue;}
            if (c == wchar("ц")) {score += 6; continue;}
            if (c == wchar("ч")) {score += 5; continue;}
            if (c == wchar("ш")) {score += 6; continue;}
            if (c == wchar("щ")) {score += 6; continue;}
            if (c == wchar("ъ")) {score += 4; continue;}
            if (c == wchar("ы")) {score += 4; continue;}
            if (c == wchar("ь")) {score += 7; continue;}
            if (c == wchar("э")) {score += 7; continue;}
            if (c == wchar("ю")) {score += 6; continue;}
            if (c == wchar("я")) {score += 4; continue;}
        }
        return score;
    }

    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == 'a') {score += 1; continue;}
        if (str[i] == 'b') {score += 4; continue;}
        if (str[i] == 'c') {score += 3; continue;}
        if (str[i] == 'd') {score += 3; continue;}
        if (str[i] == 'e') {score += 1; continue;}
        if (str[i] == 'f') {score += 3; continue;}
        if (str[i] == 'g') {score += 3; continue;}
        if (str[i] == 'h') {score += 3; continue;}
        if (str[i] == 'i') {score += 1; continue;}
        if (str[i] == 'j') {score += 4; continue;}
        if (str[i] == 'k') {score += 4; continue;}
        if (str[i] == 'l') {score += 3; continue;}
        if (str[i] == 'm') {score += 3; continue;}
        if (str[i] == 'n') {score += 2; continue;}
        if (str[i] == 'o') {score += 2; continue;}
        if (str[i] == 'p') {score += 4; continue;}
        if (str[i] == 'q') {score += 4; continue;}
        if (str[i] == 'r') {score += 2; continue;}
        if (str[i] == 's') {score += 2; continue;}
        if (str[i] == 't') {score += 4; continue;}
        if (str[i] == 'u') {score += 3; continue;}
        if (str[i] == 'v') {score += 4; continue;}
        if (str[i] == 'w') {score += 4; continue;}
        if (str[i] == 'x') {score += 4; continue;}
        if (str[i] == 'y') {score += 4; continue;}
        if (str[i] == 'z') {score += 4; continue;}
    }
    return score;
}

QString ballColorStyle(QColor color) //градиентный цвет шарика с нижним параметром color
{
    ballColor = QColor(color);
    return QString("border-radius: 100px; background: qlineargradient( x1:0 y1:0, x2:0 y2:1, stop:0 rgb(40,0,20),"
                   "stop:1 rgb(%1,%2,%3));").arg(ballColor.red()).arg(ballColor.green()).arg(ballColor.blue());
}

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this); //устанавливаем пользовательский интерфейс для данного виджета
    qsrand(time(NULL));
    /*начальная инициализация*/
    {
        QFile file("difficulty.txt");
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream in(&file);
        QString line;
        in >> line;
        difficulty = line.toInt();
        file.close();
        ChangeDifficulty(difficulty);
        BallColorInit();
        ui->ball->setStyleSheet(ballColorStyle(ballColor)), ui->ball->repaint();
        (GameOverDialog = ui->GameOverDialog)->hide();
        MainMenu = ui->MainMenu;
        (GameOver = ui->GameOver)->hide();
        (Words = ui->Words)->hide();
        Game = ui->Game;

        window()->showFullScreen(); //полноэкранный режим

        WordInit(""); //заполняем вектор слов
        /*связываем виртуальные кнопки с ранее созданными в форме */
        {
            word = ui->word;
            next_word = ui->next_word;
            next_next_word = ui->next_next_word;
            score = ui->score;
            mistakes = ui->mistakes;
            typedSymbols = ui->typedSymbols;

            curWordFont.setPixelSize(90);
            nextWordFont.setPixelSize(35);
            nextNextWordFont.setPixelSize(20);

            curWordFont.setBold(1);
            nextWordFont.setBold(1);
            nextNextWordFont.setBold(1);
            curWordFont.setFamily("Courier New");
            nextWordFont.setFamily("Courier New");
            nextNextWordFont.setFamily("Courier New");
            wordGeometry = word->geometry();
            next_wordGeometry = next_word->geometry();

            lineEdit = ui->lineEdit;
            wordInput = ui->wordInput;

            word->setFont(curWordFont);
            word->setGeometry(wordGeometry);
            next_word->setFont(nextWordFont);
            next_word->setGeometry(next_wordGeometry);
            next_next_word->setFont(nextNextWordFont);
            next_next_word->setGeometry(next_next_word->geometry());
            word->adjustSize(), next_word->adjustSize(), next_next_word->adjustSize();
            wordInput->setGeometry(word->x(), word->y(), 1000, word->height());
            wordInput->setFont(curWordFont), wordInput->setText("");


            play = ui->play;
            colorButton = ui->color;
            languageButton = ui->language;
            howToPlay = ui->howToPlay;
            quit = ui->quit;
            lazer = ui->lazer;
            frontLazer = ui->frontLazer;
            leftEye = ui->leftEye;
            rightEye = ui->rightEye;
            ball = ui->ball;
        }
        /*таймеры*/
        {
            mainTimer = new QTimer(this); //главный таймер игры
            frightenTimer = new QTimer(this); //таймер "испуга"
            lazerMovementTimer = new QTimer(this); //таймер передвижения лазера
            eyeMovementTimer = new QTimer(this); //таймер анимации глаз
            lazer->setGeometry(0, lazerPos = 1380, 1920, 6);
        }
        /*коннекты*/
        {
            connect(play, SIGNAL(clicked()), SLOT(DifficultyDialog()));
            connect(colorButton, SIGNAL(clicked()), SLOT(changeColor()));
            connect(languageButton, SIGNAL(clicked()), SLOT(changeLanguage()));
            connect(howToPlay, SIGNAL(clicked()), SLOT(HowToPlayDialog()));
            connect(quit, SIGNAL(clicked()), SLOT(close()));
            connect(mainTimer, SIGNAL(timeout()), SLOT(MainTimer()));
            connect(frightenTimer, SIGNAL(timeout()), SLOT(FrightenTimer()));
            connect(lazerMovementTimer, SIGNAL(timeout()), SLOT(LazerMovementTimer()));
            connect(eyeMovementTimer, SIGNAL(timeout()), SLOT(EyeMovementTimer()));
            connect(ui->gameOverRestart, SIGNAL(clicked()), SLOT(Play()));
            connect(ui->gameOverMainMenu, SIGNAL(clicked()), SLOT(MainMenuPanel()));
        }
        /*анимации*/
        {
            lazerJump = new QPropertyAnimation(lazer, "geometry");
            lazerJump->setDuration(jumpSpeed);

            frightenedLeftEye = new QPropertyAnimation(leftEye, "iconSize");
            frightenedRightEye = new QPropertyAnimation(rightEye, "iconSize");
            frightenedLeftEye->setDuration(20),frightenedRightEye->setDuration(20);

            calmLeftEye = new QPropertyAnimation(leftEye, "iconSize");
            calmRightEye = new QPropertyAnimation(rightEye, "iconSize");
            calmLeftEye->setEndValue(QSize(eyeRadius, eyeRadius));
            calmRightEye->setEndValue(QSize(eyeRadius, eyeRadius));
            calmLeftEye->setDuration(200),calmRightEye->setDuration(200);

            leftEyeMove = new QPropertyAnimation(leftEye, "geometry");
            rightEyeMove = new QPropertyAnimation(rightEye, "geometry");
            leftEyeMove->setDuration(200), rightEyeMove->setDuration(200);

            lazerShoot = new QPropertyAnimation(frontLazer, "geometry");
            lazerShoot->setStartValue(QRect(cx + 1, cy, 0, 1));
            lazerShoot->setEndValue(QRect(0,cy - lazer->height()/2,cx + 2,lazer->height()));
            lazerShoot->setDuration(30);

            hole = new QPropertyAnimation(ui->hole, "geometry");
            hole->setStartValue(QRect(cx, cy, 0, 0));
            hole->setEndValue(QRect(cx - 5, cy - 5, 10, 10));
            hole->setDuration(30);
        }
    }
    QTimer::singleShot(1000, this, SLOT(EyeMovementTimer())); //запускаем анимацию глаз
}

void MainWidget::MainTimer() //главный таймер приложения
{
    msec+=4;
    if (lazerPos <= cy + circleDiam/2 - 3) //если лазер попал на шарик
    {
        lineEdit->clearFocus(); //забираем у пользователя возможность печатать
        if (lazerPos <= cy) //если лазер дошёл до центра
        {
            lazerMove(cx, cy - lazer->height()/2);
            lazerMovementTimer->stop(), mainTimer->stop(); //останавливаем движение лазера
            QTimer::singleShot(400, this, SLOT(gameOver())); //показываем групбокс GameOver
            return;
        }
        lazerMove(cx, lazer->y());
     }
     if ((danger = lazerPos < cy + circleDiam*1.7)) //проверяем состояние опасности для шарика
     {if (!frightenTimer->isActive()) frightenTimer->start(50);} //"испуг"
     else
     {
         if (!frightenTimer->isActive()) return;
         frightenTimer->stop(); //останавливаем панику
         QTimer::singleShot(0,this,SLOT(CalmTimer())); //успокаиваемся
     }
}

void MainWidget::FrightenTimer() //таймер "испуга"
{
    newEyeRadius = newEyeRadius == 55 ? 51 : 55; //новый радиус глаз
    frightenedLeftEye->setStartValue(leftEye->iconSize());
    frightenedRightEye->setStartValue(rightEye->iconSize());
    frightenedLeftEye->setEndValue(QSize(newEyeRadius, newEyeRadius));
    frightenedRightEye->setEndValue(QSize(newEyeRadius, newEyeRadius));
    frightenedLeftEye->start(), frightenedRightEye->start();
}

void MainWidget::CalmTimer() //таймер "успокоения"
{
    calmLeftEye->setStartValue(leftEye->iconSize());
    calmRightEye->setStartValue(rightEye->iconSize());
    calmLeftEye->start(), calmRightEye->start();
}

void MainWidget::Jump(int jumpValue)
{
    score->setText(QString("Score: %1").arg(scoreValue += ScoreCounter(word->text())));

    lazerMovementTimer->stop(), lazerPos += jumpValue;
    lazerJump->setStartValue(lazer->geometry());
    lazerJump->setEndValue(QRect(lazer->x(), lazer->y() + jumpValue, lazer->width(), lazer->height()));
    lazerJump->start();
    WordGenerator();
    QTimer::singleShot(jumpSpeed, this, SLOT(LazerMovementTimer()));
}

void MainWidget::LazerMovementTimer()
{
    if (!lazerMovementTimer->isActive()) lazerMovementTimer->start(lazerSpeed);
    lazerMove(lazer->x(), --lazerPos);
}

void MainWidget::EyeMovementTimer()
{
    if (MainMenu->isHidden())
    {
        leftEyeMove->setStartValue(leftEye->geometry());
        leftEyeMove->setEndValue(QRect(CL.x(), CL.y(), leftEye->width(), leftEye->height()));
        rightEyeMove->setStartValue(rightEye->geometry());
        rightEyeMove->setEndValue(QRect(CR.x(), CR.y(), rightEye->width(), rightEye->height()));
        leftEyeMove->start(), rightEyeMove->start();
        return;
    }
    int distance = rightEye->x() - leftEye->x();
    int radius = eyeRadius/5;
    int newLX = CL.x() + qrand() % (radius + 1) - radius;
    int newRX = newLX + distance;
    int koef = rand()%40 - 20 > 0 ? 1 : -1;
    int newLY = CL.y() + koef*qSqrt(radius*radius - qPow(newLX - CL.x(), 2));
    int newRY = CR.y() + koef*qSqrt(radius*radius - qPow(newRX - CR.x(), 2));
    leftEyeMove->setStartValue(leftEye->geometry());
    rightEyeMove->setStartValue(rightEye->geometry());
    leftEyeMove->setEndValue(QRect(newLX - radius + eyeRadius/4, newLY - radius, leftEye->width(), leftEye->height()));
    rightEyeMove->setEndValue(QRect(newRX - radius + eyeRadius/4, newRY - radius, rightEye->width(), rightEye->height()));
    leftEyeMove->start(), rightEyeMove->start();
    QTimer::singleShot(2000, this, SLOT(EyeMovementTimer()));
}

void MainWidget::InitGameValues()
{
    msec = 0;
    score->setText(QString("Score: %1").arg(scoreValue = 0));
    mistakes->setText(QString("Mistakes: %1").arg(mistakesValue = 0));
    typedSymbols->setText(QString("Symbols: %1").arg(typedSymbolsValue = 0));
}

void MainWidget::DifficultyDialog()
{
    Difficulty *difficultyDialog = new Difficulty(this);
    difficultyDialog->exec();
}

void MainWidget::ChangeDifficulty(int difficulty)
{
    if (difficulty == 1) lazerSpeed = 12;
    else if (difficulty == 2) lazerSpeed = 9;
    else if (difficulty == 3) lazerSpeed = 5;
    else if (difficulty == 4) lazerSpeed = 4;
    else if (difficulty == 5) lazerSpeed = 3;
}

void MainWidget::Play()
{
    InitGameValues();
    GameOverDialog->hide();
    Game->raise(), Game->show();
    Words->show();
    MainMenu->hide();
    WordGenerator();
    startGamingAnimation();
}

void MainWidget::startGamingAnimation()
{
    lazerMove(0, lazerPos = 1280);
    changeEyeSize(eyeRadius);
    GameOver->hide();
    mainTimer->start(lazerSpeed),
    lazerMovementTimer->start(lazerSpeed);
}

void MainWidget::WordGenerator()
{
    word->setText(next_word->text());
    word->adjustSize();
    next_word->setText(next_next_word->text());
    next_word->adjustSize();
    next_next_word->setText(wordMass[rand()%wordMass.size()]);
    next_next_word->adjustSize();
    word->repaint(),next_word->repaint(), next_next_word->repaint();
    wordInput->setText(""),lineEdit->setText("");
    if (!lineEdit->hasFocus()) lineEdit->setFocus();
}

void MainWidget::HowToPlayDialog()
{
    HowToPlay howToPlayDialog(this);
    howToPlayDialog.exec();
}

void MainWidget::changeLanguage()
{
    class Language *languageDialog = new Language(this);
    languageDialog->exec();
    QFile file("language.txt");
    file.open(QIODevice::WriteOnly);
    file.write(language.toUtf8());
    file.close();
}

void MainWidget::changeColor() //диалоговое окно выбора цвета
{
    color color(this, ballColor.red(), ballColor.green(), ballColor.blue());
    color.exec();
    QFile file("color.txt");
    if (!file.open(QIODevice::WriteOnly)) return;
    file.write(QString("%1\n").arg(ballColor.red()).toUtf8());
    file.write(QString("%1\n").arg(ballColor.green()).toUtf8());
    file.write(QString("%1\n").arg(ballColor.blue()).toUtf8());
    file.close();
}
void MainWidget::changeColor(QColor color) //функция для взаимодействия диалога с главным виджетом
{
    ballColor = color;
    QString styleSheet = ballColorStyle(ballColor);
    ball->setStyleSheet(styleSheet);
    ball->repaint();
}

void MainWidget::gameOver() //поражение
{
    frightenTimer->stop();
    GameOver->show(); Words->hide();
    hole->start(), lazerShoot->start();
    QTimer::singleShot(1000,this, SLOT(gameOverDialog()));
}

QString formattedTime(int msec)
{
    QString aliveTime;
    int sec, min, hour, day;
    sec = msec/1000;
    min = sec/60, sec %= 60;
    hour = min/60, min %= 60;
    day = hour/24, hour %= 24;
    if (day) aliveTime += QString("%1:").arg(day);
    if (day || hour) aliveTime += QString("%1:").arg(hour);
    if (!(day || hour || min)) aliveTime += QString("%1 seconds").arg(sec);
    else {
        aliveTime += QString("%1:").arg(min);
        aliveTime += QString("%1").arg(sec);
    }
    return aliveTime;
}

void MainWidget::gameOverDialog() //диалоговое окно при поражении
{
    ui->gameOverScorePanel->setText(QString("Score:%1").arg(scoreValue));
    ui->gameOverTimeAlive->setText("Time alive: " + formattedTime(msec));
    ui->gameOverMistakes->setText(QString("Mistakes: %1").arg(mistakesValue));
    ui->gameOverTypedSymbols->setText(QString("Typed symbols: %1").arg(typedSymbolsValue));
    ui->gameOverSpeed->setText(QString("Average speed: %1 зн/мин").arg(typedSymbolsValue*60000/msec));
    GameOverDialog->show();
}

void MainWidget::MainMenuPanel() //выход в главное меню
{
    InitGameValues();
    lazerMovementTimer->stop();
    lazerMove(0, lazerPos = 1380);
    changeEyeSize(eyeRadius);
    MainMenu->raise(), MainMenu->show();
    GameOverDialog->hide(), Words->hide(), GameOver->hide();

    QTimer::singleShot(200, this, SLOT(EyeMovementTimer()));
}

void MainWidget::keyPressEvent(QKeyEvent *event)
{
    if (lazerPos > cy && lazerPos <= cy + circleDiam/2) return;
    switch (event->key())
    {
    case Qt::Key_Return: if (MainMenu->isVisible()) play->click(); return;

    case Qt::Key_Escape:
        if (MainMenu->isVisible()) quit->click();
        if (GameOverDialog->isVisible() || lazerPos > cy + circleDiam/2)
            MainMenuPanel();
    }
}

void MainWidget::on_lineEdit_textEdited(const QString &arg1)
{
    if (arg1[arg1.size()-1] != word->text()[arg1.size()-1])
    {
        mistakes->setText(QString("Mistakes: %1").arg(++mistakesValue));
        QString arg = arg1;
        arg.chop(1);
        lineEdit->setText(arg);
        return;
    }
    typedSymbols->setText(QString("Symbols: %1").arg(++typedSymbolsValue));
    wordInput->setText(arg1);
    if (lazerPos <= cy + circleDiam/2) return;
    if (arg1 == word->text()) Jump();
}

MainWidget::~MainWidget()
{
    delete ui;
}
