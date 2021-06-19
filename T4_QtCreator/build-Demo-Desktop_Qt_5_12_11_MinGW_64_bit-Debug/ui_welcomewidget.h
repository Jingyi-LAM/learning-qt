/********************************************************************************
** Form generated from reading UI file 'welcomewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWIDGET_H
#define UI_WELCOMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWidget
{
public:
    QLabel *lblWelcome;

    void setupUi(QWidget *WelcomeWidget)
    {
        if (WelcomeWidget->objectName().isEmpty())
            WelcomeWidget->setObjectName(QString::fromUtf8("WelcomeWidget"));
        WelcomeWidget->resize(800, 600);
        lblWelcome = new QLabel(WelcomeWidget);
        lblWelcome->setObjectName(QString::fromUtf8("lblWelcome"));
        lblWelcome->setGeometry(QRect(260, 130, 47, 14));

        retranslateUi(WelcomeWidget);

        QMetaObject::connectSlotsByName(WelcomeWidget);
    } // setupUi

    void retranslateUi(QWidget *WelcomeWidget)
    {
        WelcomeWidget->setWindowTitle(QApplication::translate("WelcomeWidget", "WelcomeWidget", nullptr));
        lblWelcome->setText(QApplication::translate("WelcomeWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWidget: public Ui_WelcomeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWIDGET_H
