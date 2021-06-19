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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DemoWidget
{
public:
    QLabel *lblTitle;
    QPushButton *btnAction;
    QLabel *lblFrustration;
    QPushButton *btnAction4Frustration;
    QLineEdit *leInput;
    QPushButton *btnDisplay;
    QTextBrowser *tbDisplay;

    void setupUi(QWidget *DemoWidget)
    {
        if (DemoWidget->objectName().isEmpty())
            DemoWidget->setObjectName(QString::fromUtf8("DemoWidget"));
        DemoWidget->resize(800, 600);
        lblTitle = new QLabel(DemoWidget);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(120, 10, 271, 101));
        btnAction = new QPushButton(DemoWidget);
        btnAction->setObjectName(QString::fromUtf8("btnAction"));
        btnAction->setGeometry(QRect(100, 140, 80, 22));
        lblFrustration = new QLabel(DemoWidget);
        lblFrustration->setObjectName(QString::fromUtf8("lblFrustration"));
        lblFrustration->setGeometry(QRect(310, 20, 271, 81));
        btnAction4Frustration = new QPushButton(DemoWidget);
        btnAction4Frustration->setObjectName(QString::fromUtf8("btnAction4Frustration"));
        btnAction4Frustration->setGeometry(QRect(300, 140, 80, 22));
        leInput = new QLineEdit(DemoWidget);
        leInput->setObjectName(QString::fromUtf8("leInput"));
        leInput->setGeometry(QRect(100, 280, 441, 21));
        btnDisplay = new QPushButton(DemoWidget);
        btnDisplay->setObjectName(QString::fromUtf8("btnDisplay"));
        btnDisplay->setGeometry(QRect(100, 330, 441, 22));
        tbDisplay = new QTextBrowser(DemoWidget);
        tbDisplay->setObjectName(QString::fromUtf8("tbDisplay"));
        tbDisplay->setGeometry(QRect(100, 360, 441, 111));

        retranslateUi(DemoWidget);

        QMetaObject::connectSlotsByName(DemoWidget);
    } // setupUi

    void retranslateUi(QWidget *DemoWidget)
    {
        DemoWidget->setWindowTitle(QApplication::translate("DemoWidget", "DemoWidget", nullptr));
        lblTitle->setText(QApplication::translate("DemoWidget", "Jingyi ?", nullptr));
        btnAction->setText(QApplication::translate("DemoWidget", "To-Do", nullptr));
        lblFrustration->setText(QApplication::translate("DemoWidget", "Frustration ?", nullptr));
        btnAction4Frustration->setText(QApplication::translate("DemoWidget", "To-Do", nullptr));
        btnDisplay->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DemoWidget: public Ui_DemoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOWIDGET_H
