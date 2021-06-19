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

public slots:
    void TakeAction(void);

private slots:
    void on_btnAction4Frustration_clicked();

    void on_leInput_textEdited(const QString &arg1);

private:
    Ui::DemoWidget *ui;
};
#endif // DEMOWIDGET_H
