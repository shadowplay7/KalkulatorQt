/********************************************************************************
** Form generated from reading UI file 'KalkulatorQt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KALKULATORQT_H
#define UI_KALKULATORQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KalkulatorQtClass
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *wyswietlEdit;
    QPushButton *sumButton;
    QPushButton *subButton;
    QPushButton *multiButton;
    QPushButton *clearButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *KalkulatorQtClass)
    {
        if (KalkulatorQtClass->objectName().isEmpty())
            KalkulatorQtClass->setObjectName(QString::fromUtf8("KalkulatorQtClass"));
        KalkulatorQtClass->resize(338, 226);
        centralwidget = new QWidget(KalkulatorQtClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 20, 81, 41));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 20, 81, 41));
        wyswietlEdit = new QLineEdit(centralwidget);
        wyswietlEdit->setObjectName(QString::fromUtf8("wyswietlEdit"));
        wyswietlEdit->setGeometry(QRect(210, 20, 81, 41));
        sumButton = new QPushButton(centralwidget);
        sumButton->setObjectName(QString::fromUtf8("sumButton"));
        sumButton->setGeometry(QRect(30, 70, 81, 51));
        subButton = new QPushButton(centralwidget);
        subButton->setObjectName(QString::fromUtf8("subButton"));
        subButton->setGeometry(QRect(120, 70, 81, 51));
        multiButton = new QPushButton(centralwidget);
        multiButton->setObjectName(QString::fromUtf8("multiButton"));
        multiButton->setGeometry(QRect(210, 70, 81, 51));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(30, 130, 81, 31));
        KalkulatorQtClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(KalkulatorQtClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 338, 21));
        KalkulatorQtClass->setMenuBar(menubar);
        statusbar = new QStatusBar(KalkulatorQtClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        KalkulatorQtClass->setStatusBar(statusbar);

        retranslateUi(KalkulatorQtClass);

        QMetaObject::connectSlotsByName(KalkulatorQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *KalkulatorQtClass)
    {
        KalkulatorQtClass->setWindowTitle(QApplication::translate("KalkulatorQtClass", "KalkulatorQt", nullptr));
        sumButton->setText(QApplication::translate("KalkulatorQtClass", "+", nullptr));
        subButton->setText(QApplication::translate("KalkulatorQtClass", "-", nullptr));
        multiButton->setText(QApplication::translate("KalkulatorQtClass", "*", nullptr));
        clearButton->setText(QApplication::translate("KalkulatorQtClass", "clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KalkulatorQtClass: public Ui_KalkulatorQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KALKULATORQT_H
