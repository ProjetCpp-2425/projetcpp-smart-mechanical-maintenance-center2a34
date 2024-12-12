#ifndef SERIALCOMMUNICATION_H
#define SERIALCOMMUNICATION_H

#include <QSerialPort>
#include <QSerialPortInfo>
#include <QObject>

class SerialCommunication : public QObject {
    Q_OBJECT

public:
    explicit SerialCommunication(QObject *parent = nullptr);
    bool connectArduino(const QString &portName);
    void writeToArduino(const QByteArray &data);
    QByteArray readFromArduino();
    void closeConnection();

private:
    QSerialPort *arduino;
};

#endif // SERIALCOMMUNICATION_H
