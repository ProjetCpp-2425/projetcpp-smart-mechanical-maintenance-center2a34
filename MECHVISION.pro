QT += core gui sql
QT += core gui widgets
QT += charts
QT += axcontainer
QT += network
QT += core gui quick positioning location
QT += quick location
QT += core gui quick
QT += quickwidgets
QT += quick
QT += serialport


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11
CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    connection.cpp \
    employes.cpp \
    main.cpp \
    mainwindow.cpp \
    serialcommunication.cpp \
    utilisateur.cpp

HEADERS += \
    connection.h \
    employes.h \
    mainwindow.h \
    serialcommunication.h \
    utilisateur.h



FORMS += \
    mainwindow.ui



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
