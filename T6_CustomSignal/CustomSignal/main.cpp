#include "demowidget.h"
#include "poorreceive.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DemoWidget demoWidget;
    PoorReceive poorReceive;
    QObject::connect(&demoWidget, SIGNAL(SendCustomSignal(QString)), &poorReceive, SLOT(ReceiveMessage(QString)));

    demoWidget.show();
    return a.exec();
}
