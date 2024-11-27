QT       += core gui sql
QT += core gui widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += core gui charts
QT += core gui quick
QT += quickwidgets
QT += quick
QT       += core gui widgets datavisualization
QT += quick location
CONFIG += c++11

QT += core gui quick positioning location
CONFIG += c++17



CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    connection.cpp \
    machine.cpp \
    main.cpp \
    mainwindow.cpp \
    modifiermachine.cpp \
    statwindow.cpp \


HEADERS += \
    connection.h \
    machine.h \
    mainwindow.h \
    modifiermachine.h \
    statwindow.h

FORMS += \
    mainwindow.ui \
    modifiermachine.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../mapbox-controls-master/packages/compass/README.md \
    ../mapbox-controls-master/packages/compass/package.json \
    ../mapbox-controls-master/packages/compass/src/icons.js \
    ../mapbox-controls-master/packages/compass/src/index.css \
    ../mapbox-controls-master/packages/compass/src/index.js \
    ../mapbox-controls-master/packages/compass/src/types.js \
    ../mapbox-controls-master/packages/compass/tsconfig.json \
    ../mapbox-controls-master/packages/helpers/package.json \
    ../mapbox-controls-master/packages/helpers/src/index.js \
    ../mapbox-controls-master/packages/helpers/tsconfig.json \
    ../mapbox-controls-master/packages/image/README.md \
    ../mapbox-controls-master/packages/image/package.json \
    ../mapbox-controls-master/packages/image/src/center-position.js \
    ../mapbox-controls-master/packages/image/src/file.js \
    ../mapbox-controls-master/packages/image/src/icons.js \
    ../mapbox-controls-master/packages/image/src/index.css \
    ../mapbox-controls-master/packages/image/src/index.js \
    ../mapbox-controls-master/packages/image/src/modes/move.js \
    ../mapbox-controls-master/packages/image/src/modes/rotate.js \
    ../mapbox-controls-master/packages/image/src/modes/scale.js \
    ../mapbox-controls-master/packages/image/src/raster.js \
    ../mapbox-controls-master/packages/image/src/types.js \
    ../mapbox-controls-master/packages/image/tsconfig.json \
    ../mapbox-controls-master/packages/inspect/README.md \
    ../mapbox-controls-master/packages/inspect/package.json \
    ../mapbox-controls-master/packages/inspect/src/icons.js \
    ../mapbox-controls-master/packages/inspect/src/index.css \
    ../mapbox-controls-master/packages/inspect/src/index.js \
    ../mapbox-controls-master/packages/inspect/src/popup.js \
    ../mapbox-controls-master/packages/inspect/src/types.js \
    ../mapbox-controls-master/packages/inspect/tsconfig.json \
    ../mapbox-controls-master/packages/language/README.md \
    ../mapbox-controls-master/packages/language/package.json \
    ../mapbox-controls-master/packages/language/src/index.js \
    ../mapbox-controls-master/packages/language/src/types.js \
    ../mapbox-controls-master/packages/language/tsconfig.json \
    ../mapbox-controls-master/packages/ruler/README.md \
    ../mapbox-controls-master/packages/ruler/package.json \
    ../mapbox-controls-master/packages/ruler/src/icons.js \
    ../mapbox-controls-master/packages/ruler/src/index.css \
    ../mapbox-controls-master/packages/ruler/src/index.js \
    ../mapbox-controls-master/packages/ruler/src/layers.js \
    ../mapbox-controls-master/packages/ruler/src/sources.js \
    ../mapbox-controls-master/packages/ruler/src/types.js \
    ../mapbox-controls-master/packages/ruler/tsconfig.json \
    ../mapbox-controls-master/packages/styles/README.md \
    ../mapbox-controls-master/packages/styles/package.json \
    ../mapbox-controls-master/packages/styles/src/icons.js \
    ../mapbox-controls-master/packages/styles/src/index.css \
    ../mapbox-controls-master/packages/styles/src/index.js \
    ../mapbox-controls-master/packages/styles/src/types.js \
    ../mapbox-controls-master/packages/styles/tsconfig.json \
    ../mapbox-controls-master/packages/tooltip/README.md \
    ../mapbox-controls-master/packages/tooltip/package.json \
    ../mapbox-controls-master/packages/tooltip/src/index.css \
    ../mapbox-controls-master/packages/tooltip/src/index.js \
    ../mapbox-controls-master/packages/tooltip/src/types.js \
    ../mapbox-controls-master/packages/tooltip/tsconfig.json \
    ../mapbox-controls-master/packages/zoom/README.md \
    ../mapbox-controls-master/packages/zoom/package.json \
    ../mapbox-controls-master/packages/zoom/src/icons.js \
    ../mapbox-controls-master/packages/zoom/src/index.css \
    ../mapbox-controls-master/packages/zoom/src/index.js \
    ../mapbox-controls-master/packages/zoom/tsconfig.json

RESOURCES += \
    qml.qrc \
    resources.qrc

TRANSLATIONS += \
    ../mapbox-controls-master/packages/compass/types/icons.d.ts \
    ../mapbox-controls-master/packages/compass/types/index.d.ts \
    ../mapbox-controls-master/packages/compass/types/types.d.ts \
    ../mapbox-controls-master/packages/helpers/types/index.d.ts \
    ../mapbox-controls-master/packages/image/types/center-position.d.ts \
    ../mapbox-controls-master/packages/image/types/file.d.ts \
    ../mapbox-controls-master/packages/image/types/icons.d.ts \
    ../mapbox-controls-master/packages/image/types/index.d.ts \
    ../mapbox-controls-master/packages/image/types/modes/move.d.ts \
    ../mapbox-controls-master/packages/image/types/modes/rotate.d.ts \
    ../mapbox-controls-master/packages/image/types/modes/scale.d.ts \
    ../mapbox-controls-master/packages/image/types/raster.d.ts \
    ../mapbox-controls-master/packages/image/types/types.d.ts \
    ../mapbox-controls-master/packages/inspect/types/icons.d.ts \
    ../mapbox-controls-master/packages/inspect/types/index.d.ts \
    ../mapbox-controls-master/packages/inspect/types/popup.d.ts \
    ../mapbox-controls-master/packages/inspect/types/types.d.ts \
    ../mapbox-controls-master/packages/language/types/index.d.ts \
    ../mapbox-controls-master/packages/language/types/types.d.ts \
    ../mapbox-controls-master/packages/ruler/types/distance.d.ts \
    ../mapbox-controls-master/packages/ruler/types/icons.d.ts \
    ../mapbox-controls-master/packages/ruler/types/index.d.ts \
    ../mapbox-controls-master/packages/ruler/types/label-format.d.ts \
    ../mapbox-controls-master/packages/ruler/types/layers.d.ts \
    ../mapbox-controls-master/packages/ruler/types/sources.d.ts \
    ../mapbox-controls-master/packages/ruler/types/types.d.ts \
    ../mapbox-controls-master/packages/styles/types/icons.d.ts \
    ../mapbox-controls-master/packages/styles/types/index.d.ts \
    ../mapbox-controls-master/packages/styles/types/types.d.ts \
    ../mapbox-controls-master/packages/tooltip/types/index.d.ts \
    ../mapbox-controls-master/packages/tooltip/types/types.d.ts \
    ../mapbox-controls-master/packages/zoom/types/icons.d.ts \
    ../mapbox-controls-master/packages/zoom/types/index.d.ts
