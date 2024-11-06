/********************************************************************************
** Form generated from reading UI file 'modifymachine.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYMACHINE_H
#define UI_MODIFYMACHINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLineEdit *localisation;
    QComboBox *statut_m1;
    QLineEdit *id_machine1;
    QComboBox *type_m1;
    QDateEdit *date_maintenance1;
    QLineEdit *localisation1;
    QPushButton *saveButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        localisation = new QLineEdit(Dialog);
        localisation->setObjectName("localisation");
        localisation->setGeometry(QRect(210, 340, 181, 21));
        localisation->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        statut_m1 = new QComboBox(Dialog);
        statut_m1->addItem(QString());
        statut_m1->addItem(QString());
        statut_m1->addItem(QString());
        statut_m1->addItem(QString());
        statut_m1->setObjectName("statut_m1");
        statut_m1->setGeometry(QRect(160, 90, 191, 31));
        statut_m1->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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
        id_machine1 = new QLineEdit(Dialog);
        id_machine1->setObjectName("id_machine1");
        id_machine1->setGeometry(QRect(170, 20, 181, 21));
        id_machine1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        type_m1 = new QComboBox(Dialog);
        type_m1->addItem(QString());
        type_m1->addItem(QString());
        type_m1->addItem(QString());
        type_m1->addItem(QString());
        type_m1->addItem(QString());
        type_m1->addItem(QString());
        type_m1->addItem(QString());
        type_m1->setObjectName("type_m1");
        type_m1->setGeometry(QRect(160, 50, 191, 31));
        type_m1->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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
        date_maintenance1 = new QDateEdit(Dialog);
        date_maintenance1->setObjectName("date_maintenance1");
        date_maintenance1->setGeometry(QRect(170, 140, 181, 29));
        date_maintenance1->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
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
        localisation1 = new QLineEdit(Dialog);
        localisation1->setObjectName("localisation1");
        localisation1->setGeometry(QRect(170, 180, 181, 21));
        localisation1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        saveButton = new QPushButton(Dialog);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(150, 240, 83, 29));
        cancelButton = new QPushButton(Dialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(260, 240, 83, 29));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        statut_m1->setItemText(0, QCoreApplication::translate("Dialog", "Choisir", nullptr));
        statut_m1->setItemText(1, QCoreApplication::translate("Dialog", "en fonctionnement", nullptr));
        statut_m1->setItemText(2, QCoreApplication::translate("Dialog", "en maintenance", nullptr));
        statut_m1->setItemText(3, QCoreApplication::translate("Dialog", "en panne", nullptr));

        type_m1->setItemText(0, QCoreApplication::translate("Dialog", "Choisir", nullptr));
        type_m1->setItemText(1, QCoreApplication::translate("Dialog", "Machine de d\303\251coupe", nullptr));
        type_m1->setItemText(2, QCoreApplication::translate("Dialog", "Tour CNC", nullptr));
        type_m1->setItemText(3, QCoreApplication::translate("Dialog", "Robot de soudage automatis\303\251", nullptr));
        type_m1->setItemText(4, QCoreApplication::translate("Dialog", "Fraiseuse CNC", nullptr));
        type_m1->setItemText(5, QCoreApplication::translate("Dialog", "Syst\303\250me de manutention", nullptr));
        type_m1->setItemText(6, QString());

        saveButton->setText(QCoreApplication::translate("Dialog", "save", nullptr));
        cancelButton->setText(QCoreApplication::translate("Dialog", "save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYMACHINE_H
