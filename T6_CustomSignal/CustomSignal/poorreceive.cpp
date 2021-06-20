#include "poorreceive.h"

PoorReceive::PoorReceive(QObject *parent) : QObject(parent)
{

}

void PoorReceive::ReceiveMessage(QString str)
{
    QMessageBox::information(NULL, tr("Show"), str);
}

void PoorReceive::ReceiveMessage(void)
{
    QMessageBox::information(NULL, tr("Show"), "User-defined message");
}
