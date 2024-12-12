/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Mechvision 3/MECHVISION/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtDataVisualization/q3dscene.h>
#include <QtDataVisualization/qbar3dseries.h>
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
    "showPage4",
    "showForgotPassword",
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
    "on_statButton1_clicked",
    "on_confirmerEmployes_clicked",
    "on_supprimerEmployes_clicked",
    "on_modifierEmployes_clicked",
    "on_saveEmploye_clicked",
    "on_filter_currentTextChanged",
    "selectedType",
    "on_ButtonCreer_clicked",
    "on_ButtonConnecter_clicked",
    "showPieChart",
    "disponibleCount",
    "occupeCount",
    "showBarChart",
    "avgSalary",
    "minSalary",
    "maxSalary",
    "on_exportButton_clicked",
    "exportChartToImage",
    "QChartView*",
    "chartView",
    "filename",
    "exportEmployeeListToCSV",
    "on_send_clicked",
    "on_save_u_clicked",
    "on_supp_u_clicked",
    "on_addimage1_clicked",
    "on_addimage2_clicked",
    "getPasswordFromDatabase",
    "phoneNumber",
    "sendSms",
    "toPhoneNumber",
    "message",
    "on_rechercherr_textChanged",
    "searchText",
    "on_demande_clicked",
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
    "on_statmachine_clicked",
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
    "onDateSelected",
    "on_confirmer_clicked",
    "on_supprimer_clicked",
    "on_afficher_clicked",
    "on_modifier_clicked",
    "on_rechercher_clicked",
    "on_exporter_clicked",
    "on_stats_clicked",
    "on_histo_clicked",
    "on_comboBox_changed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[170];
    char stringdata0[11];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[10];
    char stringdata5[19];
    char stringdata6[16];
    char stringdata7[13];
    char stringdata8[14];
    char stringdata9[13];
    char stringdata10[17];
    char stringdata11[12];
    char stringdata12[24];
    char stringdata13[9];
    char stringdata14[7];
    char stringdata15[20];
    char stringdata16[23];
    char stringdata17[29];
    char stringdata18[29];
    char stringdata19[28];
    char stringdata20[23];
    char stringdata21[29];
    char stringdata22[13];
    char stringdata23[23];
    char stringdata24[27];
    char stringdata25[13];
    char stringdata26[16];
    char stringdata27[12];
    char stringdata28[13];
    char stringdata29[10];
    char stringdata30[10];
    char stringdata31[10];
    char stringdata32[24];
    char stringdata33[19];
    char stringdata34[12];
    char stringdata35[10];
    char stringdata36[9];
    char stringdata37[24];
    char stringdata38[16];
    char stringdata39[18];
    char stringdata40[18];
    char stringdata41[21];
    char stringdata42[21];
    char stringdata43[24];
    char stringdata44[12];
    char stringdata45[8];
    char stringdata46[14];
    char stringdata47[8];
    char stringdata48[27];
    char stringdata49[11];
    char stringdata50[19];
    char stringdata51[28];
    char stringdata52[11];
    char stringdata53[28];
    char stringdata54[13];
    char stringdata55[26];
    char stringdata56[10];
    char stringdata57[6];
    char stringdata58[30];
    char stringdata59[5];
    char stringdata60[21];
    char stringdata61[12];
    char stringdata62[12];
    char stringdata63[23];
    char stringdata64[22];
    char stringdata65[26];
    char stringdata66[8];
    char stringdata67[25];
    char stringdata68[21];
    char stringdata69[17];
    char stringdata70[9];
    char stringdata71[14];
    char stringdata72[16];
    char stringdata73[13];
    char stringdata74[17];
    char stringdata75[15];
    char stringdata76[21];
    char stringdata77[21];
    char stringdata78[20];
    char stringdata79[20];
    char stringdata80[22];
    char stringdata81[20];
    char stringdata82[17];
    char stringdata83[17];
    char stringdata84[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 9),  // "showPage2"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 9),  // "showPage3"
        QT_MOC_LITERAL(32, 9),  // "showPage4"
        QT_MOC_LITERAL(42, 18),  // "showForgotPassword"
        QT_MOC_LITERAL(61, 15),  // "showPagecentral"
        QT_MOC_LITERAL(77, 12),  // "showEmployes"
        QT_MOC_LITERAL(90, 13),  // "showVehicules"
        QT_MOC_LITERAL(104, 12),  // "showMachines"
        QT_MOC_LITERAL(117, 16),  // "showTrensactions"
        QT_MOC_LITERAL(134, 11),  // "showApropos"
        QT_MOC_LITERAL(146, 23),  // "animateWidgetAppearance"
        QT_MOC_LITERAL(170, 8),  // "QWidget*"
        QT_MOC_LITERAL(179, 6),  // "widget"
        QT_MOC_LITERAL(186, 19),  // "startBlinkingEffect"
        QT_MOC_LITERAL(206, 22),  // "on_statButton1_clicked"
        QT_MOC_LITERAL(229, 28),  // "on_confirmerEmployes_clicked"
        QT_MOC_LITERAL(258, 28),  // "on_supprimerEmployes_clicked"
        QT_MOC_LITERAL(287, 27),  // "on_modifierEmployes_clicked"
        QT_MOC_LITERAL(315, 22),  // "on_saveEmploye_clicked"
        QT_MOC_LITERAL(338, 28),  // "on_filter_currentTextChanged"
        QT_MOC_LITERAL(367, 12),  // "selectedType"
        QT_MOC_LITERAL(380, 22),  // "on_ButtonCreer_clicked"
        QT_MOC_LITERAL(403, 26),  // "on_ButtonConnecter_clicked"
        QT_MOC_LITERAL(430, 12),  // "showPieChart"
        QT_MOC_LITERAL(443, 15),  // "disponibleCount"
        QT_MOC_LITERAL(459, 11),  // "occupeCount"
        QT_MOC_LITERAL(471, 12),  // "showBarChart"
        QT_MOC_LITERAL(484, 9),  // "avgSalary"
        QT_MOC_LITERAL(494, 9),  // "minSalary"
        QT_MOC_LITERAL(504, 9),  // "maxSalary"
        QT_MOC_LITERAL(514, 23),  // "on_exportButton_clicked"
        QT_MOC_LITERAL(538, 18),  // "exportChartToImage"
        QT_MOC_LITERAL(557, 11),  // "QChartView*"
        QT_MOC_LITERAL(569, 9),  // "chartView"
        QT_MOC_LITERAL(579, 8),  // "filename"
        QT_MOC_LITERAL(588, 23),  // "exportEmployeeListToCSV"
        QT_MOC_LITERAL(612, 15),  // "on_send_clicked"
        QT_MOC_LITERAL(628, 17),  // "on_save_u_clicked"
        QT_MOC_LITERAL(646, 17),  // "on_supp_u_clicked"
        QT_MOC_LITERAL(664, 20),  // "on_addimage1_clicked"
        QT_MOC_LITERAL(685, 20),  // "on_addimage2_clicked"
        QT_MOC_LITERAL(706, 23),  // "getPasswordFromDatabase"
        QT_MOC_LITERAL(730, 11),  // "phoneNumber"
        QT_MOC_LITERAL(742, 7),  // "sendSms"
        QT_MOC_LITERAL(750, 13),  // "toPhoneNumber"
        QT_MOC_LITERAL(764, 7),  // "message"
        QT_MOC_LITERAL(772, 26),  // "on_rechercherr_textChanged"
        QT_MOC_LITERAL(799, 10),  // "searchText"
        QT_MOC_LITERAL(810, 18),  // "on_demande_clicked"
        QT_MOC_LITERAL(829, 27),  // "on_confirmerMachine_clicked"
        QT_MOC_LITERAL(857, 10),  // "setupTable"
        QT_MOC_LITERAL(868, 27),  // "on_supprimerMachine_clicked"
        QT_MOC_LITERAL(896, 12),  // "checkAllRows"
        QT_MOC_LITERAL(909, 25),  // "on_modifierButton_clicked"
        QT_MOC_LITERAL(935, 9),  // "sortTable"
        QT_MOC_LITERAL(945, 5),  // "index"
        QT_MOC_LITERAL(951, 29),  // "on_searchLineEdit_textChanged"
        QT_MOC_LITERAL(981, 4),  // "text"
        QT_MOC_LITERAL(986, 20),  // "loadDataFromDatabase"
        QT_MOC_LITERAL(1007, 11),  // "exportToPDF"
        QT_MOC_LITERAL(1019, 11),  // "updateImage"
        QT_MOC_LITERAL(1031, 22),  // "on_statmachine_clicked"
        QT_MOC_LITERAL(1054, 21),  // "on_donneesBtn_clicked"
        QT_MOC_LITERAL(1076, 25),  // "on_ajoutcentreBtn_clicked"
        QT_MOC_LITERAL(1102, 7),  // "initMap"
        QT_MOC_LITERAL(1110, 24),  // "on_calendrierBtn_clicked"
        QT_MOC_LITERAL(1135, 20),  // "markMaintenanceDates"
        QT_MOC_LITERAL(1156, 16),  // "QCalendarWidget*"
        QT_MOC_LITERAL(1173, 8),  // "calendar"
        QT_MOC_LITERAL(1182, 13),  // "setupCalendar"
        QT_MOC_LITERAL(1196, 15),  // "refreshCalendar"
        QT_MOC_LITERAL(1212, 12),  // "QList<QDate>"
        QT_MOC_LITERAL(1225, 16),  // "maintenanceDates"
        QT_MOC_LITERAL(1242, 14),  // "onDateSelected"
        QT_MOC_LITERAL(1257, 20),  // "on_confirmer_clicked"
        QT_MOC_LITERAL(1278, 20),  // "on_supprimer_clicked"
        QT_MOC_LITERAL(1299, 19),  // "on_afficher_clicked"
        QT_MOC_LITERAL(1319, 19),  // "on_modifier_clicked"
        QT_MOC_LITERAL(1339, 21),  // "on_rechercher_clicked"
        QT_MOC_LITERAL(1361, 19),  // "on_exporter_clicked"
        QT_MOC_LITERAL(1381, 16),  // "on_stats_clicked"
        QT_MOC_LITERAL(1398, 16),  // "on_histo_clicked"
        QT_MOC_LITERAL(1415, 19)   // "on_comboBox_changed"
    },
    "MainWindow",
    "showPage2",
    "",
    "showPage3",
    "showPage4",
    "showForgotPassword",
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
    "on_statButton1_clicked",
    "on_confirmerEmployes_clicked",
    "on_supprimerEmployes_clicked",
    "on_modifierEmployes_clicked",
    "on_saveEmploye_clicked",
    "on_filter_currentTextChanged",
    "selectedType",
    "on_ButtonCreer_clicked",
    "on_ButtonConnecter_clicked",
    "showPieChart",
    "disponibleCount",
    "occupeCount",
    "showBarChart",
    "avgSalary",
    "minSalary",
    "maxSalary",
    "on_exportButton_clicked",
    "exportChartToImage",
    "QChartView*",
    "chartView",
    "filename",
    "exportEmployeeListToCSV",
    "on_send_clicked",
    "on_save_u_clicked",
    "on_supp_u_clicked",
    "on_addimage1_clicked",
    "on_addimage2_clicked",
    "getPasswordFromDatabase",
    "phoneNumber",
    "sendSms",
    "toPhoneNumber",
    "message",
    "on_rechercherr_textChanged",
    "searchText",
    "on_demande_clicked",
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
    "on_statmachine_clicked",
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
    "onDateSelected",
    "on_confirmer_clicked",
    "on_supprimer_clicked",
    "on_afficher_clicked",
    "on_modifier_clicked",
    "on_rechercher_clicked",
    "on_exporter_clicked",
    "on_stats_clicked",
    "on_histo_clicked",
    "on_comboBox_changed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      62,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  386,    2, 0x08,    1 /* Private */,
       3,    0,  387,    2, 0x08,    2 /* Private */,
       4,    0,  388,    2, 0x08,    3 /* Private */,
       5,    0,  389,    2, 0x08,    4 /* Private */,
       6,    0,  390,    2, 0x08,    5 /* Private */,
       7,    0,  391,    2, 0x08,    6 /* Private */,
       8,    0,  392,    2, 0x08,    7 /* Private */,
       9,    0,  393,    2, 0x08,    8 /* Private */,
      10,    0,  394,    2, 0x08,    9 /* Private */,
      11,    0,  395,    2, 0x08,   10 /* Private */,
      12,    1,  396,    2, 0x08,   11 /* Private */,
      15,    1,  399,    2, 0x08,   13 /* Private */,
      16,    0,  402,    2, 0x08,   15 /* Private */,
      17,    0,  403,    2, 0x08,   16 /* Private */,
      18,    0,  404,    2, 0x08,   17 /* Private */,
      19,    0,  405,    2, 0x08,   18 /* Private */,
      20,    0,  406,    2, 0x08,   19 /* Private */,
      21,    1,  407,    2, 0x08,   20 /* Private */,
      23,    0,  410,    2, 0x08,   22 /* Private */,
      24,    0,  411,    2, 0x08,   23 /* Private */,
      25,    2,  412,    2, 0x08,   24 /* Private */,
      28,    3,  417,    2, 0x08,   27 /* Private */,
      32,    0,  424,    2, 0x08,   31 /* Private */,
      33,    2,  425,    2, 0x08,   32 /* Private */,
      37,    0,  430,    2, 0x08,   35 /* Private */,
      38,    0,  431,    2, 0x08,   36 /* Private */,
      39,    0,  432,    2, 0x08,   37 /* Private */,
      40,    0,  433,    2, 0x08,   38 /* Private */,
      41,    0,  434,    2, 0x08,   39 /* Private */,
      42,    0,  435,    2, 0x08,   40 /* Private */,
      43,    1,  436,    2, 0x08,   41 /* Private */,
      45,    2,  439,    2, 0x08,   43 /* Private */,
      48,    1,  444,    2, 0x08,   46 /* Private */,
      50,    0,  447,    2, 0x08,   48 /* Private */,
      51,    0,  448,    2, 0x08,   49 /* Private */,
      52,    0,  449,    2, 0x08,   50 /* Private */,
      53,    0,  450,    2, 0x08,   51 /* Private */,
      54,    0,  451,    2, 0x08,   52 /* Private */,
      55,    0,  452,    2, 0x08,   53 /* Private */,
      56,    1,  453,    2, 0x08,   54 /* Private */,
      58,    1,  456,    2, 0x08,   56 /* Private */,
      60,    0,  459,    2, 0x08,   58 /* Private */,
      61,    0,  460,    2, 0x08,   59 /* Private */,
      62,    1,  461,    2, 0x08,   60 /* Private */,
      63,    0,  464,    2, 0x08,   62 /* Private */,
      64,    0,  465,    2, 0x08,   63 /* Private */,
      65,    0,  466,    2, 0x08,   64 /* Private */,
      66,    0,  467,    2, 0x08,   65 /* Private */,
      67,    0,  468,    2, 0x08,   66 /* Private */,
      68,    1,  469,    2, 0x08,   67 /* Private */,
      71,    0,  472,    2, 0x08,   69 /* Private */,
      72,    2,  473,    2, 0x08,   70 /* Private */,
      75,    0,  478,    2, 0x08,   73 /* Private */,
      76,    0,  479,    2, 0x08,   74 /* Private */,
      77,    0,  480,    2, 0x08,   75 /* Private */,
      78,    0,  481,    2, 0x08,   76 /* Private */,
      79,    0,  482,    2, 0x08,   77 /* Private */,
      80,    0,  483,    2, 0x08,   78 /* Private */,
      81,    0,  484,    2, 0x08,   79 /* Private */,
      82,    0,  485,    2, 0x08,   80 /* Private */,
      83,    0,  486,    2, 0x08,   81 /* Private */,
      84,    1,  487,    2, 0x08,   82 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   27,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   29,   30,   31,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34, QMetaType::QString,   35,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,   44,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   46,   47,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void, QMetaType::QString,   59,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 69, 0x80000000 | 73,   70,   74,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   57,

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
        // method 'showPage4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showForgotPassword'
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
        // method 'on_statButton1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_confirmerEmployes_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_supprimerEmployes_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_modifierEmployes_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveEmploye_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_filter_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_ButtonCreer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ButtonConnecter_clicked'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showPieChart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showBarChart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_exportButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exportChartToImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChartView *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'exportEmployeeListToCSV'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_send_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_save_u_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_supp_u_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addimage1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addimage2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getPasswordFromDatabase'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'sendSms'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_rechercherr_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_demande_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        // method 'on_statmachine_clicked'
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
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_confirmer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_supprimer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_afficher_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_modifier_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rechercher_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exporter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stats_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_histo_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
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
        case 2: _t->showPage4(); break;
        case 3: _t->showForgotPassword(); break;
        case 4: _t->showPagecentral(); break;
        case 5: _t->showEmployes(); break;
        case 6: _t->showVehicules(); break;
        case 7: _t->showMachines(); break;
        case 8: _t->showTrensactions(); break;
        case 9: _t->showApropos(); break;
        case 10: _t->animateWidgetAppearance((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 11: _t->startBlinkingEffect((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 12: _t->on_statButton1_clicked(); break;
        case 13: _t->on_confirmerEmployes_clicked(); break;
        case 14: _t->on_supprimerEmployes_clicked(); break;
        case 15: _t->on_modifierEmployes_clicked(); break;
        case 16: _t->on_saveEmploye_clicked(); break;
        case 17: _t->on_filter_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->on_ButtonCreer_clicked(); break;
        case 19: { bool _r = _t->on_ButtonConnecter_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->showPieChart((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 21: _t->showBarChart((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 22: _t->on_exportButton_clicked(); break;
        case 23: _t->exportChartToImage((*reinterpret_cast< std::add_pointer_t<QChartView*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 24: _t->exportEmployeeListToCSV(); break;
        case 25: _t->on_send_clicked(); break;
        case 26: _t->on_save_u_clicked(); break;
        case 27: _t->on_supp_u_clicked(); break;
        case 28: _t->on_addimage1_clicked(); break;
        case 29: _t->on_addimage2_clicked(); break;
        case 30: { QString _r = _t->getPasswordFromDatabase((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->sendSms((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 32: _t->on_rechercherr_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 33: _t->on_demande_clicked(); break;
        case 34: _t->on_confirmerMachine_clicked(); break;
        case 35: _t->setupTable(); break;
        case 36: _t->on_supprimerMachine_clicked(); break;
        case 37: _t->checkAllRows(); break;
        case 38: _t->on_modifierButton_clicked(); break;
        case 39: _t->sortTable((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 40: _t->on_searchLineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 41: _t->loadDataFromDatabase(); break;
        case 42: _t->exportToPDF(); break;
        case 43: _t->updateImage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 44: _t->on_statmachine_clicked(); break;
        case 45: _t->on_donneesBtn_clicked(); break;
        case 46: _t->on_ajoutcentreBtn_clicked(); break;
        case 47: _t->initMap(); break;
        case 48: _t->on_calendrierBtn_clicked(); break;
        case 49: _t->markMaintenanceDates((*reinterpret_cast< std::add_pointer_t<QCalendarWidget*>>(_a[1]))); break;
        case 50: _t->setupCalendar(); break;
        case 51: _t->refreshCalendar((*reinterpret_cast< std::add_pointer_t<QCalendarWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QDate>>>(_a[2]))); break;
        case 52: _t->onDateSelected(); break;
        case 53: _t->on_confirmer_clicked(); break;
        case 54: _t->on_supprimer_clicked(); break;
        case 55: _t->on_afficher_clicked(); break;
        case 56: _t->on_modifier_clicked(); break;
        case 57: _t->on_rechercher_clicked(); break;
        case 58: _t->on_exporter_clicked(); break;
        case 59: _t->on_stats_clicked(); break;
        case 60: _t->on_histo_clicked(); break;
        case 61: _t->on_comboBox_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QChartView* >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCalendarWidget* >(); break;
            }
            break;
        case 51:
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
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    }
    return _id;
}
QT_WARNING_POP
