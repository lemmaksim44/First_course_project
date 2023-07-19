/********************************************************************************
** Form generated from reading UI file 'error.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROR_H
#define UI_ERROR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Error
{
public:
    QLabel *label;

    void setupUi(QDialog *Error)
    {
        if (Error->objectName().isEmpty())
            Error->setObjectName(QString::fromUtf8("Error"));
        Error->resize(181, 70);
        Error->setMinimumSize(QSize(181, 70));
        Error->setMaximumSize(QSize(181, 70));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../error.png"), QSize(), QIcon::Normal, QIcon::Off);
        Error->setWindowIcon(icon);
        Error->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        label = new QLabel(Error);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 181, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Error);

        QMetaObject::connectSlotsByName(Error);
    } // setupUi

    void retranslateUi(QDialog *Error)
    {
        Error->setWindowTitle(QApplication::translate("Error", "Error", nullptr));
        label->setText(QApplication::translate("Error", "\320\235\320\265\320\262\320\265\321\200\320\275\321\213\320\271 \320\262\320\262\320\276\320\264!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Error: public Ui_Error {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROR_H
