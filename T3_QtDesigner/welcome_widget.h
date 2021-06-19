#ifndef WELCOME_WIDGET_H
#define WELCOME_WIDGET_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>
#include "ui_welcome.h"

class WelcomeWidget : public QWidget, public Ui::Form
{
    Q_OBJECT
public:
    explicit WelcomeWidget(QWidget *parent = 0);
    ~WelcomeWidget();

protected:
    void AdjustLabel(void);
};

#endif
