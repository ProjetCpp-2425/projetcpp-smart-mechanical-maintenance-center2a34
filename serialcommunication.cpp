#include "serialcommunication.h"

SerialCommunication::SerialCommunication(QObject *parent) : QObject(parent) {
    arduino = new QSerialPort(this);
}

bool SerialCommunication::connectArduino(const QString &portName) {
    arduino->setPortName(portName);
    arduino->setBaudRate(QSerialPort::Baud9600);
    arduino->setDataBits(QSerialPort::Data8);
    arduino->setParity(QSerialPort::NoParity);
    arduino->setStopBits(QSerialPort::OneStop);
    arduino->setFlowControl(QSerialPort::NoFlowControl);
    return arduino->open(QIODevice::ReadWrite);
}

void SerialCommunication::writeToArduino(const QByteArray &data) {
    if (arduino->isWritable())
        arduino->write(data);
}

QByteArray SerialCommunication::readFromArduino() {
    if (arduino->isReadable())
        return arduino->readAll();
    return QByteArray();
}

void SerialCommunication::closeConnection() {
    if (arduino->isOpen())
        arduino->close();
}
