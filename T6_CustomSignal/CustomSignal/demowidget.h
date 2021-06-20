#ifndef DEMOWIDGET_H
#define DEMOWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class DemoWidget; }
QT_END_NAMESPACE

class DemoWidget : public QWidget
{
    Q_OBJECT

public:
    DemoWidget(QWidget *parent = nullptr);
    ~DemoWidget();

public:
    Ui::DemoWidget *ui;


signals:
    void SendCustomSignal(QString msg);
public slots:
    void ButtonClicked(void);
};
#endif // DEMOWIDGET_H
