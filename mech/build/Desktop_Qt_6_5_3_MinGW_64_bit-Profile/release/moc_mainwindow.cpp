/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtDataVisualization/q3dscene.h>
#include <QtDataVisualization/qbar3dseries.h>
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "showPage2",
    "",
    "showPage3",
    "showPagecentral",
    "showEmployes",
    "showVehicules",
    "showMachines",
    "showTrensactions",
    "showApropos",
    "animateWidgetAppearance",
    "QWidget*",
    "widget",
    "startBlinkingEffect",
    "setupSlidingAnimation",
    "on_confirmerMachine_clicked",
    "setupTable",
    "on_supprimerMachine_clicked",
    "checkAllRows",
    "on_modifierButton_clicked",
    "sortTable",
    "index",
    "on_searchLineEdit_textChanged",
    "text",
    "loadDataFromDatabase",
    "exportToPDF",
    "updateImage",
    "on_stat_clicked",
    "on_donneesBtn_clicked",
    "on_ajoutcentreBtn_clicked",
    "initMap",
    "on_calendrierBtn_clicked",
    "markMaintenanceDates",
    "QCalendarWidget*",
    "calendar",
    "setupCalendar",
    "refreshCalendar",
    "QList<QDate>",
    "maintenanceDates",
    "onDateSelected"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[80];
    char stringdata0[11];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[16];
    char stringdata5[13];
    char stringdata6[14];
    char stringdata7[13];
    char stringdata8[17];
    char stringdata9[12];
    char stringdata10[24];
    char stringdata11[9];
    char stringdata12[7];
    char stringdata13[20];
    char stringdata14[22];
    char stringdata15[28];
    char stringdata16[11];
    char stringdata17[28];
    char stringdata18[13];
    char stringdata19[26];
    char stringdata20[10];
    char stringdata21[6];
    char stringdata22[30];
    char stringdata23[5];
    char stringdata24[21];
    char stringdata25[12];
    char stringdata26[12];
    char stringdata27[16];
    char stringdata28[22];
    char stringdata29[26];
    char stringdata30[8];
    char stringdata31[25];
    char stringdata32[21];
    char stringdata33[17];
    char stringdata34[9];
    char stringdata35[14];
    char stringdata36[16];
    char stringdata37[13];
    char stringdata38[17];
    char stringdata39[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 9),  // "showPage2"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 9),  // "showPage3"
        QT_MOC_LITERAL(32, 15),  // "showPagecentral"
        QT_MOC_LITERAL(48, 12),  // "showEmployes"
        QT_MOC_LITERAL(61, 13),  // "showVehicules"
        QT_MOC_LITERAL(75, 12),  // "showMachines"
        QT_MOC_LITERAL(88, 16),  // "showTrensactions"
        QT_MOC_LITERAL(105, 11),  // "showApropos"
        QT_MOC_LITERAL(117, 23),  // "animateWidgetAppearance"
        QT_MOC_LITERAL(141, 8),  // "QWidget*"
        QT_MOC_LITERAL(150, 6),  // "widget"
        QT_MOC_LITERAL(157, 19),  // "startBlinkingEffect"
        QT_MOC_LITERAL(177, 21),  // "setupSlidingAnimation"
        QT_MOC_LITERAL(199, 27),  // "on_confirmerMachine_clicked"
        QT_MOC_LITERAL(227, 10),  // "setupTable"
        QT_MOC_LITERAL(238, 27),  // "on_supprimerMachine_clicked"
        QT_MOC_LITERAL(266, 12),  // "checkAllRows"
        QT_MOC_LITERAL(279, 25),  // "on_modifierButton_clicked"
        QT_MOC_LITERAL(305, 9),  // "sortTable"
        QT_MOC_LITERAL(315, 5),  // "index"
        QT_MOC_LITERAL(321, 29),  // "on_searchLineEdit_textChanged"
        QT_MOC_LITERAL(351, 4),  // "text"
        QT_MOC_LITERAL(356, 20),  // "loadDataFromDatabase"
        QT_MOC_LITERAL(377, 11),  // "exportToPDF"
        QT_MOC_LITERAL(389, 11),  // "updateImage"
        QT_MOC_LITERAL(401, 15),  // "on_stat_clicked"
        QT_MOC_LITERAL(417, 21),  // "on_donneesBtn_clicked"
        QT_MOC_LITERAL(439, 25),  // "on_ajoutcentreBtn_clicked"
        QT_MOC_LITERAL(465, 7),  // "initMap"
        QT_MOC_LITERAL(473, 24),  // "on_calendrierBtn_clicked"
        QT_MOC_LITERAL(498, 20),  // "markMaintenanceDates"
        QT_MOC_LITERAL(519, 16),  // "QCalendarWidget*"
        QT_MOC_LITERAL(536, 8),  // "calendar"
        QT_MOC_LITERAL(545, 13),  // "setupCalendar"
        QT_MOC_LITERAL(559, 15),  // "refreshCalendar"
        QT_MOC_LITERAL(575, 12),  // "QList<QDate>"
        QT_MOC_LITERAL(588, 16),  // "maintenanceDates"
        QT_MOC_LITERAL(605, 14)   // "onDateSelected"
    },
    "MainWindow",
    "showPage2",
    "",
    "showPage3",
    "showPagecentral",
    "showEmployes",
    "showVehicules",
    "showMachines",
    "showTrensactions",
    "showApropos",
    "animateWidgetAppearance",
    "QWidget*",
    "widget",
    "startBlinkingEffect",
    "setupSlidingAnimation",
    "on_confirmerMachine_clicked",
    "setupTable",
    "on_supprimerMachine_clicked",
    "checkAllRows",
    "on_modifierButton_clicked",
    "sortTable",
    "index",
    "on_searchLineEdit_textChanged",
    "text",
    "loadDataFromDatabase",
    "exportToPDF",
    "updateImage",
    "on_stat_clicked",
    "on_donneesBtn_clicked",
    "on_ajoutcentreBtn_clicked",
    "initMap",
    "on_calendrierBtn_clicked",
    "markMaintenanceDates",
    "QCalendarWidget*",
    "calendar",
    "setupCalendar",
    "refreshCalendar",
    "QList<QDate>",
    "maintenanceDates",
    "onDateSelected"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  194,    2, 0x08,    1 /* Private */,
       3,    0,  195,    2, 0x08,    2 /* Private */,
       4,    0,  196,    2, 0x08,    3 /* Private */,
       5,    0,  197,    2, 0x08,    4 /* Private */,
       6,    0,  198,    2, 0x08,    5 /* Private */,
       7,    0,  199,    2, 0x08,    6 /* Private */,
       8,    0,  200,    2, 0x08,    7 /* Private */,
       9,    0,  201,    2, 0x08,    8 /* Private */,
      10,    1,  202,    2, 0x08,    9 /* Private */,
      13,    1,  205,    2, 0x08,   11 /* Private */,
      14,    1,  208,    2, 0x08,   13 /* Private */,
      15,    0,  211,    2, 0x08,   15 /* Private */,
      16,    0,  212,    2, 0x08,   16 /* Private */,
      17,    0,  213,    2, 0x08,   17 /* Private */,
      18,    0,  214,    2, 0x08,   18 /* Private */,
      19,    0,  215,    2, 0x08,   19 /* Private */,
      20,    1,  216,    2, 0x08,   20 /* Private */,
      22,    1,  219,    2, 0x08,   22 /* Private */,
      24,    0,  222,    2, 0x08,   24 /* Private */,
      25,    0,  223,    2, 0x08,   25 /* Private */,
      26,    1,  224,    2, 0x08,   26 /* Private */,
      27,    0,  227,    2, 0x08,   28 /* Private */,
      28,    0,  228,    2, 0x08,   29 /* Private */,
      29,    0,  229,    2, 0x08,   30 /* Private */,
      30,    0,  230,    2, 0x08,   31 /* Private */,
      31,    0,  231,    2, 0x08,   32 /* Private */,
      32,    1,  232,    2, 0x08,   33 /* Private */,
      35,    0,  235,    2, 0x08,   35 /* Private */,
      36,    2,  236,    2, 0x08,   36 /* Private */,
      39,    0,  241,    2, 0x08,   39 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33, 0x80000000 | 37,   34,   38,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'showPage2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showPage3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showPagecentral'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showEmployes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showVehicules'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMachines'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showTrensactions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showApropos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'animateWidgetAppearance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'startBlinkingEffect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'setupSlidingAnimation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'on_confirmerMachine_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setupTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_supprimerMachine_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkAllRows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_modifierButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sortTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_searchLineEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'loadDataFromDatabase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exportToPDF'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_stat_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_donneesBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ajoutcentreBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initMap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_calendrierBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'markMaintenanceDates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCalendarWidget *, std::false_type>,
        // method 'setupCalendar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refreshCalendar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCalendarWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QDate> &, std::false_type>,
        // method 'onDateSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showPage2(); break;
        case 1: _t->showPage3(); break;
        case 2: _t->showPagecentral(); break;
        case 3: _t->showEmployes(); break;
        case 4: _t->showVehicules(); break;
        case 5: _t->showMachines(); break;
        case 6: _t->showTrensactions(); break;
        case 7: _t->showApropos(); break;
        case 8: _t->animateWidgetAppearance((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 9: _t->startBlinkingEffect((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 11: _t->on_confirmerMachine_clicked(); break;
        case 12: _t->setupTable(); break;
        case 13: _t->on_supprimerMachine_clicked(); break;
        case 14: _t->checkAllRows(); break;
        case 15: _t->on_modifierButton_clicked(); break;
        case 16: _t->sortTable((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_searchLineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->loadDataFromDatabase(); break;
        case 19: _t->exportToPDF(); break;
        case 20: _t->updateImage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->on_stat_clicked(); break;
        case 22: _t->on_donneesBtn_clicked(); break;
        case 23: _t->on_ajoutcentreBtn_clicked(); break;
        case 24: _t->initMap(); break;
        case 25: _t->on_calendrierBtn_clicked(); break;
        case 26: _t->markMaintenanceDates((*reinterpret_cast< std::add_pointer_t<QCalendarWidget*>>(_a[1]))); break;
        case 27: _t->setupCalendar(); break;
        case 28: _t->refreshCalendar((*reinterpret_cast< std::add_pointer_t<QCalendarWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QDate>>>(_a[2]))); break;
        case 29: _t->onDateSelected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCalendarWidget* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCalendarWidget* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QDate> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}
QT_WARNING_POP
