#include "welcome_widget.h"

WelcomeWidget::WelcomeWidget(QWidget *parent) : QWidget(parent)
{
    setupUi(this);
    AdjustLabel();
}

WelcomeWidget::~WelcomeWidget()
{
    
}

void WelcomeWidget::AdjustLabel(void)
{
    lbl_title->setText(tr("Welcome Widget"));
}

