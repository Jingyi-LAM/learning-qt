#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel hello_label(QLabel::tr("Hello, nice to try Qt!"));
    hello_label.show();
    
    return a.exec();
}
