/********************************************************************************
** Form generated from reading UI file 'demowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOWIDGET_H
#define UI_DEMOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DemoWidget
{
public:
    QPushButton *btnSendSignal;

    void setupUi(QWidget *DemoWidget)
    {
        if (DemoWidget->objectName().isEmpty())
            DemoWidget->setObjectName(QString::fromUtf8("DemoWidget"));
        DemoWidget->resize(800, 600);
        btnSendSignal = new QPushButton(DemoWidget);
        btnSendSignal->setObjectName(QString::fromUtf8("btnSendSignal"));
        btnSendSignal->setGeometry(QRect(190, 100, 121, 41));

        retranslateUi(DemoWidget);

        QMetaObject::connectSlotsByName(DemoWidget);
    } // setupUi

    void retranslateUi(QWidget *DemoWidget)
    {
        DemoWidget->setWindowTitle(QApplication::translate("DemoWidget", "DemoWidget", nullptr));
        btnSendSignal->setText(QApplication::translate("DemoWidget", "Send Signal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DemoWidget: public Ui_DemoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOWIDGET_H
