/********************************************************************************
** Form generated from reading UI file 'howtoplay.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOWTOPLAY_H
#define UI_HOWTOPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_HowToPlay
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *HowToPlay)
    {
        if (HowToPlay->objectName().isEmpty())
            HowToPlay->setObjectName(QString::fromUtf8("HowToPlay"));
        HowToPlay->resize(912, 433);
        HowToPlay->setStyleSheet(QString::fromUtf8("background: qlineargradient( x1:0 y1:0, x2:0 y2:1, stop:0 black, stop:1 rgb(70, 0, 70));\n"
"border: 2px solid gray;\n"
"border-radius: 5px;"));
        label = new QLabel(HowToPlay);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 240, 871, 161));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background: none;\n"
"border: none;\n"
"color: white;"));
        label->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        label->setWordWrap(true);
        label_2 = new QLabel(HowToPlay);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 30, 641, 191));
        label_2->setStyleSheet(QString::fromUtf8("background: none; border: none;"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/img/keyboard.png")));

        retranslateUi(HowToPlay);

        QMetaObject::connectSlotsByName(HowToPlay);
    } // setupUi

    void retranslateUi(QDialog *HowToPlay)
    {
        HowToPlay->setWindowTitle(QCoreApplication::translate("HowToPlay", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("HowToPlay", "Typing Survival - \321\200\320\260\320\267\320\262\320\270\320\262\320\260\321\216\321\211\320\260\321\217 \320\270\320\263\321\200\320\260, \320\277\321\200\320\265\320\264\320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\275\320\260\321\217 \320\264\320\273\321\217 \321\200\320\260\320\267\320\262\320\270\321\202\320\270\321\217 \320\275\320\260\320\262\321\213\320\272\320\260 \320\275\320\260\320\261\320\276\321\200\320\260 \320\275\320\260 \320\272\320\273\320\260\320\262\320\270\320\260\321\202\321\203\321\200\320\265. \320\222 \320\270\320\263\321\200\321\203 \320\267\320\260\320\263\321\200\321\203\320\266\320\265\320\275\321\213 \320\260\320\275\320\263\320\273\320\270\320\271\321\201\320\272\320\270\320\271 \320\270 \321\200\321\203\321\201\321\201\320\272\320\270\320\271 \321\201\320\273\320\276\320\262\320\260\321\200\320\270. \320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\216 \321\200\320\265\320\272\320\276\320\274\320\265\320\275\320"
                        "\264\321\203\320\265\321\202\321\201\321\217 \320\276\320\262\320\273\320\260\320\264\320\265\321\202\321\214 \321\201\320\273\320\265\320\277\321\213\320\274 \320\275\320\260\320\262\321\213\320\272\320\276\320\274 \320\277\320\265\321\207\320\260\321\202\320\270 \320\264\320\273\321\217 \320\273\321\203\321\207\321\210\320\265\320\263\320\276 \321\215\321\204\321\204\320\265\320\272\321\202\320\260 \320\276\321\202 \320\270\320\263\321\200\321\213. \320\220\320\262\321\202\320\276\321\200\321\201\320\272\320\270\320\265 \320\277\321\200\320\260\320\262\320\260 \320\275\320\265 \320\267\320\260\321\211\320\270\321\211\320\265\320\275\321\213, \320\276\320\264\320\275\320\260\320\272\320\276 \320\275\320\260\321\200\321\203\321\210\320\260\321\202\321\214 \320\270\321\205 \320\262\321\201\321\221 \320\266\320\265 \320\275\320\265 \321\200\320\265\320\272\320\276\320\274\320\265\320\275\320\264\321\203\320\265\321\202\321\201\321\217.", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HowToPlay: public Ui_HowToPlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOWTOPLAY_H
