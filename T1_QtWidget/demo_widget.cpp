#include "demo_widget.h"

DemoWidget::DemoWidget(QWidget *parent)
{
    resize(300, 200);
    m_lblInfo = new QLabel(tr("<h1>This is Info label</h1>"), this);
}

DemoWidget::~DemoWidget()
{
    delete m_lblInfo;
    m_lblInfo = NULL;
}