/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QGroupBox *AllWidgets;
    QGroupBox *Game;
    QPushButton *leftEye;
    QPushButton *rightEye;
    QPushButton *lazer;
    QPushButton *ball;
    QGroupBox *GameOver;
    QPushButton *frontLazer;
    QLabel *blood;
    QPushButton *hole;
    QPushButton *dead_ball;
    QPushButton *leftEye_dead;
    QPushButton *rightEye_dead;
    QGroupBox *GameOverDialog;
    QLabel *gameOverDialogBackground;
    QPushButton *gameOverMainMenu;
    QPushButton *gameOverRestart;
    QLabel *gameOverScorePanel;
    QLabel *gameOverTypedSymbols;
    QLabel *gameOverMistakes;
    QLabel *gameOverSpeed;
    QLabel *gameOverTimeAlive;
    QGroupBox *Words;
    QLabel *word;
    QLabel *next_word;
    QLineEdit *lineEdit;
    QLabel *wordInput;
    QGroupBox *CurrentResults;
    QLabel *score;
    QLabel *mistakes;
    QLabel *typedSymbols;
    QLabel *next_next_word;
    QGroupBox *MainMenu;
    QPushButton *color;
    QPushButton *play;
    QPushButton *howToPlay;
    QPushButton *quit;
    QLabel *logo;
    QPushButton *language;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(1920, 1080);
        MainWidget->setStyleSheet(QString::fromUtf8("background: qlineargradient( x1:0 y1:0, x2:0 y2:1, stop:0 black, stop:1 rgb(70, 0, 70));"));
        AllWidgets = new QGroupBox(MainWidget);
        AllWidgets->setObjectName(QString::fromUtf8("AllWidgets"));
        AllWidgets->setEnabled(true);
        AllWidgets->setGeometry(QRect(0, -1, 1920, 1081));
        AllWidgets->setStyleSheet(QString::fromUtf8("background: rgb(0,0,0,0);\n"
"border: none;"));
        AllWidgets->setFlat(false);
        Game = new QGroupBox(AllWidgets);
        Game->setObjectName(QString::fromUtf8("Game"));
        Game->setGeometry(QRect(0, 0, 1920, 1080));
        leftEye = new QPushButton(Game);
        leftEye->setObjectName(QString::fromUtf8("leftEye"));
        leftEye->setEnabled(false);
        leftEye->setGeometry(QRect(896, 476, 60, 60));
        leftEye->setStyleSheet(QString::fromUtf8("background: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/eye.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftEye->setIcon(icon);
        leftEye->setIconSize(QSize(45, 55));
        rightEye = new QPushButton(Game);
        rightEye->setObjectName(QString::fromUtf8("rightEye"));
        rightEye->setEnabled(false);
        rightEye->setGeometry(QRect(965, 476, 61, 61));
        rightEye->setStyleSheet(QString::fromUtf8(""));
        rightEye->setIcon(icon);
        rightEye->setIconSize(QSize(45, 55));
        lazer = new QPushButton(Game);
        lazer->setObjectName(QString::fromUtf8("lazer"));
        lazer->setGeometry(QRect(0, 1000, 1920, 4));
        lazer->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        lazer->setFont(font);
        lazer->setToolTipDuration(4000);
        lazer->setStyleSheet(QString::fromUtf8("background: red;"));
        ball = new QPushButton(Game);
        ball->setObjectName(QString::fromUtf8("ball"));
        ball->setGeometry(QRect(860, 440, 200, 200));
        ball->setAutoFillBackground(false);
        ball->setStyleSheet(QString::fromUtf8("background: qlineargradient( x1:0 y1:0, x2:0 y2:1, stop:0 rgb(40,0,20), stop:1 rgb(255, 155, 0));\n"
"border-radius: 100px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/skin.png"), QSize(), QIcon::Normal, QIcon::Off);
        ball->setIcon(icon1);
        ball->setIconSize(QSize(200, 200));
        GameOver = new QGroupBox(Game);
        GameOver->setObjectName(QString::fromUtf8("GameOver"));
        GameOver->setGeometry(QRect(0, 0, 1920, 1080));
        frontLazer = new QPushButton(GameOver);
        frontLazer->setObjectName(QString::fromUtf8("frontLazer"));
        frontLazer->setGeometry(QRect(0, 537, 961, 6));
        frontLazer->setStyleSheet(QString::fromUtf8("background: red; border: 1px red; border-radius: 2px;"));
        blood = new QLabel(GameOver);
        blood->setObjectName(QString::fromUtf8("blood"));
        blood->setGeometry(QRect(953, 540, 12, 50));
        blood->setPixmap(QPixmap(QString::fromUtf8(":/img/img/blood.png")));
        hole = new QPushButton(GameOver);
        hole->setObjectName(QString::fromUtf8("hole"));
        hole->setGeometry(QRect(955, 535, 10, 10));
        hole->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"background: rgb(100,0,0);"));
        dead_ball = new QPushButton(GameOver);
        dead_ball->setObjectName(QString::fromUtf8("dead_ball"));
        dead_ball->setEnabled(true);
        dead_ball->setGeometry(QRect(860, 440, 200, 200));
        dead_ball->setAutoFillBackground(false);
        dead_ball->setStyleSheet(QString::fromUtf8("background: qlineargradient( x1:0 y1:0, x2:0 y2:1, stop:0 rgb(40,0,20), stop:1 rgb(125, 255, 255));\n"
"border-radius: 100px;"));
        dead_ball->setIcon(icon1);
        dead_ball->setIconSize(QSize(200, 200));
        leftEye_dead = new QPushButton(GameOver);
        leftEye_dead->setObjectName(QString::fromUtf8("leftEye_dead"));
        leftEye_dead->setEnabled(true);
        leftEye_dead->setGeometry(QRect(896, 476, 60, 60));
        leftEye_dead->setStyleSheet(QString::fromUtf8("background: none;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/dead.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftEye_dead->setIcon(icon2);
        leftEye_dead->setIconSize(QSize(45, 55));
        rightEye_dead = new QPushButton(GameOver);
        rightEye_dead->setObjectName(QString::fromUtf8("rightEye_dead"));
        rightEye_dead->setEnabled(true);
        rightEye_dead->setGeometry(QRect(965, 476, 61, 61));
        rightEye_dead->setStyleSheet(QString::fromUtf8(""));
        rightEye_dead->setIcon(icon2);
        rightEye_dead->setIconSize(QSize(45, 55));
        GameOverDialog = new QGroupBox(GameOver);
        GameOverDialog->setObjectName(QString::fromUtf8("GameOverDialog"));
        GameOverDialog->setGeometry(QRect(350, 30, 1200, 900));
        GameOverDialog->setStyleSheet(QString::fromUtf8("background: none;"));
        gameOverDialogBackground = new QLabel(GameOverDialog);
        gameOverDialogBackground->setObjectName(QString::fromUtf8("gameOverDialogBackground"));
        gameOverDialogBackground->setGeometry(QRect(0, 0, 1200, 940));
        gameOverDialogBackground->setStyleSheet(QString::fromUtf8("background: none;"));
        gameOverDialogBackground->setPixmap(QPixmap(QString::fromUtf8(":/img/img/pixmap.png")));
        gameOverDialogBackground->setAlignment(Qt::AlignCenter);
        gameOverMainMenu = new QPushButton(GameOverDialog);
        gameOverMainMenu->setObjectName(QString::fromUtf8("gameOverMainMenu"));
        gameOverMainMenu->setGeometry(QRect(860, 600, 100, 71));
        gameOverMainMenu->setFont(font);
        gameOverMainMenu->setToolTipDuration(4000);
        gameOverMainMenu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"     padding: 6px;\n"
"     border: 1px solid #404040;\n"
"     border-width: 3px;\n"
"     border-radius: 35px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #000000, stop: 1 #404040);\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	 color:rgb(200,200,200);\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #404040, stop: 1 #999999);\n"
" }\n"
"\n"
"QPushButton:disabled {\n"
"	color:rgb(200,200,200);\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									  stop: 0 #555555, stop: 1 #999999);\n"
"}\n"
"\n"
" QPushButton:hover {\n"
"     border-color: green;\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260"
                        "\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        gameOverMainMenu->setIcon(icon3);
        gameOverMainMenu->setIconSize(QSize(50, 50));
        gameOverRestart = new QPushButton(GameOverDialog);
        gameOverRestart->setObjectName(QString::fromUtf8("gameOverRestart"));
        gameOverRestart->setGeometry(QRect(750, 600, 100, 71));
        gameOverRestart->setFont(font);
        gameOverRestart->setToolTipDuration(4000);
        gameOverRestart->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"     padding: 6px;\n"
"     border: 1px solid #404040;\n"
"     border-width: 3px;\n"
"     border-radius: 35px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #000000, stop: 1 #404040);\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	 color:rgb(200,200,200);\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #404040, stop: 1 #999999);\n"
" }\n"
"\n"
"QPushButton:disabled {\n"
"	color:rgb(200,200,200);\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									  stop: 0 #555555, stop: 1 #999999);\n"
"}\n"
"\n"
" QPushButton:hover {\n"
"     border-color: green;\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260"
                        "\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/restart.png"), QSize(), QIcon::Normal, QIcon::Off);
        gameOverRestart->setIcon(icon4);
        gameOverRestart->setIconSize(QSize(43, 43));
        gameOverScorePanel = new QLabel(GameOverDialog);
        gameOverScorePanel->setObjectName(QString::fromUtf8("gameOverScorePanel"));
        gameOverScorePanel->setGeometry(QRect(230, 180, 801, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier New"));
        font1.setPointSize(48);
        font1.setBold(true);
        font1.setWeight(75);
        gameOverScorePanel->setFont(font1);
        gameOverScorePanel->setStyleSheet(QString::fromUtf8("background: none; color: green;"));
        gameOverScorePanel->setAlignment(Qt::AlignCenter);
        gameOverTypedSymbols = new QLabel(GameOverDialog);
        gameOverTypedSymbols->setObjectName(QString::fromUtf8("gameOverTypedSymbols"));
        gameOverTypedSymbols->setGeometry(QRect(250, 330, 700, 81));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier New"));
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setWeight(75);
        gameOverTypedSymbols->setFont(font2);
        gameOverTypedSymbols->setStyleSheet(QString::fromUtf8("background: none; color: lightgray;"));
        gameOverTypedSymbols->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gameOverMistakes = new QLabel(GameOverDialog);
        gameOverMistakes->setObjectName(QString::fromUtf8("gameOverMistakes"));
        gameOverMistakes->setGeometry(QRect(250, 375, 700, 81));
        gameOverMistakes->setFont(font2);
        gameOverMistakes->setStyleSheet(QString::fromUtf8("background: none; color: lightgray;"));
        gameOverMistakes->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gameOverSpeed = new QLabel(GameOverDialog);
        gameOverSpeed->setObjectName(QString::fromUtf8("gameOverSpeed"));
        gameOverSpeed->setGeometry(QRect(250, 285, 700, 81));
        gameOverSpeed->setFont(font2);
        gameOverSpeed->setStyleSheet(QString::fromUtf8("background: none; color: lightgray;"));
        gameOverSpeed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gameOverTimeAlive = new QLabel(GameOverDialog);
        gameOverTimeAlive->setObjectName(QString::fromUtf8("gameOverTimeAlive"));
        gameOverTimeAlive->setGeometry(QRect(250, 240, 700, 81));
        gameOverTimeAlive->setFont(font2);
        gameOverTimeAlive->setStyleSheet(QString::fromUtf8("background: none; color: lightgray;"));
        gameOverTimeAlive->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        dead_ball->raise();
        leftEye_dead->raise();
        rightEye_dead->raise();
        blood->raise();
        hole->raise();
        frontLazer->raise();
        GameOverDialog->raise();
        Words = new QGroupBox(Game);
        Words->setObjectName(QString::fromUtf8("Words"));
        Words->setGeometry(QRect(0, 0, 1920, 1080));
        word = new QLabel(Words);
        word->setObjectName(QString::fromUtf8("word"));
        word->setGeometry(QRect(750, 200, 418, 42));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Courier New"));
        font3.setPointSize(26);
        font3.setBold(true);
        font3.setWeight(75);
        word->setFont(font3);
        word->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);"));
        word->setAlignment(Qt::AlignCenter);
        next_word = new QLabel(Words);
        next_word->setObjectName(QString::fromUtf8("next_word"));
        next_word->setGeometry(QRect(760, 110, 418, 61));
        next_word->setFont(font3);
        next_word->setStyleSheet(QString::fromUtf8("color: rgb(200,200,200,0.7);"));
        next_word->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(Words);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(-50, -50, 113, 22));
        lineEdit->setMouseTracking(false);
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0,0);"));
        lineEdit->setCursorMoveStyle(Qt::VisualMoveStyle);
        wordInput = new QLabel(Words);
        wordInput->setObjectName(QString::fromUtf8("wordInput"));
        wordInput->setGeometry(QRect(750, 200, 418, 42));
        wordInput->setFont(font3);
        wordInput->setStyleSheet(QString::fromUtf8("color: rgb(0,255,0);"));
        wordInput->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        CurrentResults = new QGroupBox(Words);
        CurrentResults->setObjectName(QString::fromUtf8("CurrentResults"));
        CurrentResults->setGeometry(QRect(50, 50, 600, 600));
        score = new QLabel(CurrentResults);
        score->setObjectName(QString::fromUtf8("score"));
        score->setGeometry(QRect(0, 0, 571, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Berlin Sans FB"));
        font4.setPointSize(16);
        font4.setBold(false);
        font4.setWeight(50);
        score->setFont(font4);
        score->setStyleSheet(QString::fromUtf8("color: white;"));
        mistakes = new QLabel(CurrentResults);
        mistakes->setObjectName(QString::fromUtf8("mistakes"));
        mistakes->setGeometry(QRect(0, 60, 571, 41));
        mistakes->setFont(font4);
        mistakes->setStyleSheet(QString::fromUtf8("color: white;"));
        typedSymbols = new QLabel(CurrentResults);
        typedSymbols->setObjectName(QString::fromUtf8("typedSymbols"));
        typedSymbols->setGeometry(QRect(0, 30, 571, 41));
        typedSymbols->setFont(font4);
        typedSymbols->setStyleSheet(QString::fromUtf8("color: white;"));
        next_next_word = new QLabel(Words);
        next_next_word->setObjectName(QString::fromUtf8("next_next_word"));
        next_next_word->setGeometry(QRect(750, 50, 418, 61));
        next_next_word->setFont(font3);
        next_next_word->setStyleSheet(QString::fromUtf8("color: rgb(200,200,200,0.4);"));
        next_next_word->setAlignment(Qt::AlignCenter);
        lazer->raise();
        ball->raise();
        leftEye->raise();
        rightEye->raise();
        Words->raise();
        GameOver->raise();
        MainMenu = new QGroupBox(AllWidgets);
        MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->setGeometry(QRect(0, 0, 1920, 1080));
        MainMenu->setStyleSheet(QString::fromUtf8(""));
        color = new QPushButton(MainMenu);
        color->setObjectName(QString::fromUtf8("color"));
        color->setGeometry(QRect(1108, 753, 60, 60));
        color->setFocusPolicy(Qt::StrongFocus);
        color->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 1px solid #404040;\n"
"     border-width: 7px;\n"
"     border-radius: 30px;\n"
"	 background: black;\n"
"}\n"
"\n"
" QPushButton:hover {\n"
"     border-color: green;\n"
" }"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/img/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        color->setIcon(icon5);
        color->setIconSize(QSize(55, 55));
        play = new QPushButton(MainMenu);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(850, 750, 230, 70));
        play->setMinimumSize(QSize(98, 0));
        play->setFont(font);
        play->setToolTipDuration(4000);
        play->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"     min-width: 5em;\n"
"     padding: 6px;\n"
"     border: 1px solid #404040;\n"
"     border-width: 3px;\n"
"     border-radius: 35px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #999999, stop: 1 #404040);\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	 color:rgb(200,200,200);\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #404040, stop: 1 #999999);\n"
" }\n"
"\n"
"QPushButton:disabled {\n"
"	color:rgb(200,200,200);\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									  stop: 0 #555555, stop: 1 #999999);\n"
"}\n"
"\n"
" QPushButton:hover {\n"
"     border-color: green;\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276"
                        "\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"));
        howToPlay = new QPushButton(MainMenu);
        howToPlay->setObjectName(QString::fromUtf8("howToPlay"));
        howToPlay->setGeometry(QRect(850, 850, 230, 70));
        howToPlay->setMinimumSize(QSize(98, 0));
        howToPlay->setFont(font);
        howToPlay->setToolTipDuration(4000);
        howToPlay->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"     min-width: 5em;\n"
"     padding: 6px;\n"
"     border: 1px solid #404040;\n"
"     border-width: 3px;\n"
"     border-radius: 35px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #999999, stop: 1 #404040);\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	 color:rgb(200,200,200);\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #404040, stop: 1 #999999);\n"
" }\n"
"\n"
"QPushButton:disabled {\n"
"	color:rgb(200,200,200);\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									  stop: 0 #555555, stop: 1 #999999);\n"
"}\n"
"\n"
" QPushButton:hover {\n"
"     border-color: green;\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276"
                        "\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"));
        quit = new QPushButton(MainMenu);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(850, 950, 230, 70));
        quit->setMinimumSize(QSize(98, 0));
        quit->setFont(font);
        quit->setToolTipDuration(4000);
        quit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"     min-width: 5em;\n"
"     padding: 6px;\n"
"     border: 1px solid #404040;\n"
"     border-width: 3px;\n"
"     border-radius: 35px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #999999, stop: 1 #404040);\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	 color:rgb(200,200,200);\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #404040, stop: 1 #999999);\n"
" }\n"
"\n"
"QPushButton:disabled {\n"
"	color:rgb(200,200,200);\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									  stop: 0 #555555, stop: 1 #999999);\n"
"}\n"
"\n"
" QPushButton:hover {\n"
"     border-color: green;\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276"
                        "\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"));
        logo = new QLabel(MainMenu);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(400, 80, 1121, 201));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/img/img/image.png")));
        language = new QPushButton(MainMenu);
        language->setObjectName(QString::fromUtf8("language"));
        language->setGeometry(QRect(760, 753, 60, 60));
        language->setFocusPolicy(Qt::StrongFocus);
        language->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 1px solid #404040;\n"
"     border-width: 7px;\n"
"     border-radius: 30px;\n"
"	 background: black;\n"
"}\n"
"\n"
" QPushButton:hover {\n"
"     border-color: green;\n"
" }"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/lng/lng/russian.png"), QSize(), QIcon::Normal, QIcon::Off);
        language->setIcon(icon6);
        language->setIconSize(QSize(55, 55));
        QWidget::setTabOrder(play, color);
        QWidget::setTabOrder(color, howToPlay);
        QWidget::setTabOrder(howToPlay, quit);
        QWidget::setTabOrder(quit, ball);
        QWidget::setTabOrder(ball, leftEye);
        QWidget::setTabOrder(leftEye, lazer);
        QWidget::setTabOrder(lazer, rightEye);
        QWidget::setTabOrder(rightEye, frontLazer);
        QWidget::setTabOrder(frontLazer, hole);

        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
        AllWidgets->setTitle(QString());
        Game->setTitle(QString());
        leftEye->setText(QString());
        rightEye->setText(QString());
#if QT_CONFIG(tooltip)
        lazer->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lazer->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        lazer->setText(QString());
        ball->setText(QString());
        GameOver->setTitle(QString());
        frontLazer->setText(QString());
        blood->setText(QString());
        hole->setText(QString());
        dead_ball->setText(QString());
        leftEye_dead->setText(QString());
        rightEye_dead->setText(QString());
        GameOverDialog->setTitle(QString());
        gameOverDialogBackground->setText(QString());
#if QT_CONFIG(tooltip)
        gameOverMainMenu->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        gameOverMainMenu->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        gameOverMainMenu->setText(QString());
#if QT_CONFIG(tooltip)
        gameOverRestart->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        gameOverRestart->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        gameOverRestart->setText(QString());
        gameOverScorePanel->setText(QCoreApplication::translate("MainWidget", "Score:", nullptr));
        gameOverTypedSymbols->setText(QCoreApplication::translate("MainWidget", "Typed symbols: ", nullptr));
        gameOverMistakes->setText(QCoreApplication::translate("MainWidget", "Mistakes:", nullptr));
        gameOverSpeed->setText(QCoreApplication::translate("MainWidget", "Average speed:", nullptr));
        gameOverTimeAlive->setText(QCoreApplication::translate("MainWidget", "Time alive:", nullptr));
        Words->setTitle(QString());
        word->setText(QCoreApplication::translate("MainWidget", "\320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        next_word->setText(QCoreApplication::translate("MainWidget", "\321\206\320\270\320\262\320\270\320\273\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        wordInput->setText(QCoreApplication::translate("MainWidget", "\320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        CurrentResults->setTitle(QCoreApplication::translate("MainWidget", "GroupBox", nullptr));
        score->setText(QCoreApplication::translate("MainWidget", "Score:0", nullptr));
        mistakes->setText(QCoreApplication::translate("MainWidget", "Mistakes:0", nullptr));
        typedSymbols->setText(QCoreApplication::translate("MainWidget", "Symbols:0", nullptr));
        next_next_word->setText(QCoreApplication::translate("MainWidget", "\321\206\320\270\320\262\320\270\320\273\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        MainMenu->setTitle(QString());
        color->setText(QString());
#if QT_CONFIG(tooltip)
        play->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        play->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        play->setText(QCoreApplication::translate("MainWidget", "Play", nullptr));
#if QT_CONFIG(tooltip)
        howToPlay->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        howToPlay->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        howToPlay->setText(QCoreApplication::translate("MainWidget", "About", nullptr));
#if QT_CONFIG(tooltip)
        quit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        quit->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        quit->setText(QCoreApplication::translate("MainWidget", "Quit", nullptr));
        logo->setText(QString());
        language->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
