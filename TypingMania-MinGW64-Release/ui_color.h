/********************************************************************************
** Form generated from reading UI file 'color.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOR_H
#define UI_COLOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_color
{
public:
    QSlider *redSlider;
    QLabel *blue;
    QSlider *greenSlider;
    QLabel *green;
    QLabel *finishedColor;
    QSlider *blueSlider;
    QLabel *red;
    QLineEdit *redValue;
    QLineEdit *greenValue;
    QLineEdit *blueValue;

    void setupUi(QDialog *color)
    {
        if (color->objectName().isEmpty())
            color->setObjectName(QString::fromUtf8("color"));
        color->resize(400, 400);
        color->setStyleSheet(QString::fromUtf8("background: qlineargradient( x1:0 y1:0, x2:0 y2:1, stop:0 black, stop:1 rgb(70, 0, 70));\n"
"border: 2px solid gray;\n"
"border-radius: 5px;"));
        redSlider = new QSlider(color);
        redSlider->setObjectName(QString::fromUtf8("redSlider"));
        redSlider->setGeometry(QRect(115, 236, 260, 22));
        redSlider->setStyleSheet(QString::fromUtf8("QSlider {\n"
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
        redSlider->setMaximum(255);
        redSlider->setValue(211);
        redSlider->setOrientation(Qt::Horizontal);
        blue = new QLabel(color);
        blue->setObjectName(QString::fromUtf8("blue"));
        blue->setGeometry(QRect(62, 326, 40, 40));
        greenSlider = new QSlider(color);
        greenSlider->setObjectName(QString::fromUtf8("greenSlider"));
        greenSlider->setGeometry(QRect(115, 286, 260, 22));
        greenSlider->setStyleSheet(QString::fromUtf8("QSlider {\n"
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
        greenSlider->setMaximum(255);
        greenSlider->setValue(211);
        greenSlider->setOrientation(Qt::Horizontal);
        green = new QLabel(color);
        green->setObjectName(QString::fromUtf8("green"));
        green->setGeometry(QRect(62, 277, 40, 40));
        finishedColor = new QLabel(color);
        finishedColor->setObjectName(QString::fromUtf8("finishedColor"));
        finishedColor->setGeometry(QRect(120, 36, 160, 160));
        blueSlider = new QSlider(color);
        blueSlider->setObjectName(QString::fromUtf8("blueSlider"));
        blueSlider->setGeometry(QRect(115, 336, 260, 22));
        blueSlider->setStyleSheet(QString::fromUtf8("QSlider {\n"
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
        blueSlider->setMaximum(255);
        blueSlider->setValue(211);
        blueSlider->setOrientation(Qt::Horizontal);
        red = new QLabel(color);
        red->setObjectName(QString::fromUtf8("red"));
        red->setGeometry(QRect(62, 227, 40, 40));
        redValue = new QLineEdit(color);
        redValue->setObjectName(QString::fromUtf8("redValue"));
        redValue->setGeometry(QRect(13, 235, 38, 21));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        redValue->setFont(font);
        redValue->setStyleSheet(QString::fromUtf8("background: rgb(0,0,0,0);\n"
"border: none;\n"
"color: white;"));
        redValue->setMaxLength(3);
        redValue->setAlignment(Qt::AlignCenter);
        greenValue = new QLineEdit(color);
        greenValue->setObjectName(QString::fromUtf8("greenValue"));
        greenValue->setGeometry(QRect(13, 285, 38, 21));
        greenValue->setFont(font);
        greenValue->setStyleSheet(QString::fromUtf8("background: rgb(0,0,0,0);\n"
"border: none;\n"
"color: white;"));
        greenValue->setMaxLength(3);
        greenValue->setAlignment(Qt::AlignCenter);
        blueValue = new QLineEdit(color);
        blueValue->setObjectName(QString::fromUtf8("blueValue"));
        blueValue->setGeometry(QRect(13, 336, 38, 21));
        blueValue->setFont(font);
        blueValue->setStyleSheet(QString::fromUtf8("background: rgb(0,0,0,0);\n"
"border: none;\n"
"color: white;"));
        blueValue->setMaxLength(3);
        blueValue->setAlignment(Qt::AlignCenter);

        retranslateUi(color);

        QMetaObject::connectSlotsByName(color);
    } // setupUi

    void retranslateUi(QDialog *color)
    {
        color->setWindowTitle(QCoreApplication::translate("color", "Dialog", nullptr));
        blue->setText(QString());
        green->setText(QString());
        finishedColor->setText(QString());
        red->setText(QString());
        redValue->setText(QCoreApplication::translate("color", "200", nullptr));
        greenValue->setText(QCoreApplication::translate("color", "200", nullptr));
        blueValue->setText(QCoreApplication::translate("color", "200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class color: public Ui_color {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOR_H
