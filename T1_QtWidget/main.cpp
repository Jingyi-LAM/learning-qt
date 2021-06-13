#include <QtWidgets/QApplication>
#include "demo_widget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DemoWidget demoWidget;
    demoWidget.show();
    
    return a.exec();
}