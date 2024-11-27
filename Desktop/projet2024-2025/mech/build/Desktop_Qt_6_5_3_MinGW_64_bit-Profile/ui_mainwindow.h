/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QWidget *widget;
    QPushButton *buttonPage2;
    QWidget *page_2;
    QPushButton *ButtonConnecter;
    QPushButton *sinscrir;
    QLineEdit *cin_c;
    QLineEdit *mdp_c;
    QPushButton *mdp_oublie;
    QWidget *ForgotPassword;
    QLineEdit *cinLine;
    QLineEdit *emailLine;
    QPushButton *send;
    QPushButton *Retour;
    QTextEdit *textEdit;
    QLineEdit *phoneLine;
    QWidget *pagecentral;
    QStackedWidget *stackedWidget_2;
    QWidget *page;
    QPushButton *ButtonPage;
    QPushButton *ButtonEmployes;
    QPushButton *ButtonVehicules;
    QPushButton *ButtonMachines;
    QPushButton *ButtonTrensactions;
    QPushButton *ButtonApropos;
    QWidget *widget_2;
    QPushButton *sedeconnecter;
    QPushButton *parametre;
    QWidget *employes;
    QPushButton *ButtonMachines1;
    QPushButton *ButtonPage1;
    QPushButton *ButtonEmployes1;
    QPushButton *ButtonApropos1;
    QPushButton *ButtonTrensactions1;
    QPushButton *ButtonVehicules1;
    QLineEdit *rechercher;
    QLineEdit *cin_e;
    QLineEdit *salaire_e;
    QComboBox *filter;
    QPushButton *stat1Button;
    QComboBox *etat_e;
    QPushButton *confirmerEmployes;
    QPushButton *supprimerEmployes;
    QTableView *tableEmployes;
    QPushButton *modifierEmployes;
    QPushButton *saveEmploye;
    QComboBox *special_e;
    QPushButton *exportButton;
    QWidget *vehicules;
    QPushButton *ButtonEmployes2;
    QPushButton *ButtonPage2;
    QPushButton *ButtonApropos2;
    QPushButton *ButtonTrensactions2;
    QPushButton *ButtonVehicules2;
    QPushButton *ButtonMachines2;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_21;
    QLineEdit *lineEdit_22;
    QComboBox *comboBox_3;
    QDateEdit *dateEdit_2;
    QComboBox *comboBox_8;
    QPushButton *stat2;
    QWidget *machines;
    QPushButton *ButtonPage3;
    QPushButton *ButtonVehicules3;
    QPushButton *ButtonMachines3;
    QPushButton *ButtonEmployes3;
    QPushButton *ButtonTrensactions3;
    QPushButton *ButtonApropos3;
    QLineEdit *lineEdit_9;
    QComboBox *comboBox_6;
    QPushButton *stat3;
    QTableWidget *tableMachine;
    QPushButton *confirmerMachine;
    QPushButton *modifierMachine;
    QPushButton *supprimerMachine;
    QPushButton *toutmachine;
    QDateEdit *date_maintenance;
    QComboBox *type_m;
    QLineEdit *id_machine;
    QComboBox *statut_m;
    QLineEdit *localisation;
    QWidget *trensactions;
    QPushButton *ButtonPage4;
    QPushButton *ButtonVehicules4;
    QPushButton *ButtonMachines4;
    QPushButton *ButtonEmployes4;
    QPushButton *ButtonTrensactions4;
    QPushButton *ButtonApropos4;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_19;
    QComboBox *comboBox_4;
    QComboBox *comboBox_7;
    QPushButton *stat4;
    QWidget *apropos;
    QPushButton *ButtonPage5;
    QPushButton *ButtonVehicules5;
    QPushButton *ButtonMachines5;
    QPushButton *ButtonEmployes5;
    QPushButton *ButtonTrensactions5;
    QPushButton *ButtonApropos5;
    QWidget *page_4;
    QPushButton *supp_u;
    QPushButton *modif_u;
    QPushButton *save_u;
    QPushButton *retour_u;
    QComboBox *role_u;
    QLineEdit *nom_u;
    QLineEdit *prenom_u;
    QLineEdit *num_u;
    QLineEdit *mot_u;
    QLineEdit *mail_u;
    QWidget *page_3;
    QPushButton *seconnecter;
    QPushButton *ButtonCreer;
    QLineEdit *email_u;
    QLineEdit *cin_u;
    QLineEdit *lastname_u;
    QLineEdit *firstname_u;
    QLineEdit *phone_u;
    QLineEdit *mdp_u;
    QComboBox *rolee_u;
    QPushButton *addimage;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1291, 741);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 35, 64);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1291, 741));
        page1 = new QWidget();
        page1->setObjectName("page1");
        widget = new QWidget(page1);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 1291, 741));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget {\n"
"    background-image: url(\"C:/Users/HP/Desktop/mech/page1.png\");\n"
"    background-position: center;   /* Centrer l'image */\n"
"    background-repeat: no-repeat;  /* Ne pas r\303\251p\303\251ter l'image */\n"
"    background-size: cover;        /* Adapter l'image \303\240 la taille du widget */\n"
"}\n"
""));
        buttonPage2 = new QPushButton(widget);
        buttonPage2->setObjectName("buttonPage2");
        buttonPage2->setGeometry(QRect(510, 590, 251, 61));
        buttonPage2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* Rendre le fond transparent */\n"
"    border: none;                  /* Enlever la bordure (optionnel) */\n"
"}\n"
""));
        stackedWidget->addWidget(page1);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setStyleSheet(QString::fromUtf8("QWidget#page_2 {\n"
"    background-image: url(\"C:/Users/HP/Desktop/mech/page2.png\");\n"
"    background-position: center;   /* Centrer l'image */\n"
"    background-repeat: no-repeat;  /* Ne pas r\303\251p\303\251ter l'image */\n"
"    background-size: cover;        /* Adapter l'image \303\240 la taille du widget */\n"
"}\n"
""));
        ButtonConnecter = new QPushButton(page_2);
        ButtonConnecter->setObjectName("ButtonConnecter");
        ButtonConnecter->setGeometry(QRect(970, 470, 171, 51));
        ButtonConnecter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: green;\n"
"    border: none;                   /* Pas de bordure */\n"
"    color: black;                   /* Couleur du texte */\n"
"    padding: 10px;                  /* Espacement interne */\n"
"    border-radius: 25px;            /* Coins arrondis */\n"
"    font-weight: bold;              /* Texte en gras */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:grey;\n"
"    border: none;                          /* Pas de bordure au survol */\n"
"    font-weight: bold;                     /* Assure que le texte reste en gras au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"    font-weight: bold;                          /* Texte en gras lors du clic */\n"
"}\n"
""));
        sinscrir = new QPushButton(page_2);
        sinscrir->setObjectName("sinscrir");
        sinscrir->setGeometry(QRect(1070, 160, 41, 16));
        sinscrir->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;  /* Couleur de fond transparente */\n"
"   \n"
"}\n"
""));
        cin_c = new QLineEdit(page_2);
        cin_c->setObjectName("cin_c");
        cin_c->setGeometry(QRect(990, 290, 191, 31));
        cin_c->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;\n"
""));
        mdp_c = new QLineEdit(page_2);
        mdp_c->setObjectName("mdp_c");
        mdp_c->setGeometry(QRect(990, 380, 191, 31));
        mdp_c->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;\n"
""));
        mdp_oublie = new QPushButton(page_2);
        mdp_oublie->setObjectName("mdp_oublie");
        mdp_oublie->setGeometry(QRect(1110, 420, 81, 16));
        mdp_oublie->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;  /* Couleur de fond transparente */\n"
"   \n"
"}\n"
""));
        stackedWidget->addWidget(page_2);
        ForgotPassword = new QWidget();
        ForgotPassword->setObjectName("ForgotPassword");
        cinLine = new QLineEdit(ForgotPassword);
        cinLine->setObjectName("cinLine");
        cinLine->setGeometry(QRect(550, 140, 113, 22));
        cinLine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        emailLine = new QLineEdit(ForgotPassword);
        emailLine->setObjectName("emailLine");
        emailLine->setGeometry(QRect(550, 190, 113, 22));
        emailLine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        send = new QPushButton(ForgotPassword);
        send->setObjectName("send");
        send->setGeometry(QRect(460, 340, 75, 24));
        send->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Retour = new QPushButton(ForgotPassword);
        Retour->setObjectName("Retour");
        Retour->setGeometry(QRect(650, 340, 75, 24));
        Retour->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textEdit = new QTextEdit(ForgotPassword);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(520, 60, 171, 31));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        phoneLine = new QLineEdit(ForgotPassword);
        phoneLine->setObjectName("phoneLine");
        phoneLine->setGeometry(QRect(550, 240, 113, 22));
        phoneLine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(ForgotPassword);
        pagecentral = new QWidget();
        pagecentral->setObjectName("pagecentral");
        pagecentral->setStyleSheet(QString::fromUtf8(""));
        stackedWidget_2 = new QStackedWidget(pagecentral);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setGeometry(QRect(0, 0, 1291, 741));
        stackedWidget_2->setStyleSheet(QString::fromUtf8("QWidget#page4 {\n"
"    background-image: url(\"C:/Users/HP/Desktop/mech/page4.png\");\n"
"    background-position: center;   /* Centrer l'image */\n"
"    background-repeat: no-repeat;  /* Ne pas r\303\251p\303\251ter l'image */\n"
"    background-size: cover;        /* Adapter l'image \303\240 la taille du widget */\n"
"}\n"
""));
        page = new QWidget();
        page->setObjectName("page");
        page->setStyleSheet(QString::fromUtf8("QWidget#page {\n"
"    background-image: url(\"C:/Users/HP/Desktop/mech/home.png\");\n"
"    background-position: center;   /* Centrer l'image */\n"
"    background-repeat: no-repeat;  /* Ne pas r\303\251p\303\251ter l'image */\n"
"    background-size: cover;        /* Adapter l'image \303\240 la taille du widget */\n"
"}\n"
""));
        ButtonPage = new QPushButton(page);
        ButtonPage->setObjectName("ButtonPage");
        ButtonPage->setGeometry(QRect(20, 300, 261, 51));
        ButtonPage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonEmployes = new QPushButton(page);
        ButtonEmployes->setObjectName("ButtonEmployes");
        ButtonEmployes->setGeometry(QRect(20, 360, 261, 51));
        ButtonEmployes->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonVehicules = new QPushButton(page);
        ButtonVehicules->setObjectName("ButtonVehicules");
        ButtonVehicules->setGeometry(QRect(20, 420, 261, 51));
        ButtonVehicules->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonMachines = new QPushButton(page);
        ButtonMachines->setObjectName("ButtonMachines");
        ButtonMachines->setGeometry(QRect(20, 480, 261, 51));
        ButtonMachines->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonTrensactions = new QPushButton(page);
        ButtonTrensactions->setObjectName("ButtonTrensactions");
        ButtonTrensactions->setGeometry(QRect(20, 550, 261, 51));
        ButtonTrensactions->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonApropos = new QPushButton(page);
        ButtonApropos->setObjectName("ButtonApropos");
        ButtonApropos->setGeometry(QRect(20, 610, 261, 51));
        ButtonApropos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        widget_2 = new QWidget(page);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(420, 230, 281, 61));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2 {\n"
"	background-color: rgb(0, 0, 0);\n"
"    \n"
"}\n"
""));
        sedeconnecter = new QPushButton(page);
        sedeconnecter->setObjectName("sedeconnecter");
        sedeconnecter->setGeometry(QRect(40, 680, 211, 41));
        sedeconnecter->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        parametre = new QPushButton(page);
        parametre->setObjectName("parametre");
        parametre->setGeometry(QRect(1160, 20, 41, 31));
        parametre->setMouseTracking(true);
        parametre->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;\n"
""));
        stackedWidget_2->addWidget(page);
        employes = new QWidget();
        employes->setObjectName("employes");
        employes->setStyleSheet(QString::fromUtf8("QWidget#employes {\n"
"    background-image: url(\"C:/Users/HP/Desktop/mech/employes.png\");\n"
"    background-position: center;   /* Centrer l'image */\n"
"    background-repeat: no-repeat;  /* Ne pas r\303\251p\303\251ter l'image */\n"
"    background-size: cover;        /* Adapter l'image \303\240 la taille du widget */\n"
"}\n"
""));
        ButtonMachines1 = new QPushButton(employes);
        ButtonMachines1->setObjectName("ButtonMachines1");
        ButtonMachines1->setGeometry(QRect(20, 490, 261, 51));
        ButtonMachines1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonPage1 = new QPushButton(employes);
        ButtonPage1->setObjectName("ButtonPage1");
        ButtonPage1->setGeometry(QRect(20, 300, 261, 51));
        ButtonPage1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonEmployes1 = new QPushButton(employes);
        ButtonEmployes1->setObjectName("ButtonEmployes1");
        ButtonEmployes1->setGeometry(QRect(20, 360, 261, 51));
        ButtonEmployes1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonApropos1 = new QPushButton(employes);
        ButtonApropos1->setObjectName("ButtonApropos1");
        ButtonApropos1->setGeometry(QRect(20, 610, 261, 51));
        ButtonApropos1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonTrensactions1 = new QPushButton(employes);
        ButtonTrensactions1->setObjectName("ButtonTrensactions1");
        ButtonTrensactions1->setGeometry(QRect(20, 550, 261, 51));
        ButtonTrensactions1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonVehicules1 = new QPushButton(employes);
        ButtonVehicules1->setObjectName("ButtonVehicules1");
        ButtonVehicules1->setGeometry(QRect(20, 420, 261, 51));
        ButtonVehicules1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        rechercher = new QLineEdit(employes);
        rechercher->setObjectName("rechercher");
        rechercher->setGeometry(QRect(690, 240, 351, 51));
        rechercher->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"    font-family: \"OCR A Extended\";  /* D\303\251finit la police sur OCR A Extended */\n"
"    /*font-size: 14px;                /* Taille de la police (ajustable) */\n"
"   /* color: black;                   /* Couleur du texte */\n"
"    /*padding: 5px;                   /* Espacement interne */\n"
"   /* border: 1px solid gray;         /* Bordure grise */\n"
"   /* border-radius: 5px;             /* Coins arrondis */\n"
"}\n"
""));
        cin_e = new QLineEdit(employes);
        cin_e->setObjectName("cin_e");
        cin_e->setGeometry(QRect(380, 380, 181, 21));
        cin_e->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        salaire_e = new QLineEdit(employes);
        salaire_e->setObjectName("salaire_e");
        salaire_e->setGeometry(QRect(380, 440, 181, 21));
        salaire_e->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        filter = new QComboBox(employes);
        filter->addItem(QString());
        filter->addItem(QString());
        filter->addItem(QString());
        filter->setObjectName("filter");
        filter->setGeometry(QRect(1050, 240, 171, 51));
        filter->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"   font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"	background-color: rgb(188, 184, 238);\n"
"    border: 2px solid #7a7a7a; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 5px 20px; /* Espacement interne */\n"
"    color: #333; /* Couleur du texte */\n"
"    font-size: 14px; /* Taille de la police */\n"
"}\n"
"\n"
"/* Style de la liste d\303\251roulante */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #ffffff; /* Couleur de fond de la liste */\n"
"    border: 1px solid #7a7a7a; /* Bordure de la liste */\n"
"    selection-background-color: #0078d7; /* Couleur de fond lors de la s\303\251lection */\n"
"    selection-color: white; /* Couleur du texte lors de la s\303\251lection */\n"
"}\n"
"\n"
"/* Style pour le bouton de la liste d\303\251roulante */\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 25px; /* Largeur du bouton de liste d\303\251roulante */\n"
""
                        "    border-left: 1px solid #7a7a7a; /* Bordure gauche du bouton */\n"
"}\n"
"\n"
"/* Style pour la fl\303\250che du bouton de liste d\303\251roulante */\n"
"QComboBox::down-arrow {\n"
"    image: url(arrow.png); /* Remplace par le chemin de ton image de fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}\n"
"\n"
"/* Effet au survol */\n"
"QComboBox:hover {\n"
"    border: 2px solid #0056b3; /* Couleur de bordure au survol */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #0078d7; /* Couleur de bordure lors du focus */\n"
"}\n"
"QComboBox::down-arrow {\n"
"    color: #333; /* Couleur de la fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}"));
        stat1Button = new QPushButton(employes);
        stat1Button->setObjectName("stat1Button");
        stat1Button->setGeometry(QRect(540, 240, 101, 51));
        stat1Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3CC38A; /* Couleur de fond verte */\n"
"    color: white; /* Couleur du texte en blanc */\n"
"    /*border-radius: 10px; /* Bords arrondis */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"   font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    border: 2px solid #2A9F71; /* Bordure plus fonc\303\251e */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2A9F71; /* Couleur de fond plus fonc\303\251e au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #218F64; /* Couleur de fond plus fonc\303\251e lorsqu'on clique */\n"
"    border: 2px solid #1E7D5A; /* Bordure plus fonc\303\251e lorsqu'on clique */\n"
"}"));
        etat_e = new QComboBox(employes);
        etat_e->addItem(QString());
        etat_e->addItem(QString());
        etat_e->setObjectName("etat_e");
        etat_e->setGeometry(QRect(380, 560, 181, 41));
        confirmerEmployes = new QPushButton(employes);
        confirmerEmployes->setObjectName("confirmerEmployes");
        confirmerEmployes->setEnabled(true);
        confirmerEmployes->setGeometry(QRect(404, 693, 131, 31));
        confirmerEmployes->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;\n"
""));
        supprimerEmployes = new QPushButton(employes);
        supprimerEmployes->setObjectName("supprimerEmployes");
        supprimerEmployes->setGeometry(QRect(900, 683, 161, 31));
        supprimerEmployes->setMouseTracking(true);
        supprimerEmployes->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;\n"
""));
        tableEmployes = new QTableView(employes);
        tableEmployes->setObjectName("tableEmployes");
        tableEmployes->setGeometry(QRect(665, 381, 551, 281));
        tableEmployes->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        modifierEmployes = new QPushButton(employes);
        modifierEmployes->setObjectName("modifierEmployes");
        modifierEmployes->setGeometry(QRect(710, 680, 161, 31));
        modifierEmployes->setMouseTracking(true);
        modifierEmployes->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;\n"
""));
        saveEmploye = new QPushButton(employes);
        saveEmploye->setObjectName("saveEmploye");
        saveEmploye->setGeometry(QRect(430, 640, 75, 24));
        saveEmploye->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 179, 182);"));
        special_e = new QComboBox(employes);
        special_e->addItem(QString());
        special_e->addItem(QString());
        special_e->setObjectName("special_e");
        special_e->setGeometry(QRect(380, 500, 181, 31));
        exportButton = new QPushButton(employes);
        exportButton->setObjectName("exportButton");
        exportButton->setGeometry(QRect(390, 240, 101, 51));
        exportButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"	background-color: rgb(38, 109, 175);\n"
"    color: white; /* Couleur du texte en blanc */\n"
"    /*border-radius: 10px; /* Bords arrondis */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"   font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    border: 2px solid #0f5a82; /* Bordure plus fonc\303\251e */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3660fa; /* Couleur de fond plus fonc\303\251e au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0f5a82; /* Couleur de fond plus fonc\303\251e lorsqu'on clique */\n"
"    border: 2px solid #1E7D5A; /* Bordure plus fonc\303\251e lorsqu'on clique */\n"
"}"));
        stackedWidget_2->addWidget(employes);
        supprimerEmployes->raise();
        confirmerEmployes->raise();
        ButtonMachines1->raise();
        ButtonPage1->raise();
        ButtonEmployes1->raise();
        ButtonApropos1->raise();
        ButtonTrensactions1->raise();
        ButtonVehicules1->raise();
        rechercher->raise();
        cin_e->raise();
        salaire_e->raise();
        filter->raise();
        stat1Button->raise();
        etat_e->raise();
        tableEmployes->raise();
        modifierEmployes->raise();
        saveEmploye->raise();
        special_e->raise();
        exportButton->raise();
        vehicules = new QWidget();
        vehicules->setObjectName("vehicules");
        vehicules->setStyleSheet(QString::fromUtf8("QWidget#vehicules {\n"
"    background-image: url(\"C:/Users/HP/Desktop/mech/vehicules.png\");\n"
"    background-position: center;   /* Centrer l'image */\n"
"    background-repeat: no-repeat;  /* Ne pas r\303\251p\303\251ter l'image */\n"
"    background-size: cover;        /* Adapter l'image \303\240 la taille du widget */\n"
"}\n"
""));
        ButtonEmployes2 = new QPushButton(vehicules);
        ButtonEmployes2->setObjectName("ButtonEmployes2");
        ButtonEmployes2->setGeometry(QRect(20, 360, 261, 51));
        ButtonEmployes2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonPage2 = new QPushButton(vehicules);
        ButtonPage2->setObjectName("ButtonPage2");
        ButtonPage2->setGeometry(QRect(20, 300, 261, 51));
        ButtonPage2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonApropos2 = new QPushButton(vehicules);
        ButtonApropos2->setObjectName("ButtonApropos2");
        ButtonApropos2->setGeometry(QRect(20, 610, 261, 51));
        ButtonApropos2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonTrensactions2 = new QPushButton(vehicules);
        ButtonTrensactions2->setObjectName("ButtonTrensactions2");
        ButtonTrensactions2->setGeometry(QRect(20, 550, 261, 51));
        ButtonTrensactions2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonVehicules2 = new QPushButton(vehicules);
        ButtonVehicules2->setObjectName("ButtonVehicules2");
        ButtonVehicules2->setGeometry(QRect(20, 420, 261, 51));
        ButtonVehicules2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonMachines2 = new QPushButton(vehicules);
        ButtonMachines2->setObjectName("ButtonMachines2");
        ButtonMachines2->setGeometry(QRect(20, 480, 261, 51));
        ButtonMachines2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        lineEdit_7 = new QLineEdit(vehicules);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(690, 240, 351, 51));
        lineEdit_7->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"    font-family: \"OCR A Extended\";  /* D\303\251finit la police sur OCR A Extended */\n"
"    /*font-size: 14px;                /* Taille de la police (ajustable) */\n"
"   /* color: black;                   /* Couleur du texte */\n"
"    /*padding: 5px;                   /* Espacement interne */\n"
"   /* border: 1px solid gray;         /* Bordure grise */\n"
"   /* border-radius: 5px;             /* Coins arrondis */\n"
"}\n"
""));
        lineEdit_20 = new QLineEdit(vehicules);
        lineEdit_20->setObjectName("lineEdit_20");
        lineEdit_20->setGeometry(QRect(390, 380, 181, 21));
        lineEdit_20->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        lineEdit_21 = new QLineEdit(vehicules);
        lineEdit_21->setObjectName("lineEdit_21");
        lineEdit_21->setGeometry(QRect(390, 430, 181, 21));
        lineEdit_21->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        lineEdit_22 = new QLineEdit(vehicules);
        lineEdit_22->setObjectName("lineEdit_22");
        lineEdit_22->setGeometry(QRect(390, 480, 181, 21));
        lineEdit_22->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        comboBox_3 = new QComboBox(vehicules);
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(390, 530, 181, 21));
        comboBox_3->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"   font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"	background-color: rgb(188, 184, 238);\n"
"    border: 2px solid #7a7a7a; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 5px 20px; /* Espacement interne */\n"
"    color: #333; /* Couleur du texte */\n"
"    font-size: 11px; /* Taille de la police */\n"
"}\n"
"\n"
"/* Style de la liste d\303\251roulante */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #ffffff; /* Couleur de fond de la liste */\n"
"    border: 1px solid #7a7a7a; /* Bordure de la liste */\n"
"    selection-background-color: #0078d7; /* Couleur de fond lors de la s\303\251lection */\n"
"    selection-color: white; /* Couleur du texte lors de la s\303\251lection */\n"
"}\n"
"\n"
"/* Style pour le bouton de la liste d\303\251roulante */\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 25px; /* Largeur du bouton de liste d\303\251roulante */\n"
""
                        "    border-left: 1px solid #7a7a7a; /* Bordure gauche du bouton */\n"
"}\n"
"\n"
"/* Style pour la fl\303\250che du bouton de liste d\303\251roulante */\n"
"QComboBox::down-arrow {\n"
"    image: url(arrow.png); /* Remplace par le chemin de ton image de fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}\n"
"\n"
"/* Effet au survol */\n"
"QComboBox:hover {\n"
"    border: 2px solid #0056b3; /* Couleur de bordure au survol */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #0078d7; /* Couleur de bordure lors du focus */\n"
"}\n"
"QComboBox::down-arrow {\n"
"    color: #333; /* Couleur de la fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}"));
        dateEdit_2 = new QDateEdit(vehicules);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setGeometry(QRect(390, 580, 181, 29));
        dateEdit_2->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"  \n"
"    border: 2px solid #7a7a7a; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 5px 10px; /* Espacement interne */\n"
"    color: white; /* Couleur du texte */\n"
"    font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"    font-size: 14px; /* Taille de la police */\n"
"}\n"
"\n"
"/* Style pour le bouton de s\303\251lection de date */\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 25px; /* Largeur du bouton de liste d\303\251roulante */\n"
"    border-left: 1px solid #7a7a7a; /* Bordure gauche du bouton */\n"
"}\n"
"\n"
"/* Style pour la fl\303\250che du bouton de s\303\251lection de date */\n"
"QDateEdit::down-arrow {\n"
"    image: url(arrow.png); /* Remplace par le chemin de ton image de fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}\n"
"\n"
"/* Effet au survol */\n"
"QDateEd"
                        "it:hover {\n"
"    border: 2px solid #0056b3; /* Couleur de bordure au survol */\n"
"}\n"
"\n"
"QDateEdit:focus {\n"
"    border: 2px solid #0078d7; /* Couleur de bordure lors du focus */\n"
"}\n"
""));
        comboBox_8 = new QComboBox(vehicules);
        comboBox_8->addItem(QString());
        comboBox_8->setObjectName("comboBox_8");
        comboBox_8->setGeometry(QRect(1050, 240, 171, 51));
        comboBox_8->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"   font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"	background-color: rgb(188, 184, 238);\n"
"    border: 2px solid #7a7a7a; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 5px 20px; /* Espacement interne */\n"
"    color: #333; /* Couleur du texte */\n"
"    font-size: 14px; /* Taille de la police */\n"
"}\n"
"\n"
"/* Style de la liste d\303\251roulante */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #ffffff; /* Couleur de fond de la liste */\n"
"    border: 1px solid #7a7a7a; /* Bordure de la liste */\n"
"    selection-background-color: #0078d7; /* Couleur de fond lors de la s\303\251lection */\n"
"    selection-color: white; /* Couleur du texte lors de la s\303\251lection */\n"
"}\n"
"\n"
"/* Style pour le bouton de la liste d\303\251roulante */\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 25px; /* Largeur du bouton de liste d\303\251roulante */\n"
""
                        "    border-left: 1px solid #7a7a7a; /* Bordure gauche du bouton */\n"
"}\n"
"\n"
"/* Style pour la fl\303\250che du bouton de liste d\303\251roulante */\n"
"QComboBox::down-arrow {\n"
"    image: url(arrow.png); /* Remplace par le chemin de ton image de fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}\n"
"\n"
"/* Effet au survol */\n"
"QComboBox:hover {\n"
"    border: 2px solid #0056b3; /* Couleur de bordure au survol */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #0078d7; /* Couleur de bordure lors du focus */\n"
"}\n"
"QComboBox::down-arrow {\n"
"    color: #333; /* Couleur de la fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}"));
        stat2 = new QPushButton(vehicules);
        stat2->setObjectName("stat2");
        stat2->setGeometry(QRect(540, 240, 101, 51));
        stat2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3CC38A; /* Couleur de fond verte */\n"
"    color: white; /* Couleur du texte en blanc */\n"
"    /*border-radius: 10px; /* Bords arrondis */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"   font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    border: 2px solid #2A9F71; /* Bordure plus fonc\303\251e */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2A9F71; /* Couleur de fond plus fonc\303\251e au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #218F64; /* Couleur de fond plus fonc\303\251e lorsqu'on clique */\n"
"    border: 2px solid #1E7D5A; /* Bordure plus fonc\303\251e lorsqu'on clique */\n"
"}"));
        stackedWidget_2->addWidget(vehicules);
        machines = new QWidget();
        machines->setObjectName("machines");
        machines->setStyleSheet(QString::fromUtf8("QWidget#machines {\n"
"    background-image: url(\"C:/Users/HP/Desktop/mech/machines.png\");\n"
"    background-position: center;   /* Centrer l'image */\n"
"    background-repeat: no-repeat;  /* Ne pas r\303\251p\303\251ter l'image */\n"
"    background-size: cover;        /* Adapter l'image \303\240 la taille du widget */\n"
"}\n"
""));
        ButtonPage3 = new QPushButton(machines);
        ButtonPage3->setObjectName("ButtonPage3");
        ButtonPage3->setGeometry(QRect(20, 300, 261, 51));
        ButtonPage3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonVehicules3 = new QPushButton(machines);
        ButtonVehicules3->setObjectName("ButtonVehicules3");
        ButtonVehicules3->setGeometry(QRect(20, 420, 261, 51));
        ButtonVehicules3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonMachines3 = new QPushButton(machines);
        ButtonMachines3->setObjectName("ButtonMachines3");
        ButtonMachines3->setGeometry(QRect(20, 490, 261, 51));
        ButtonMachines3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonEmployes3 = new QPushButton(machines);
        ButtonEmployes3->setObjectName("ButtonEmployes3");
        ButtonEmployes3->setGeometry(QRect(20, 360, 261, 51));
        ButtonEmployes3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonTrensactions3 = new QPushButton(machines);
        ButtonTrensactions3->setObjectName("ButtonTrensactions3");
        ButtonTrensactions3->setGeometry(QRect(20, 550, 261, 51));
        ButtonTrensactions3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonApropos3 = new QPushButton(machines);
        ButtonApropos3->setObjectName("ButtonApropos3");
        ButtonApropos3->setGeometry(QRect(20, 610, 261, 51));
        ButtonApropos3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        lineEdit_9 = new QLineEdit(machines);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(690, 240, 351, 51));
        lineEdit_9->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"    font-family: \"OCR A Extended\";  /* D\303\251finit la police sur OCR A Extended */\n"
"    /*font-size: 14px;                /* Taille de la police (ajustable) */\n"
"   /* color: black;                   /* Couleur du texte */\n"
"    /*padding: 5px;                   /* Espacement interne */\n"
"   /* border: 1px solid gray;         /* Bordure grise */\n"
"   /* border-radius: 5px;             /* Coins arrondis */\n"
"}\n"
""));
        comboBox_6 = new QComboBox(machines);
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName("comboBox_6");
        comboBox_6->setGeometry(QRect(1050, 240, 171, 51));
        comboBox_6->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"   font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"	background-color: rgb(188, 184, 238);\n"
"    border: 2px solid #7a7a7a; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 5px 20px; /* Espacement interne */\n"
"    color: #333; /* Couleur du texte */\n"
"    font-size: 14px; /* Taille de la police */\n"
"}\n"
"\n"
"/* Style de la liste d\303\251roulante */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #ffffff; /* Couleur de fond de la liste */\n"
"    border: 1px solid #7a7a7a; /* Bordure de la liste */\n"
"    selection-background-color: #0078d7; /* Couleur de fond lors de la s\303\251lection */\n"
"    selection-color: white; /* Couleur du texte lors de la s\303\251lection */\n"
"}\n"
"\n"
"/* Style pour le bouton de la liste d\303\251roulante */\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 25px; /* Largeur du bouton de liste d\303\251roulante */\n"
""
                        "    border-left: 1px solid #7a7a7a; /* Bordure gauche du bouton */\n"
"}\n"
"\n"
"/* Style pour la fl\303\250che du bouton de liste d\303\251roulante */\n"
"QComboBox::down-arrow {\n"
"    image: url(arrow.png); /* Remplace par le chemin de ton image de fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}\n"
"\n"
"/* Effet au survol */\n"
"QComboBox:hover {\n"
"    border: 2px solid #0056b3; /* Couleur de bordure au survol */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #0078d7; /* Couleur de bordure lors du focus */\n"
"}\n"
"QComboBox::down-arrow {\n"
"    color: #333; /* Couleur de la fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}"));
        stat3 = new QPushButton(machines);
        stat3->setObjectName("stat3");
        stat3->setGeometry(QRect(540, 240, 101, 51));
        stat3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3CC38A; /* Couleur de fond verte */\n"
"    color: white; /* Couleur du texte en blanc */\n"
"    /*border-radius: 10px; /* Bords arrondis */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"   font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    border: 2px solid #2A9F71; /* Bordure plus fonc\303\251e */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2A9F71; /* Couleur de fond plus fonc\303\251e au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #218F64; /* Couleur de fond plus fonc\303\251e lorsqu'on clique */\n"
"    border: 2px solid #1E7D5A; /* Bordure plus fonc\303\251e lorsqu'on clique */\n"
"}"));
        tableMachine = new QTableWidget(machines);
        tableMachine->setObjectName("tableMachine");
        tableMachine->setGeometry(QRect(675, 381, 541, 281));
        confirmerMachine = new QPushButton(machines);
        confirmerMachine->setObjectName("confirmerMachine");
        confirmerMachine->setGeometry(QRect(420, 690, 121, 31));
        confirmerMachine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"    border-radius: 20px;      \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"      border-radius: 20px;    \n"
"}\n"
""));
        modifierMachine = new QPushButton(machines);
        modifierMachine->setObjectName("modifierMachine");
        modifierMachine->setGeometry(QRect(720, 680, 161, 31));
        modifierMachine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        supprimerMachine = new QPushButton(machines);
        supprimerMachine->setObjectName("supprimerMachine");
        supprimerMachine->setGeometry(QRect(910, 680, 161, 31));
        supprimerMachine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        toutmachine = new QPushButton(machines);
        toutmachine->setObjectName("toutmachine");
        toutmachine->setGeometry(QRect(1090, 680, 101, 31));
        toutmachine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        date_maintenance = new QDateEdit(machines);
        date_maintenance->setObjectName("date_maintenance");
        date_maintenance->setGeometry(QRect(390, 570, 181, 29));
        date_maintenance->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"  \n"
"    border: 2px solid #7a7a7a; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 5px 10px; /* Espacement interne */\n"
"    color: white; /* Couleur du texte */\n"
"    font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"    font-size: 14px; /* Taille de la police */\n"
"}\n"
"\n"
"/* Style pour le bouton de s\303\251lection de date */\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 25px; /* Largeur du bouton de liste d\303\251roulante */\n"
"    border-left: 1px solid #7a7a7a; /* Bordure gauche du bouton */\n"
"}\n"
"\n"
"/* Style pour la fl\303\250che du bouton de s\303\251lection de date */\n"
"QDateEdit::down-arrow {\n"
"    image: url(arrow.png); /* Remplace par le chemin de ton image de fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}\n"
"\n"
"/* Effet au survol */\n"
"QDateEd"
                        "it:hover {\n"
"    border: 2px solid #0056b3; /* Couleur de bordure au survol */\n"
"}\n"
"\n"
"QDateEdit:focus {\n"
"    border: 2px solid #0078d7; /* Couleur de bordure lors du focus */\n"
"}\n"
""));
        type_m = new QComboBox(machines);
        type_m->addItem(QString());
        type_m->addItem(QString());
        type_m->addItem(QString());
        type_m->addItem(QString());
        type_m->addItem(QString());
        type_m->addItem(QString());
        type_m->addItem(QString());
        type_m->setObjectName("type_m");
        type_m->setGeometry(QRect(390, 450, 191, 31));
        type_m->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"   font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"	background-color: rgb(188, 184, 238);\n"
"    border: 2px solid #7a7a7a; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 5px 20px; /* Espacement interne */\n"
"    color: #333; /* Couleur du texte */\n"
"    font-size: 14px; /* Taille de la police */\n"
"}\n"
"\n"
"/* Style de la liste d\303\251roulante */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #ffffff; /* Couleur de fond de la liste */\n"
"    border: 1px solid #7a7a7a; /* Bordure de la liste */\n"
"    selection-background-color: #0078d7; /* Couleur de fond lors de la s\303\251lection */\n"
"    selection-color: white; /* Couleur du texte lors de la s\303\251lection */\n"
"}\n"
"\n"
"/* Style pour le bouton de la liste d\303\251roulante */\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 25px; /* Largeur du bouton de liste d\303\251roulante */\n"
""
                        "    border-left: 1px solid #7a7a7a; /* Bordure gauche du bouton */\n"
"}\n"
"\n"
"/* Style pour la fl\303\250che du bouton de liste d\303\251roulante */\n"
"QComboBox::down-arrow {\n"
"    image: url(arrow.png); /* Remplace par le chemin de ton image de fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}\n"
"\n"
"/* Effet au survol */\n"
"QComboBox:hover {\n"
"    border: 2px solid #0056b3; /* Couleur de bordure au survol */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #0078d7; /* Couleur de bordure lors du focus */\n"
"}\n"
"QComboBox::down-arrow {\n"
"    color: #333; /* Couleur de la fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}"));
        id_machine = new QLineEdit(machines);
        id_machine->setObjectName("id_machine");
        id_machine->setGeometry(QRect(390, 400, 181, 21));
        id_machine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        statut_m = new QComboBox(machines);
        statut_m->addItem(QString());
        statut_m->addItem(QString());
        statut_m->addItem(QString());
        statut_m->addItem(QString());
        statut_m->setObjectName("statut_m");
        statut_m->setGeometry(QRect(390, 510, 191, 31));
        statut_m->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"   font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"	background-color: rgb(188, 184, 238);\n"
"    border: 2px solid #7a7a7a; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 5px 20px; /* Espacement interne */\n"
"    color: #333; /* Couleur du texte */\n"
"    font-size: 14px; /* Taille de la police */\n"
"}\n"
"\n"
"/* Style de la liste d\303\251roulante */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #ffffff; /* Couleur de fond de la liste */\n"
"    border: 1px solid #7a7a7a; /* Bordure de la liste */\n"
"    selection-background-color: #0078d7; /* Couleur de fond lors de la s\303\251lection */\n"
"    selection-color: white; /* Couleur du texte lors de la s\303\251lection */\n"
"}\n"
"\n"
"/* Style pour le bouton de la liste d\303\251roulante */\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 25px; /* Largeur du bouton de liste d\303\251roulante */\n"
""
                        "    border-left: 1px solid #7a7a7a; /* Bordure gauche du bouton */\n"
"}\n"
"\n"
"/* Style pour la fl\303\250che du bouton de liste d\303\251roulante */\n"
"QComboBox::down-arrow {\n"
"    image: url(arrow.png); /* Remplace par le chemin de ton image de fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}\n"
"\n"
"/* Effet au survol */\n"
"QComboBox:hover {\n"
"    border: 2px solid #0056b3; /* Couleur de bordure au survol */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #0078d7; /* Couleur de bordure lors du focus */\n"
"}\n"
"QComboBox::down-arrow {\n"
"    color: #333; /* Couleur de la fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}"));
        localisation = new QLineEdit(machines);
        localisation->setObjectName("localisation");
        localisation->setGeometry(QRect(390, 640, 181, 21));
        localisation->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        stackedWidget_2->addWidget(machines);
        supprimerMachine->raise();
        ButtonPage3->raise();
        ButtonVehicules3->raise();
        ButtonMachines3->raise();
        ButtonEmployes3->raise();
        ButtonTrensactions3->raise();
        ButtonApropos3->raise();
        lineEdit_9->raise();
        comboBox_6->raise();
        stat3->raise();
        tableMachine->raise();
        confirmerMachine->raise();
        modifierMachine->raise();
        toutmachine->raise();
        date_maintenance->raise();
        type_m->raise();
        id_machine->raise();
        statut_m->raise();
        localisation->raise();
        trensactions = new QWidget();
        trensactions->setObjectName("trensactions");
        trensactions->setStyleSheet(QString::fromUtf8("QWidget#trensactions {\n"
"    background-image: url(\"C:/Users/HP/Desktop/mech/trensactions.png\");\n"
"    background-position: center;   /* Centrer l'image */\n"
"    background-repeat: no-repeat;  /* Ne pas r\303\251p\303\251ter l'image */\n"
"    background-size: cover;        /* Adapter l'image \303\240 la taille du widget */\n"
"}\n"
""));
        ButtonPage4 = new QPushButton(trensactions);
        ButtonPage4->setObjectName("ButtonPage4");
        ButtonPage4->setGeometry(QRect(20, 300, 261, 51));
        ButtonPage4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonVehicules4 = new QPushButton(trensactions);
        ButtonVehicules4->setObjectName("ButtonVehicules4");
        ButtonVehicules4->setGeometry(QRect(20, 420, 261, 51));
        ButtonVehicules4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonMachines4 = new QPushButton(trensactions);
        ButtonMachines4->setObjectName("ButtonMachines4");
        ButtonMachines4->setGeometry(QRect(20, 490, 261, 51));
        ButtonMachines4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonEmployes4 = new QPushButton(trensactions);
        ButtonEmployes4->setObjectName("ButtonEmployes4");
        ButtonEmployes4->setGeometry(QRect(20, 360, 261, 51));
        ButtonEmployes4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonTrensactions4 = new QPushButton(trensactions);
        ButtonTrensactions4->setObjectName("ButtonTrensactions4");
        ButtonTrensactions4->setGeometry(QRect(20, 550, 261, 51));
        ButtonTrensactions4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonApropos4 = new QPushButton(trensactions);
        ButtonApropos4->setObjectName("ButtonApropos4");
        ButtonApropos4->setGeometry(QRect(20, 610, 261, 51));
        ButtonApropos4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        lineEdit_8 = new QLineEdit(trensactions);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(670, 230, 351, 61));
        lineEdit_8->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"    font-family: \"OCR A Extended\";  /* D\303\251finit la police sur OCR A Extended */\n"
"    /*font-size: 14px;                /* Taille de la police (ajustable) */\n"
"   /* color: black;                   /* Couleur du texte */\n"
"    /*padding: 5px;                   /* Espacement interne */\n"
"   /* border: 1px solid gray;         /* Bordure grise */\n"
"   /* border-radius: 5px;             /* Coins arrondis */\n"
"}\n"
""));
        lineEdit_15 = new QLineEdit(trensactions);
        lineEdit_15->setObjectName("lineEdit_15");
        lineEdit_15->setGeometry(QRect(380, 360, 181, 21));
        lineEdit_15->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        lineEdit_16 = new QLineEdit(trensactions);
        lineEdit_16->setObjectName("lineEdit_16");
        lineEdit_16->setGeometry(QRect(380, 430, 181, 21));
        lineEdit_16->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        lineEdit_17 = new QLineEdit(trensactions);
        lineEdit_17->setObjectName("lineEdit_17");
        lineEdit_17->setGeometry(QRect(380, 500, 181, 21));
        lineEdit_17->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        lineEdit_19 = new QLineEdit(trensactions);
        lineEdit_19->setObjectName("lineEdit_19");
        lineEdit_19->setGeometry(QRect(380, 640, 181, 21));
        lineEdit_19->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        comboBox_4 = new QComboBox(trensactions);
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(370, 570, 191, 31));
        comboBox_4->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"   font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"	background-color: rgb(188, 184, 238);\n"
"    border: 2px solid #7a7a7a; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 5px 20px; /* Espacement interne */\n"
"    color: #333; /* Couleur du texte */\n"
"    font-size: 14px; /* Taille de la police */\n"
"}\n"
"\n"
"/* Style de la liste d\303\251roulante */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #ffffff; /* Couleur de fond de la liste */\n"
"    border: 1px solid #7a7a7a; /* Bordure de la liste */\n"
"    selection-background-color: #0078d7; /* Couleur de fond lors de la s\303\251lection */\n"
"    selection-color: white; /* Couleur du texte lors de la s\303\251lection */\n"
"}\n"
"\n"
"/* Style pour le bouton de la liste d\303\251roulante */\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 25px; /* Largeur du bouton de liste d\303\251roulante */\n"
""
                        "    border-left: 1px solid #7a7a7a; /* Bordure gauche du bouton */\n"
"}\n"
"\n"
"/* Style pour la fl\303\250che du bouton de liste d\303\251roulante */\n"
"QComboBox::down-arrow {\n"
"    image: url(arrow.png); /* Remplace par le chemin de ton image de fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}\n"
"\n"
"/* Effet au survol */\n"
"QComboBox:hover {\n"
"    border: 2px solid #0056b3; /* Couleur de bordure au survol */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #0078d7; /* Couleur de bordure lors du focus */\n"
"}\n"
"QComboBox::down-arrow {\n"
"    color: #333; /* Couleur de la fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}"));
        comboBox_7 = new QComboBox(trensactions);
        comboBox_7->addItem(QString());
        comboBox_7->setObjectName("comboBox_7");
        comboBox_7->setGeometry(QRect(1030, 230, 171, 61));
        comboBox_7->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"   font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"	background-color: rgb(188, 184, 238);\n"
"    border: 2px solid #7a7a7a; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 5px 20px; /* Espacement interne */\n"
"    color: #333; /* Couleur du texte */\n"
"    font-size: 14px; /* Taille de la police */\n"
"}\n"
"\n"
"/* Style de la liste d\303\251roulante */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #ffffff; /* Couleur de fond de la liste */\n"
"    border: 1px solid #7a7a7a; /* Bordure de la liste */\n"
"    selection-background-color: #0078d7; /* Couleur de fond lors de la s\303\251lection */\n"
"    selection-color: white; /* Couleur du texte lors de la s\303\251lection */\n"
"}\n"
"\n"
"/* Style pour le bouton de la liste d\303\251roulante */\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 25px; /* Largeur du bouton de liste d\303\251roulante */\n"
""
                        "    border-left: 1px solid #7a7a7a; /* Bordure gauche du bouton */\n"
"}\n"
"\n"
"/* Style pour la fl\303\250che du bouton de liste d\303\251roulante */\n"
"QComboBox::down-arrow {\n"
"    image: url(arrow.png); /* Remplace par le chemin de ton image de fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}\n"
"\n"
"/* Effet au survol */\n"
"QComboBox:hover {\n"
"    border: 2px solid #0056b3; /* Couleur de bordure au survol */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #0078d7; /* Couleur de bordure lors du focus */\n"
"}\n"
"QComboBox::down-arrow {\n"
"    color: #333; /* Couleur de la fl\303\250che */\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"}"));
        stat4 = new QPushButton(trensactions);
        stat4->setObjectName("stat4");
        stat4->setGeometry(QRect(520, 230, 101, 61));
        stat4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3CC38A; /* Couleur de fond verte */\n"
"    color: white; /* Couleur du texte en blanc */\n"
"    /*border-radius: 10px; /* Bords arrondis */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"   font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    border: 2px solid #2A9F71; /* Bordure plus fonc\303\251e */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2A9F71; /* Couleur de fond plus fonc\303\251e au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #218F64; /* Couleur de fond plus fonc\303\251e lorsqu'on clique */\n"
"    border: 2px solid #1E7D5A; /* Bordure plus fonc\303\251e lorsqu'on clique */\n"
"}"));
        stackedWidget_2->addWidget(trensactions);
        apropos = new QWidget();
        apropos->setObjectName("apropos");
        apropos->setStyleSheet(QString::fromUtf8("QWidget#apropos {\n"
"    background-image: url(\"C:/Users/HP/Desktop/mech/apropos.png\");\n"
"    background-position: center;   /* Centrer l'image */\n"
"    background-repeat: no-repeat;  /* Ne pas r\303\251p\303\251ter l'image */\n"
"    background-size: cover;        /* Adapter l'image \303\240 la taille du widget */\n"
"}\n"
""));
        ButtonPage5 = new QPushButton(apropos);
        ButtonPage5->setObjectName("ButtonPage5");
        ButtonPage5->setGeometry(QRect(20, 308, 261, 51));
        ButtonPage5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonVehicules5 = new QPushButton(apropos);
        ButtonVehicules5->setObjectName("ButtonVehicules5");
        ButtonVehicules5->setGeometry(QRect(20, 420, 261, 51));
        ButtonVehicules5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonMachines5 = new QPushButton(apropos);
        ButtonMachines5->setObjectName("ButtonMachines5");
        ButtonMachines5->setGeometry(QRect(20, 480, 261, 51));
        ButtonMachines5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonEmployes5 = new QPushButton(apropos);
        ButtonEmployes5->setObjectName("ButtonEmployes5");
        ButtonEmployes5->setGeometry(QRect(20, 360, 261, 51));
        ButtonEmployes5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonTrensactions5 = new QPushButton(apropos);
        ButtonTrensactions5->setObjectName("ButtonTrensactions5");
        ButtonTrensactions5->setGeometry(QRect(20, 550, 261, 51));
        ButtonTrensactions5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        ButtonApropos5 = new QPushButton(apropos);
        ButtonApropos5->setObjectName("ButtonApropos5");
        ButtonApropos5->setGeometry(QRect(20, 610, 261, 51));
        ButtonApropos5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;            /* Couleur de fond transparente */\n"
"    border: 2px solid transparent;            /* Pas de bordure par d\303\251faut */\n"
"    color: black;                             /* Couleur du texte */\n"
"    padding: 10px;                            /* Espacement interne */\n"
"    border-radius: 20px;                      /* Coins arrondis */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgba(128, 128, 128, 0.5); /* Gris transparent (50% d'opacit\303\251) */\n"
"   /* border: 2px solid gray;                     /* Bordure grise au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"}\n"
""));
        stackedWidget_2->addWidget(apropos);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        page_4->setStyleSheet(QString::fromUtf8("\n"
"    background-image: url(\"C:/Users/HP/Desktop/mech/page4.png\");\n"
"    background-position: center;   /* Centrer l'image */\n"
"    background-repeat: no-repeat;  /* Ne pas r\303\251p\303\251ter l'image */\n"
"    background-size: cover;        /* Adapter l'image \303\240 la taille du widget */\n"
""));
        supp_u = new QPushButton(page_4);
        supp_u->setObjectName("supp_u");
        supp_u->setGeometry(QRect(1100, 189, 131, 21));
        supp_u->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(255, 0, 0);\n"
"\n"
""));
        modif_u = new QPushButton(page_4);
        modif_u->setObjectName("modif_u");
        modif_u->setGeometry(QRect(980, 430, 91, 41));
        save_u = new QPushButton(page_4);
        save_u->setObjectName("save_u");
        save_u->setGeometry(QRect(980, 490, 91, 41));
        retour_u = new QPushButton(page_4);
        retour_u->setObjectName("retour_u");
        retour_u->setGeometry(QRect(1130, 20, 75, 24));
        role_u = new QComboBox(page_4);
        role_u->addItem(QString());
        role_u->setObjectName("role_u");
        role_u->setGeometry(QRect(180, 680, 431, 21));
        role_u->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        nom_u = new QLineEdit(page_4);
        nom_u->setObjectName("nom_u");
        nom_u->setGeometry(QRect(180, 290, 431, 22));
        prenom_u = new QLineEdit(page_4);
        prenom_u->setObjectName("prenom_u");
        prenom_u->setGeometry(QRect(180, 370, 431, 22));
        num_u = new QLineEdit(page_4);
        num_u->setObjectName("num_u");
        num_u->setGeometry(QRect(180, 450, 431, 22));
        mot_u = new QLineEdit(page_4);
        mot_u->setObjectName("mot_u");
        mot_u->setGeometry(QRect(180, 520, 431, 22));
        mail_u = new QLineEdit(page_4);
        mail_u->setObjectName("mail_u");
        mail_u->setGeometry(QRect(180, 600, 431, 22));
        stackedWidget_2->addWidget(page_4);
        stackedWidget->addWidget(pagecentral);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setStyleSheet(QString::fromUtf8("QWidget#page_3 {\n"
"    background-image: url(\"C:/Users/HP/Desktop/mech/page3.png\");\n"
"    background-position: center;   /* Centrer l'image */\n"
"    background-repeat: no-repeat;  /* Ne pas r\303\251p\303\251ter l'image */\n"
"    background-size: cover;        /* Adapter l'image \303\240 la taille du widget */\n"
"}\n"
""));
        seconnecter = new QPushButton(page_3);
        seconnecter->setObjectName("seconnecter");
        seconnecter->setGeometry(QRect(1050, 160, 81, 16));
        seconnecter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;  /* Couleur de fond transparente */\n"
"   \n"
"}\n"
""));
        ButtonCreer = new QPushButton(page_3);
        ButtonCreer->setObjectName("ButtonCreer");
        ButtonCreer->setGeometry(QRect(980, 610, 161, 51));
        ButtonCreer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: green;\n"
"    border: none;                   /* Pas de bordure */\n"
"    color: black;                   /* Couleur du texte */\n"
"    padding: 10px;                  /* Espacement interne */\n"
"    border-radius: 25px;            /* Coins arrondis */\n"
"    font-weight: bold;              /* Texte en gras */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:grey;\n"
"    border: none;                          /* Pas de bordure au survol */\n"
"    font-weight: bold;                     /* Assure que le texte reste en gras au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(169, 169, 169, 255); /* Couleur gris fonc\303\251 lors du clic */\n"
"    font-weight: bold;                          /* Texte en gras lors du clic */\n"
"}\n"
""));
        email_u = new QLineEdit(page_3);
        email_u->setObjectName("email_u");
        email_u->setGeometry(QRect(990, 230, 191, 31));
        email_u->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;\n"
""));
        cin_u = new QLineEdit(page_3);
        cin_u->setObjectName("cin_u");
        cin_u->setGeometry(QRect(1000, 300, 191, 31));
        cin_u->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;\n"
""));
        lastname_u = new QLineEdit(page_3);
        lastname_u->setObjectName("lastname_u");
        lastname_u->setGeometry(QRect(990, 370, 191, 31));
        lastname_u->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;\n"
""));
        firstname_u = new QLineEdit(page_3);
        firstname_u->setObjectName("firstname_u");
        firstname_u->setGeometry(QRect(990, 430, 191, 31));
        firstname_u->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;\n"
""));
        phone_u = new QLineEdit(page_3);
        phone_u->setObjectName("phone_u");
        phone_u->setGeometry(QRect(990, 490, 191, 31));
        phone_u->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;\n"
""));
        mdp_u = new QLineEdit(page_3);
        mdp_u->setObjectName("mdp_u");
        mdp_u->setGeometry(QRect(990, 560, 191, 31));
        mdp_u->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;\n"
""));
        rolee_u = new QComboBox(page_3);
        rolee_u->addItem(QString());
        rolee_u->setObjectName("rolee_u");
        rolee_u->setGeometry(QRect(1150, 160, 81, 22));
        addimage = new QPushButton(page_3);
        addimage->setObjectName("addimage");
        addimage->setGeometry(QRect(1150, 190, 81, 24));
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        buttonPage2->setText(QString());
        ButtonConnecter->setText(QCoreApplication::translate("MainWindow", "Se connecter", nullptr));
        sinscrir->setText(QString());
        mdp_oublie->setText(QString());
        send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        Retour->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Inserer votre CIN et Email</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        ButtonPage->setText(QString());
        ButtonEmployes->setText(QString());
        ButtonVehicules->setText(QString());
        ButtonMachines->setText(QString());
        ButtonTrensactions->setText(QString());
        ButtonApropos->setText(QString());
        sedeconnecter->setText(QCoreApplication::translate("MainWindow", "Se Deconnecter", nullptr));
        parametre->setText(QString());
        ButtonMachines1->setText(QString());
        ButtonPage1->setText(QString());
        ButtonEmployes1->setText(QString());
        ButtonApropos1->setText(QString());
        ButtonTrensactions1->setText(QString());
        ButtonVehicules1->setText(QString());
        rechercher->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        filter->setItemText(0, QCoreApplication::translate("MainWindow", "Trier par", nullptr));
        filter->setItemText(1, QCoreApplication::translate("MainWindow", "Salaire", nullptr));
        filter->setItemText(2, QCoreApplication::translate("MainWindow", "Disponibilit\303\251", nullptr));

        stat1Button->setText(QCoreApplication::translate("MainWindow", "Stat", nullptr));
        etat_e->setItemText(0, QCoreApplication::translate("MainWindow", "Disponible", nullptr));
        etat_e->setItemText(1, QCoreApplication::translate("MainWindow", "Occup\303\251", nullptr));

        confirmerEmployes->setText(QString());
        supprimerEmployes->setText(QString());
        modifierEmployes->setText(QString());
        saveEmploye->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        special_e->setItemText(0, QCoreApplication::translate("MainWindow", "Ingenieur", nullptr));
        special_e->setItemText(1, QCoreApplication::translate("MainWindow", "Technicien", nullptr));

        exportButton->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        ButtonEmployes2->setText(QString());
        ButtonPage2->setText(QString());
        ButtonApropos2->setText(QString());
        ButtonTrensactions2->setText(QString());
        ButtonVehicules2->setText(QString());
        ButtonMachines2->setText(QString());
        lineEdit_7->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "Choisir", nullptr));

        comboBox_8->setItemText(0, QCoreApplication::translate("MainWindow", "Trier par", nullptr));

        stat2->setText(QCoreApplication::translate("MainWindow", "Stat", nullptr));
        ButtonPage3->setText(QString());
        ButtonVehicules3->setText(QString());
        ButtonMachines3->setText(QString());
        ButtonEmployes3->setText(QString());
        ButtonTrensactions3->setText(QString());
        ButtonApropos3->setText(QString());
        lineEdit_9->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        comboBox_6->setItemText(0, QCoreApplication::translate("MainWindow", "Trier par", nullptr));

        stat3->setText(QCoreApplication::translate("MainWindow", "Stat", nullptr));
        confirmerMachine->setText(QString());
        modifierMachine->setText(QString());
        supprimerMachine->setText(QString());
        toutmachine->setText(QString());
        type_m->setItemText(0, QCoreApplication::translate("MainWindow", "Choisir", nullptr));
        type_m->setItemText(1, QCoreApplication::translate("MainWindow", "Machine de d\303\251coupe", nullptr));
        type_m->setItemText(2, QCoreApplication::translate("MainWindow", "Tour CNC", nullptr));
        type_m->setItemText(3, QCoreApplication::translate("MainWindow", "Robot de soudage automatis\303\251", nullptr));
        type_m->setItemText(4, QCoreApplication::translate("MainWindow", "Fraiseuse CNC", nullptr));
        type_m->setItemText(5, QCoreApplication::translate("MainWindow", "Syst\303\250me de manutention", nullptr));
        type_m->setItemText(6, QString());

        statut_m->setItemText(0, QCoreApplication::translate("MainWindow", "Choisir", nullptr));
        statut_m->setItemText(1, QCoreApplication::translate("MainWindow", "en fonctionnement", nullptr));
        statut_m->setItemText(2, QCoreApplication::translate("MainWindow", "en maintenance", nullptr));
        statut_m->setItemText(3, QCoreApplication::translate("MainWindow", "en panne", nullptr));

        ButtonPage4->setText(QString());
        ButtonVehicules4->setText(QString());
        ButtonMachines4->setText(QString());
        ButtonEmployes4->setText(QString());
        ButtonTrensactions4->setText(QString());
        ButtonApropos4->setText(QString());
        lineEdit_8->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "Choisir", nullptr));

        comboBox_7->setItemText(0, QCoreApplication::translate("MainWindow", "Trier par", nullptr));

        stat4->setText(QCoreApplication::translate("MainWindow", "Stat", nullptr));
        ButtonPage5->setText(QString());
        ButtonVehicules5->setText(QString());
        ButtonMachines5->setText(QString());
        ButtonEmployes5->setText(QString());
        ButtonTrensactions5->setText(QString());
        ButtonApropos5->setText(QString());
        supp_u->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        modif_u->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        save_u->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        retour_u->setText(QCoreApplication::translate("MainWindow", "Retour", nullptr));
        role_u->setItemText(0, QCoreApplication::translate("MainWindow", "Employee", nullptr));

        seconnecter->setText(QString());
        ButtonCreer->setText(QCoreApplication::translate("MainWindow", "Cr\303\251er", nullptr));
        rolee_u->setItemText(0, QCoreApplication::translate("MainWindow", "Employe", nullptr));

        addimage->setText(QCoreApplication::translate("MainWindow", "Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
