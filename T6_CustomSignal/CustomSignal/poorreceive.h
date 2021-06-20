#ifndef POORRECEIVE_H
#define POORRECEIVE_H

#include <QObject>
#include <QMessageBox>

class PoorReceive : public QObject
{
    Q_OBJECT
public:
    explicit PoorReceive(QObject *parent = nullptr);

signals:

private slots:
    void ReceiveMessage(QString str);
    void ReceiveMessage(void);
};

#endif // POORRECEIVE_H
