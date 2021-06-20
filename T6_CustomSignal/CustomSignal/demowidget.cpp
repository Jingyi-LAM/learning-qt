#include "demowidget.h"
#include "ui_demowidget.h"

DemoWidget::DemoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DemoWidget)
{
    ui->setupUi(this);

    connect(ui->btnSendSignal, SIGNAL(clicked()), this, SLOT(ButtonClicked()));
}

DemoWidget::~DemoWidget()
{
    delete ui;
}

void DemoWidget::ButtonClicked(void)
{
    emit SendCustomSignal(tr("Send a customize message"));
}

