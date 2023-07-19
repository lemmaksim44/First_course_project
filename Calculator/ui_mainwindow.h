/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_3;
    QAction *action_4;
    QAction *action1_0_0;
    QWidget *centralwidget;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_Dot;
    QPushButton *pushButton_Result;
    QPushButton *pushButton_Sum;
    QPushButton *pushButton_Difference;
    QPushButton *pushButton_Multiplication;
    QPushButton *pushButton_Division;
    QPushButton *pushButton_Sin;
    QPushButton *pushButton_Cos;
    QPushButton *pushButton_Tg;
    QPushButton *pushButton_Ctg;
    QPushButton *pushButton_Sqrt;
    QPushButton *pushButton_Square;
    QPushButton *pushButton_C;
    QPushButton *pushButton_OFF;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_Plus_or_Minus;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(324, 425);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../calculator_v1.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action->setCheckable(false);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action1_0_0 = new QAction(MainWindow);
        action1_0_0->setObjectName(QString::fromUtf8("action1_0_0"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(0, 0, 321, 81));
        lcdNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lcdNumber->setDigitCount(12);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 280, 81, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 280, 81, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 280, 81, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 230, 81, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(80, 230, 81, 51));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(160, 230, 81, 51));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 180, 81, 51));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(80, 180, 81, 51));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(160, 180, 81, 51));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(0, 330, 81, 51));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_Dot = new QPushButton(centralwidget);
        pushButton_Dot->setObjectName(QString::fromUtf8("pushButton_Dot"));
        pushButton_Dot->setGeometry(QRect(80, 330, 81, 51));
        pushButton_Dot->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_Result = new QPushButton(centralwidget);
        pushButton_Result->setObjectName(QString::fromUtf8("pushButton_Result"));
        pushButton_Result->setGeometry(QRect(160, 330, 81, 51));
        pushButton_Result->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_Sum = new QPushButton(centralwidget);
        pushButton_Sum->setObjectName(QString::fromUtf8("pushButton_Sum"));
        pushButton_Sum->setGeometry(QRect(240, 330, 81, 51));
        pushButton_Sum->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        pushButton_Difference = new QPushButton(centralwidget);
        pushButton_Difference->setObjectName(QString::fromUtf8("pushButton_Difference"));
        pushButton_Difference->setGeometry(QRect(240, 280, 81, 51));
        pushButton_Difference->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        pushButton_Multiplication = new QPushButton(centralwidget);
        pushButton_Multiplication->setObjectName(QString::fromUtf8("pushButton_Multiplication"));
        pushButton_Multiplication->setGeometry(QRect(240, 230, 81, 51));
        pushButton_Multiplication->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        pushButton_Division = new QPushButton(centralwidget);
        pushButton_Division->setObjectName(QString::fromUtf8("pushButton_Division"));
        pushButton_Division->setGeometry(QRect(240, 180, 81, 51));
        pushButton_Division->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        pushButton_Sin = new QPushButton(centralwidget);
        pushButton_Sin->setObjectName(QString::fromUtf8("pushButton_Sin"));
        pushButton_Sin->setGeometry(QRect(180, 80, 71, 51));
        pushButton_Sin->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        pushButton_Cos = new QPushButton(centralwidget);
        pushButton_Cos->setObjectName(QString::fromUtf8("pushButton_Cos"));
        pushButton_Cos->setGeometry(QRect(250, 80, 71, 51));
        pushButton_Cos->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        pushButton_Tg = new QPushButton(centralwidget);
        pushButton_Tg->setObjectName(QString::fromUtf8("pushButton_Tg"));
        pushButton_Tg->setGeometry(QRect(180, 130, 71, 51));
        pushButton_Tg->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        pushButton_Ctg = new QPushButton(centralwidget);
        pushButton_Ctg->setObjectName(QString::fromUtf8("pushButton_Ctg"));
        pushButton_Ctg->setGeometry(QRect(250, 130, 71, 51));
        pushButton_Ctg->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        pushButton_Sqrt = new QPushButton(centralwidget);
        pushButton_Sqrt->setObjectName(QString::fromUtf8("pushButton_Sqrt"));
        pushButton_Sqrt->setGeometry(QRect(140, 80, 41, 51));
        pushButton_Sqrt->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        pushButton_Square = new QPushButton(centralwidget);
        pushButton_Square->setObjectName(QString::fromUtf8("pushButton_Square"));
        pushButton_Square->setGeometry(QRect(140, 130, 41, 51));
        pushButton_Square->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        pushButton_C = new QPushButton(centralwidget);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        pushButton_C->setGeometry(QRect(70, 130, 71, 51));
        pushButton_C->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        pushButton_OFF = new QPushButton(centralwidget);
        pushButton_OFF->setObjectName(QString::fromUtf8("pushButton_OFF"));
        pushButton_OFF->setGeometry(QRect(0, 80, 71, 51));
        pushButton_OFF->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setGeometry(QRect(0, 130, 71, 51));
        pushButton_AC->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        pushButton_Plus_or_Minus = new QPushButton(centralwidget);
        pushButton_Plus_or_Minus->setObjectName(QString::fromUtf8("pushButton_Plus_or_Minus"));
        pushButton_Plus_or_Minus->setGeometry(QRect(70, 80, 71, 51));
        pushButton_Plus_or_Minus->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 324, 20));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menu);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menu);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(menu_2->menuAction());
        menu->addAction(menu_3->menuAction());
        menu_2->addAction(action_3);
        menu_2->addAction(action_4);
        menu_3->addAction(action1_0_0);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        action_3->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\266\320\260\320\275\320\272\320\276\320\262 \320\234\320\260\320\272\321\201\320\270\320\274", nullptr));
        action_4->setText(QApplication::translate("MainWindow", "\320\242\320\265\321\202\320\265\320\275\321\214\320\272\320\270\320\275 \320\241\320\265\321\200\320\263\320\265\320\271", nullptr));
        action1_0_0->setText(QApplication::translate("MainWindow", "1.0.0.1", nullptr));
#ifndef QT_NO_TOOLTIP
        action1_0_0->setToolTip(QApplication::translate("MainWindow", "1.0.0.1", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_Dot->setText(QApplication::translate("MainWindow", ".", nullptr));
        pushButton_Result->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton_Sum->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_Difference->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_Multiplication->setText(QApplication::translate("MainWindow", "*", nullptr));
        pushButton_Division->setText(QApplication::translate("MainWindow", "/", nullptr));
        pushButton_Sin->setText(QApplication::translate("MainWindow", "Sin", nullptr));
        pushButton_Cos->setText(QApplication::translate("MainWindow", "Cos", nullptr));
        pushButton_Tg->setText(QApplication::translate("MainWindow", "Tg", nullptr));
        pushButton_Ctg->setText(QApplication::translate("MainWindow", "Ctg", nullptr));
        pushButton_Sqrt->setText(QApplication::translate("MainWindow", "\342\210\232", nullptr));
        pushButton_Square->setText(QApplication::translate("MainWindow", "x^y", nullptr));
        pushButton_C->setText(QApplication::translate("MainWindow", "C", nullptr));
        pushButton_OFF->setText(QApplication::translate("MainWindow", "OFF", nullptr));
        pushButton_AC->setText(QApplication::translate("MainWindow", "AC", nullptr));
        pushButton_Plus_or_Minus->setText(QApplication::translate("MainWindow", "+/-", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\240\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\320\270", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\222\320\265\321\200\321\201\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
