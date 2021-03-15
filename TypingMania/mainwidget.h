#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QKeyEvent>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWidget; }
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

    int lazerSpeed = 4;
    int difficulty = 4;
    QString language = "russian";
    QVector<QString> wordMass;

protected:
    void keyPressEvent(QKeyEvent *);

public slots:

    void changeColor(QColor color);
    void Play();
    void WordInit(QString lang = "russian");
    void MainMenuPanel();
    void ChangeDifficulty(int difficulty);

private slots:

    void BallColorInit();
    void DifficultyDialog();
    void startGamingAnimation();
    void changeColor();
    void changeLanguage();
    void HowToPlayDialog();
    void gameOver();
    void gameOverDialog();
    void MainTimer();
    void CalmTimer();
    void FrightenTimer();
    void Jump(int jumpValue = 170);
    void LazerMovementTimer();
    void EyeMovementTimer();
    void WordGenerator();
    void InitGameValues();
    int ScoreCounter(QString word);

    void on_lineEdit_textEdited(const QString &arg1);

private:
    Ui::MainWidget *ui;
};
#endif // MAINWIDGET_H
