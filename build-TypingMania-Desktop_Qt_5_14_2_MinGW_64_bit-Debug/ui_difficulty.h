/********************************************************************************
** Form generated from reading UI file 'difficulty.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFFICULTY_H
#define UI_DIFFICULTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Difficulty
{
public:
    QSlider *slider;
    QLabel *difficultyLabel;
    QPushButton *okay;

    void setupUi(QDialog *Difficulty)
    {
        if (Difficulty->objectName().isEmpty())
            Difficulty->setObjectName(QString::fromUtf8("Difficulty"));
        Difficulty->resize(500, 300);
        Difficulty->setStyleSheet(QString::fromUtf8("background: qlineargradient( x1:0 y1:0, x2:0 y2:1, stop:0 black, stop:1 rgb(70, 0, 70));\n"
"border: 2px solid gray;\n"
"border-radius: 5px;"));
        Difficulty->setModal(true);
        slider = new QSlider(Difficulty);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setGeometry(QRect(40, 230, 361, 22));
        slider->setStyleSheet(QString::fromUtf8("QSlider {\n"
"	border: none;\n"
"    background: none;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    height: 6px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"    /*background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);*/\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"}"));
        slider->setMinimum(1);
        slider->setMaximum(5);
        slider->setOrientation(Qt::Horizontal);
        difficultyLabel = new QLabel(Difficulty);
        difficultyLabel->setObjectName(QString::fromUtf8("difficultyLabel"));
        difficultyLabel->setGeometry(QRect(0, 50, 501, 121));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        difficultyLabel->setFont(font);
        difficultyLabel->setStyleSheet(QString::fromUtf8("background:none;\n"
"color: white;\n"
"border: none;"));
        difficultyLabel->setFrameShape(QFrame::NoFrame);
        difficultyLabel->setAlignment(Qt::AlignCenter);
        okay = new QPushButton(Difficulty);
        okay->setObjectName(QString::fromUtf8("okay"));
        okay->setGeometry(QRect(422, 215, 51, 51));
        okay->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier New"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        okay->setFont(font1);
        okay->setToolTipDuration(4000);
        okay->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"     padding: 6px;\n"
"     border: 1px solid #404040;\n"
"     border-width: 3px;\n"
"     border-radius: 25px;\n"
"	 outline: none;\n"
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
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320"
                        "\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"));

        retranslateUi(Difficulty);

        QMetaObject::connectSlotsByName(Difficulty);
    } // setupUi

    void retranslateUi(QDialog *Difficulty)
    {
        Difficulty->setWindowTitle(QCoreApplication::translate("Difficulty", "Dialog", nullptr));
        difficultyLabel->setText(QCoreApplication::translate("Difficulty", "Easy", nullptr));
#if QT_CONFIG(tooltip)
        okay->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        okay->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        okay->setText(QCoreApplication::translate("Difficulty", "\320\236\320\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Difficulty: public Ui_Difficulty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFICULTY_H
