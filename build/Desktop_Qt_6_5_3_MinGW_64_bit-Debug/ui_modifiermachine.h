/********************************************************************************
** Form generated from reading UI file 'modifiermachine.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFIERMACHINE_H
#define UI_MODIFIERMACHINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_modifiermachine
{
public:
    QPushButton *confirmerButton;
    QLineEdit *lineEdit_7;
    QComboBox *type_m;
    QLineEdit *lineEdit_6;
    QLineEdit *id_machine;
    QComboBox *localisation;
    QPushButton *annulerButton;
    QLineEdit *lineEdit_5;
    QDateEdit *date_maintenance;
    QLineEdit *lineEdit_3;
    QComboBox *statut_m;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_8;

    void setupUi(QDialog *modifiermachine)
    {
        if (modifiermachine->objectName().isEmpty())
            modifiermachine->setObjectName("modifiermachine");
        modifiermachine->resize(614, 373);
        confirmerButton = new QPushButton(modifiermachine);
        confirmerButton->setObjectName("confirmerButton");
        confirmerButton->setGeometry(QRect(230, 320, 161, 41));
        confirmerButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    color: white; /* Couleur du texte */\n"
"    background-color: #4CAF50; /* Couleur de fond */\n"
"    border: none; /* Pas de bordure */\n"
"   border-radius: 20px; /* Coins arrondis */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"    cursor: pointer; /* Changement du curseur au survol */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: green; /* Couleur de fond au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:green; /* Couleur de fond lorsqu'on clique */\n"
"    padding-top: 9px; /* R\303\251duction de l'espacement interne pour un effet de clic */\n"
"    padding-left: 19px; /* R\303\251duction de l'espacement interne pour un effet de clic */\n"
"}\n"
""));
        lineEdit_7 = new QLineEdit(modifiermachine);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setEnabled(true);
        lineEdit_7->setGeometry(QRect(100, 230, 361, 61));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("OCR A Extended")});
        font.setPointSize(14);
        font.setBold(false);
        font.setUnderline(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        lineEdit_7->setFont(font);
        lineEdit_7->setAcceptDrops(true);
        lineEdit_7->setAutoFillBackground(false);
        lineEdit_7->setStyleSheet(QString::fromUtf8("QLineEdit { background-color: transparent;\n"
"color:black; }"));
        lineEdit_7->setFrame(false);
        lineEdit_7->setReadOnly(false);
        type_m = new QComboBox(modifiermachine);
        type_m->addItem(QString());
        type_m->addItem(QString());
        type_m->addItem(QString());
        type_m->addItem(QString());
        type_m->setObjectName("type_m");
        type_m->setGeometry(QRect(330, 130, 191, 31));
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
        lineEdit_6 = new QLineEdit(modifiermachine);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setEnabled(true);
        lineEdit_6->setGeometry(QRect(70, 190, 361, 61));
        sizePolicy.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy);
        lineEdit_6->setFont(font);
        lineEdit_6->setAcceptDrops(true);
        lineEdit_6->setAutoFillBackground(false);
        lineEdit_6->setStyleSheet(QString::fromUtf8("QLineEdit { background-color: transparent;\n"
"color:black; }"));
        lineEdit_6->setFrame(false);
        lineEdit_6->setReadOnly(false);
        id_machine = new QLineEdit(modifiermachine);
        id_machine->setObjectName("id_machine");
        id_machine->setGeometry(QRect(400, 70, 171, 21));
        id_machine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        localisation = new QComboBox(modifiermachine);
        localisation->addItem(QString());
        localisation->addItem(QString());
        localisation->addItem(QString());
        localisation->addItem(QString());
        localisation->setObjectName("localisation");
        localisation->setGeometry(QRect(330, 250, 191, 31));
        localisation->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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
        annulerButton = new QPushButton(modifiermachine);
        annulerButton->setObjectName("annulerButton");
        annulerButton->setGeometry(QRect(400, 320, 161, 41));
        annulerButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-family: 'OCR A Extended', sans-serif; /* Police OCR A Extended */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    color: white; /* Couleur du texte */\n"
"    background-color: red; /* Couleur de fond */\n"
"    border: none; /* Pas de bordure */\n"
"   border-radius: 20px; /* Coins arrondis */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"    cursor: pointer; /* Changement du curseur au survol */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: red; /* Couleur de fond au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:red; /* Couleur de fond lorsqu'on clique */\n"
"    padding-top: 9px; /* R\303\251duction de l'espacement interne pour un effet de clic */\n"
"    padding-left: 19px; /* R\303\251duction de l'espacement interne pour un effet de clic */\n"
"}\n"
""));
        lineEdit_5 = new QLineEdit(modifiermachine);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setEnabled(true);
        lineEdit_5->setGeometry(QRect(140, 150, 361, 61));
        sizePolicy.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy);
        lineEdit_5->setFont(font);
        lineEdit_5->setAcceptDrops(true);
        lineEdit_5->setAutoFillBackground(false);
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit { background-color: transparent;\n"
"color:black; }"));
        lineEdit_5->setFrame(false);
        lineEdit_5->setReadOnly(false);
        date_maintenance = new QDateEdit(modifiermachine);
        date_maintenance->setObjectName("date_maintenance");
        date_maintenance->setGeometry(QRect(330, 210, 191, 29));
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
        lineEdit_3 = new QLineEdit(modifiermachine);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setEnabled(true);
        lineEdit_3->setGeometry(QRect(30, 50, 581, 61));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setFont(font);
        lineEdit_3->setAcceptDrops(true);
        lineEdit_3->setAutoFillBackground(false);
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit { background-color: transparent;\n"
"color:red; }"));
        lineEdit_3->setFrame(false);
        lineEdit_3->setReadOnly(false);
        statut_m = new QComboBox(modifiermachine);
        statut_m->addItem(QString());
        statut_m->addItem(QString());
        statut_m->addItem(QString());
        statut_m->setObjectName("statut_m");
        statut_m->setGeometry(QRect(330, 170, 191, 31));
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
        lineEdit_4 = new QLineEdit(modifiermachine);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setEnabled(true);
        lineEdit_4->setGeometry(QRect(150, 110, 361, 61));
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);
        lineEdit_4->setFont(font);
        lineEdit_4->setAcceptDrops(true);
        lineEdit_4->setAutoFillBackground(false);
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit { background-color: transparent;\n"
"color:black; }"));
        lineEdit_4->setFrame(false);
        lineEdit_4->setReadOnly(false);
        lineEdit_8 = new QLineEdit(modifiermachine);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setEnabled(true);
        lineEdit_8->setGeometry(QRect(120, 0, 391, 61));
        sizePolicy.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Impact")});
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setUnderline(false);
        lineEdit_8->setFont(font1);
        lineEdit_8->setAcceptDrops(true);
        lineEdit_8->setAutoFillBackground(false);
        lineEdit_8->setStyleSheet(QString::fromUtf8("QLineEdit { background-color: transparent;\n"
"color:black; }"));
        lineEdit_8->setFrame(false);
        lineEdit_8->setReadOnly(false);

        retranslateUi(modifiermachine);

        QMetaObject::connectSlotsByName(modifiermachine);
    } // setupUi

    void retranslateUi(QDialog *modifiermachine)
    {
        modifiermachine->setWindowTitle(QCoreApplication::translate("modifiermachine", "Dialog", nullptr));
        confirmerButton->setText(QCoreApplication::translate("modifiermachine", "Confirmer", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("modifiermachine", "localisation", nullptr));
        type_m->setItemText(0, QCoreApplication::translate("modifiermachine", "Tour CNC", nullptr));
        type_m->setItemText(1, QCoreApplication::translate("modifiermachine", "Fraiseuse CNC", nullptr));
        type_m->setItemText(2, QCoreApplication::translate("modifiermachine", "Robots industriels", nullptr));
        type_m->setItemText(3, QCoreApplication::translate("modifiermachine", "Imprimante 3D", nullptr));

        lineEdit_6->setText(QCoreApplication::translate("modifiermachine", "date maintenance", nullptr));
        id_machine->setText(QString());
        localisation->setItemText(0, QCoreApplication::translate("modifiermachine", "Tunis", nullptr));
        localisation->setItemText(1, QCoreApplication::translate("modifiermachine", "Monastir", nullptr));
        localisation->setItemText(2, QCoreApplication::translate("modifiermachine", "Jendouba", nullptr));
        localisation->setItemText(3, QCoreApplication::translate("modifiermachine", "Bizert", nullptr));

        annulerButton->setText(QCoreApplication::translate("modifiermachine", "annuler", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("modifiermachine", "statut", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("modifiermachine", "ID  de la machine a modifier", nullptr));
        statut_m->setItemText(0, QCoreApplication::translate("modifiermachine", "en fonctionnement", nullptr));
        statut_m->setItemText(1, QCoreApplication::translate("modifiermachine", "en maintenance", nullptr));
        statut_m->setItemText(2, QCoreApplication::translate("modifiermachine", "en panne", nullptr));

        lineEdit_4->setText(QCoreApplication::translate("modifiermachine", "type", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("modifiermachine", "Modification d'une machine", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifiermachine: public Ui_modifiermachine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFIERMACHINE_H
