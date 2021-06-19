#include "welcomewidget.h"
#include "ui_welcomewidget.h"

WelcomeWidget::WelcomeWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WelcomeWidget)
{
    ui->setupUi(this);
    ui->lblWelcome->setText("Jingyi Saigo");
    ui->lblWelcome->setGeometry(100, 0, 500, 500);
}

WelcomeWidget::~WelcomeWidget()
{
    delete ui;
}

