#include "demowidget.h"
#include "ui_demowidget.h"

DemoWidget::DemoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DemoWidget)
{
    ui->setupUi(this);

    connect(ui->btnAction, SIGNAL(clicked()), this, SLOT(TakeAction()));
}

DemoWidget::~DemoWidget()
{
    delete ui;
}

void DemoWidget::TakeAction(void)
{
    ui->lblTitle->setText("FIGHT!!");
}

void DemoWidget::on_btnAction4Frustration_clicked()
{
    ui->lblFrustration->setText("Dont't MIND!!");
}


void DemoWidget::on_leInput_textEdited(const QString &arg1)
{
    ui->btnDisplay->setText(arg1);
    ui->tbDisplay->setText(arg1);
}

