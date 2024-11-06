#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QParallelAnimationGroup>
#include <QPalette>
#include "statwindow.h"
#include "machine.h"
#include "employes.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError> // Assurez-vous d'inclure cette ligne
#include <QDebug>
#include "connection.h"
#include <QSqlQueryModel>
#include <QTableView>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Pour mettre la fenêtre en plein écran
    //this->showFullScreen();



    // Affichez la page par défaut
    ui->stackedWidget->setCurrentWidget(ui->page1);
    animateWidgetAppearance(ui->page1);
    ui->tableEmployes->setModel(E.afficherE());

    // Connecter les boutons aux pages du QStackedWidget
    connect(ui->ButtonConnecter, &QPushButton::clicked, this, &MainWindow::showPagecentral);
    connect(ui->ButtonCreer, &QPushButton::clicked, this, &MainWindow::showPagecentral);

    connect(ui->buttonPage2, &QPushButton::clicked, this, &MainWindow::showPage2);
    connect(ui->sinscrir, &QPushButton::clicked, this, &MainWindow::showPage3);
    connect(ui->seconnecter, &QPushButton::clicked, this, &MainWindow::showPage2);


    connect(ui->ButtonPage, &QPushButton::clicked, this, &MainWindow::showPagecentral);
    connect(ui->ButtonEmployes, &QPushButton::clicked, this, &MainWindow::showEmployes);
    connect(ui->ButtonVehicules, &QPushButton::clicked, this, &MainWindow::showVehicules);
    connect(ui->ButtonMachines, &QPushButton::clicked, this, &MainWindow::showMachines);
    connect(ui->ButtonTrensactions, &QPushButton::clicked, this, &MainWindow::showTrensactions);
    connect(ui->ButtonApropos, &QPushButton::clicked, this, &MainWindow::showApropos);

    connect(ui->ButtonPage1, &QPushButton::clicked, this, &MainWindow::showPagecentral);
    connect(ui->ButtonEmployes1, &QPushButton::clicked, this, &MainWindow::showEmployes);
    connect(ui->ButtonVehicules1, &QPushButton::clicked, this, &MainWindow::showVehicules);
    connect(ui->ButtonMachines1, &QPushButton::clicked, this, &MainWindow::showMachines);
    connect(ui->ButtonTrensactions1, &QPushButton::clicked, this, &MainWindow::showTrensactions);
    connect(ui->ButtonApropos1, &QPushButton::clicked, this, &MainWindow::showApropos);

    connect(ui->ButtonPage2, &QPushButton::clicked, this, &MainWindow::showPagecentral);
    connect(ui->ButtonEmployes2, &QPushButton::clicked, this, &MainWindow::showEmployes);
    connect(ui->ButtonVehicules2, &QPushButton::clicked, this, &MainWindow::showVehicules);
    connect(ui->ButtonMachines2, &QPushButton::clicked, this, &MainWindow::showMachines);
    connect(ui->ButtonTrensactions2, &QPushButton::clicked, this, &MainWindow::showTrensactions);
    connect(ui->ButtonApropos2, &QPushButton::clicked, this, &MainWindow::showApropos);

    connect(ui->ButtonPage3, &QPushButton::clicked, this, &MainWindow::showPagecentral);
    connect(ui->ButtonEmployes3, &QPushButton::clicked, this, &MainWindow::showEmployes);
    connect(ui->ButtonVehicules3, &QPushButton::clicked, this, &MainWindow::showVehicules);
    connect(ui->ButtonMachines3, &QPushButton::clicked, this, &MainWindow::showMachines);
    connect(ui->ButtonTrensactions3, &QPushButton::clicked, this, &MainWindow::showTrensactions);
    connect(ui->ButtonApropos3, &QPushButton::clicked, this, &MainWindow::showApropos);

    connect(ui->ButtonPage4, &QPushButton::clicked, this, &MainWindow::showPagecentral);
    connect(ui->ButtonEmployes4, &QPushButton::clicked, this, &MainWindow::showEmployes);
    connect(ui->ButtonVehicules4, &QPushButton::clicked, this, &MainWindow::showVehicules);
    connect(ui->ButtonMachines4, &QPushButton::clicked, this, &MainWindow::showMachines);
    connect(ui->ButtonTrensactions4, &QPushButton::clicked, this, &MainWindow::showTrensactions);
    connect(ui->ButtonApropos4, &QPushButton::clicked, this, &MainWindow::showApropos);

    connect(ui->ButtonPage5, &QPushButton::clicked, this, &MainWindow::showPagecentral);
    connect(ui->ButtonEmployes5, &QPushButton::clicked, this, &MainWindow::showEmployes);
    connect(ui->ButtonVehicules5, &QPushButton::clicked, this, &MainWindow::showVehicules);
    connect(ui->ButtonMachines5, &QPushButton::clicked, this, &MainWindow::showMachines);
    connect(ui->ButtonTrensactions5, &QPushButton::clicked, this, &MainWindow::showTrensactions);
    connect(ui->ButtonApropos5, &QPushButton::clicked, this, &MainWindow::showApropos);

    connect(ui->stat1Button, &QPushButton::clicked, this, &MainWindow::on_stat1Button_clicked);
    connect(ui->stat2, &QPushButton::clicked, this, &MainWindow::on_stat1Button_clicked);
    connect(ui->stat3, &QPushButton::clicked, this, &MainWindow::on_stat1Button_clicked);
    connect(ui->stat4, &QPushButton::clicked, this, &MainWindow::on_stat1Button_clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}
/////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::showPagecentral() {
    QGraphicsOpacityEffect* opacityEffect = new QGraphicsOpacityEffect(ui->widget_2);
    ui->widget_2->setGraphicsEffect(opacityEffect);

    ui->stackedWidget->setCurrentWidget(ui->pagecentral);
    ui->stackedWidget_2->setCurrentWidget(ui->page);
    startBlinkingEffect(ui->widget_2); // Appel de la méthode pour faire clignoter le widget

}

void MainWindow::showPage2() {
    ui->stackedWidget->setCurrentWidget(ui->page_2);
}

void MainWindow::showPage3() {
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}





//////////////////////////////////////////////////////////////////////////////////

void MainWindow::showEmployes() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_2->setCurrentWidget(ui->employes);
}
void MainWindow::showVehicules() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_2->setCurrentWidget(ui->vehicules);
}

void MainWindow::showMachines() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_2->setCurrentWidget(ui->machines);
}
void MainWindow::showTrensactions() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_2->setCurrentWidget(ui->trensactions);
}


void MainWindow::showApropos() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_2->setCurrentWidget(ui->apropos);
}

/////////////////////////////////////////////////////


void MainWindow::animateWidgetAppearance(QWidget* widget) {
    // Appliquer un effet d'opacité au widget
    QGraphicsOpacityEffect* opacityEffect = new QGraphicsOpacityEffect(widget);
    widget->setGraphicsEffect(opacityEffect);

    // Créer une animation sur la propriété "opacity" (transparence)
    QPropertyAnimation* opacityAnimation = new QPropertyAnimation(opacityEffect, "opacity");
    opacityAnimation->setDuration(1000);  // Durée de l'animation en millisecondes
    opacityAnimation->setStartValue(0.0); // Commence transparent
    opacityAnimation->setEndValue(1.0);   // Finit opaque

    // Lancer l'animation
    opacityAnimation->start(QAbstractAnimation::DeleteWhenStopped); // Supprime l'animation à la fin
}


void MainWindow::startBlinkingEffect(QWidget* widget) {
    // Appliquer un effet d'opacité au widget si ce n'est pas déjà fait
    QGraphicsOpacityEffect* opacityEffect = new QGraphicsOpacityEffect(widget);
    widget->setGraphicsEffect(opacityEffect);

    // Créer une animation pour l'opacité
    QPropertyAnimation* opacityAnimation = new QPropertyAnimation(opacityEffect, "opacity");
    opacityAnimation->setDuration(500); // Durée de chaque cycle
    opacityAnimation->setStartValue(1.0); // Commence opaque
    opacityAnimation->setEndValue(0.0); // Devient transparent

    // Créer un groupe d'animations pour faire clignoter
    QSequentialAnimationGroup* blinkGroup = new QSequentialAnimationGroup(this);
    blinkGroup->addAnimation(opacityAnimation);

    // Ajouter l'animation inverse pour revenir à opaque
    QPropertyAnimation* reverseOpacityAnimation = new QPropertyAnimation(opacityEffect, "opacity");
    reverseOpacityAnimation->setDuration(500);
    reverseOpacityAnimation->setStartValue(0.0);
    reverseOpacityAnimation->setEndValue(1.0);
    blinkGroup->addAnimation(reverseOpacityAnimation);

    // Répéter l'animation
    blinkGroup->setLoopCount(-1); // -1 pour un nombre infini de répétitions

    // Lancer l'animation
    blinkGroup->start(QAbstractAnimation::DeleteWhenStopped);
}
//////////////////////////////////////////////////////
void MainWindow::on_stat1Button_clicked()
{
    // Créer une instance de la fenêtre d'affichage des statistiques
    StatWindow* statWindow = new StatWindow(this);

    // Afficher la fenêtre en tant que boîte de dialogue modale ou non-modale
    statWindow->exec();  // Pour une fenêtre modale (bloque la fenêtre principale jusqu'à ce que celle-ci soit fermée)
    // statWindow->show();  // Pour une fenêtre non-modale
}
/*
void MainWindow::on_confirmerMachine_clicked() {
    // Récupération des données depuis les champs de l'interface
    int id_machine = ui->id_machine->text().toInt();
    QString type_m = ui->type_m->currentText();
    QString statut_m = ui->statut_m->currentText();
    QDate date_maintenance = ui->date_maintenance->date();
    QString localisation = ui->localisation->text();

    Machine M(id_machine, type_m, statut_m, date_maintenance, localisation);
    bool test = M.ajouter();

    if(test) {
        QMessageBox::information(nullptr, QObject::tr("Succès"),
                                 QObject::tr("Ajout effectué.\nCliquez sur Annuler pour quitter."),
                                 QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Échec"),
                              QObject::tr("Échec de l'ajout.\nCliquez sur Annuler pour quitter."),
                              QMessageBox::Cancel);
    }
}*/


void MainWindow::on_confirmerMachine_clicked() {
    // Récupération des données depuis les champs de l'interface
    int id_machine = ui->id_machine->text().toInt();
    QString type_m = ui->type_m->currentText();
    QString statut_m = ui->statut_m->currentText();
    QDate date_maintenance = ui->date_maintenance->date(); // Récupération de la date
    QString localisation = ui->localisation->text();

    // Création d'un objet Machine
    Machine M(id_machine, type_m, statut_m, date_maintenance, localisation);

    // Appel de la méthode d'ajout
    if (M.ajouter()) {
        QMessageBox::information(nullptr, QObject::tr("Succès"),
                                 QObject::tr("Ajout effectué.\nCliquez sur Annuler pour quitter."),
                                 QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Échec"),
                              QObject::tr("Échec de l'ajout.\nCliquez sur Annuler pour quitter."),
                              QMessageBox::Cancel);
    }
}


void MainWindow::on_confirmerEmployes_clicked() {
    // Récupération des données depuis les champs de l'interface
    int cin_e = ui->cin_e->text().toInt();
    QString salaire_e = ui->salaire_e->text();
    QString special_e = ui->special_e->text();
    QString etat_e = ui->etat_e->currentText();


    employes Eu(cin_e, salaire_e, special_e, etat_e);

    // Appel de la méthode d'ajout
    if (Eu.ajouterE()) {
        ui->tableEmployes->setModel(E.afficherE());
        QMessageBox::information(nullptr, QObject::tr("Succès"),
                                 QObject::tr("Ajout effectué.\nCliquez sur Annuler pour quitter."),
                                 QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Échec"),
                              QObject::tr("Échec de l'ajout.\nCliquez sur Annuler pour quitter."),
                              QMessageBox::Cancel);
    }
}


void MainWindow::on_supprimerEmployes_clicked(){
    int cin_e=ui->rechercher->text().toInt();
    employes Eu;

    if (Eu.supprimerE(cin_e)) {
        ui->tableEmployes->setModel(E.afficherE());
        QMessageBox::information(this, tr("Succès"), tr("Employé supprimé avec succès."));
    } else {
        QMessageBox::critical(this, tr("Erreur"), tr("Échec de la suppression de l'employé."));
    }
}
void MainWindow::on_modifierEmployes_clicked()
{

    int cin_e=ui->rechercher->text().toInt();
    // Set the updated values based on UI input fields
    QString salaire_e = ui->salaire_e->text();
    QString special_e = ui->special_e->text();
    QString etat_e = ui->etat_e->currentText();

    employes Eu(cin_e, salaire_e, special_e, etat_e);
    if (Eu.modifierE(cin_e)) {
        ui->tableEmployes->setModel(E.afficherE());
        QMessageBox::information(nullptr, QObject::tr("Succès"),
                                 QObject::tr("Modif effectué.\nCliquez sur Annuler pour quitter."),
                                 QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Échec"),
                              QObject::tr("Échec de l'ajout.\nCliquez sur Annuler pour quitter."),
                              QMessageBox::Cancel);
    }
}
