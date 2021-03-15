/********************************************************************************
** Form generated from reading UI file 'language.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANGUAGE_H
#define UI_LANGUAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Language
{
public:
    QPushButton *russian;
    QLabel *selectLabel;
    QPushButton *english;

    void setupUi(QDialog *Language)
    {
        if (Language->objectName().isEmpty())
            Language->setObjectName(QString::fromUtf8("Language"));
        Language->resize(400, 270);
        Language->setStyleSheet(QString::fromUtf8("background: qlineargradient( x1:0 y1:0, x2:0 y2:1, stop:0 black, stop:1 rgb(70, 0, 70));\n"
"border: 2px solid gray;\n"
"border-radius: 5px;"));
        russian = new QPushButton(Language);
        russian->setObjectName(QString::fromUtf8("russian"));
        russian->setGeometry(QRect(230, 130, 91, 91));
        russian->setStyleSheet(QString::fromUtf8("border: none; background: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/lng/lng/russian.png"), QSize(), QIcon::Normal, QIcon::Off);
        russian->setIcon(icon);
        russian->setIconSize(QSize(90, 90));
        selectLabel = new QLabel(Language);
        selectLabel->setObjectName(QString::fromUtf8("selectLabel"));
        selectLabel->setGeometry(QRect(0, 10, 401, 121));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(33);
        font.setBold(true);
        font.setWeight(75);
        selectLabel->setFont(font);
        selectLabel->setStyleSheet(QString::fromUtf8("background:none;\n"
"color: white;\n"
"border: none;"));
        selectLabel->setFrameShape(QFrame::NoFrame);
        selectLabel->setAlignment(Qt::AlignCenter);
        english = new QPushButton(Language);
        english->setObjectName(QString::fromUtf8("english"));
        english->setGeometry(QRect(70, 130, 91, 91));
        english->setStyleSheet(QString::fromUtf8("border: none; background: none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/lng/lng/english.png"), QSize(), QIcon::Normal, QIcon::Off);
        english->setIcon(icon1);
        english->setIconSize(QSize(120, 90));

        retranslateUi(Language);

        QMetaObject::connectSlotsByName(Language);
    } // setupUi

    void retranslateUi(QDialog *Language)
    {
        Language->setWindowTitle(QCoreApplication::translate("Language", "Dialog", nullptr));
        russian->setText(QString());
        selectLabel->setText(QCoreApplication::translate("Language", "Vocabulary", nullptr));
        english->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Language: public Ui_Language {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANGUAGE_H
