#include <QtWidgets/QApplication>
#include "ui_welcome.h"
#include "welcome_widget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *mainWindow = new QWidget();
    Ui::Form welcomeWidgetAgent;
    welcomeWidgetAgent.setupUi(mainWindow);
    mainWindow->show();

    WelcomeWidget *welcomeWidget = new WelcomeWidget();
    welcomeWidget->show();
    
    return a.exec();
}