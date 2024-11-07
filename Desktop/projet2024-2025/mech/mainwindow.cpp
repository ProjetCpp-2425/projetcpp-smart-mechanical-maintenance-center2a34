#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QParallelAnimationGroup>
#include <QPalette>
#include "statwindow.h"
#include "machine.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError> // Assurez-vous d'inclure cette ligne
#include <QDebug>
#include "connection.h"
#include "modifiermachine.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Connection conn;
    conn.createconnection();

    ui->setupUi(this);

    // Affichez la page par défaut
    ui->stackedWidget->setCurrentWidget(ui->page1);
    animateWidgetAppearance(ui->page1);


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

    connect(ui->tousButton, &QPushButton::clicked, this, &MainWindow::checkAllRows);
    //connect(ui->modifierButton, &QPushButton::clicked, this, &MainWindow::on_modifierButton_clicked());


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
//////////////////////////////////
void MainWindow::showMachines() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_2->setCurrentWidget(ui->machines);
    setupTable(); // Afficher les données lors de l'initialisation

}
/////////////////////////////////




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
////////////////////////////////////////////////////////////////////

/*
void MainWindow::on_confirmerMachine_clicked() {
    // Récupération des données depuis les champs de l'interface
    int id_machine = ui->id_machine->text().toInt();
    QString type_m = ui->type_m->currentText();
    QString statut_m = ui->statut_m->currentText();
    QDate date_maintenance = ui->date_maintenance->date();
    QString localisation = ui->localisation->currentText();

    // Vérification que tous les champs sont remplis
    if (ui->id_machine->text().isEmpty() || type_m == "choisir" || statut_m == "choisir" || localisation == "choisir") {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs.");

        return;
    }
    // Vérifier si la date est valide avant d'exécuter la requête
    if (!date_maintenance.isValid()|| date_maintenance < QDate::currentDate()) {
        QMessageBox::critical(nullptr, "Erreur", "La date de maintenance n'est pas valide.");
        return;
    }
    else{
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
    setupTable(); // Afficher les données lors de l'initialisation
    }
}*/
void MainWindow::on_confirmerMachine_clicked() {
    // Récupération des données depuis les champs de l'interface
    int id_machine = ui->id_machine->text().toInt();
    QString type_m = ui->type_m->currentText();
    QString statut_m = ui->statut_m->currentText();
    QDate date_maintenance = ui->date_maintenance->date();
    QString localisation = ui->localisation->currentText();

    // Vérification que tous les champs sont remplis
    if (ui->id_machine->text().isEmpty() || type_m == "choisir" || statut_m == "choisir" || localisation == "choisir") {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs.");
        return;
    }

    // Vérifier si la date est valide avant d'exécuter la requête
    if (!date_maintenance.isValid() || date_maintenance < QDate::currentDate()) {
        QMessageBox::critical(nullptr, "Erreur", "La date de maintenance n'est pas valide.");
        return;
    }

    // Vérifier si l'ID existe déjà dans le tableau
    bool idExists = false;
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableMachine->model());
    if (model) {
        for (int row = 0; row < model->rowCount(); ++row) {
            int existingId = model->item(row, 1)->text().toInt(); // Colonne 1 contient l'ID de machine
            if (existingId == id_machine) {
                idExists = true;
                break;
            }
        }
    }

    if (idExists) {
        QMessageBox::critical(this, "Erreur", "L'ID de machine existe déjà dans la table.");
        return;
    }

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

    setupTable(); // Afficher les données lors de l'initialisation
}



void MainWindow::setupTable()
{
    Machine machine;
    QStandardItemModel *model = machine.afficher();
    ui->tableMachine->setModel(model);

    // Ajustement de la largeur des colonnes
    ui->tableMachine->setColumnWidth(0, 5); // Taille pour la colonne de sélection
    ui->tableMachine->setColumnWidth(1, 30); // Taille pour ID Machine
    ui->tableMachine->setColumnWidth(2, 120); // Taille pour Type Machine
    ui->tableMachine->setColumnWidth(3, 120); // Taille pour Statut Machine
    ui->tableMachine->setColumnWidth(4, 120); // Taille pour Date de Maintenance
    ui->tableMachine->setColumnWidth(5, 110); // Taille pour Localisation

    // Ajustement de la hauteur par défaut des lignes
    ui->tableMachine->verticalHeader()->setDefaultSectionSize(35);

    // Optionnel : Redimensionnement automatique des colonnes
    //ui->tableMachine->resizeColumnsToContents();
}

void MainWindow::checkAllRows() {
    QStandardItemModel* model = qobject_cast<QStandardItemModel*>(ui->tableMachine->model());
    if (model) {
        for (int row = 0; row < model->rowCount(); ++row) {
            QStandardItem* item = model->item(row, 0); // Supposant que la première colonne est celle des cases à cocher
            if (item) {
                item->setCheckState(Qt::Checked);
            }
        }
    }
}



void MainWindow::on_supprimerMachine_clicked()
{
    QStandardItemModel* model = qobject_cast<QStandardItemModel*>(ui->tableMachine->model());

    // Parcourir les lignes et supprimer celles cochées
    for (int row = model->rowCount() - 1; row >= 0; --row) {
        QStandardItem* checkItem = model->item(row, 0);
        if (checkItem->checkState() == Qt::Checked) {
            int id_machine = model->item(row, 1)->text().toInt();
            QSqlQuery query;
            query.prepare("DELETE FROM MACHINE WHERE id_machine = :id_machine");
            query.bindValue(":id_machine", id_machine);

            if (query.exec()) {
                model->removeRow(row); // Supprime la ligne de l'affichage
            } else {
                qDebug() << "Erreur de suppression :" << query.lastError().text();
            }
        }
    }
}




void MainWindow::on_modifierButton_clicked() {
    QStandardItemModel* model = qobject_cast<QStandardItemModel*>(ui->tableMachine->model());
    for (int row = model->rowCount() - 1; row >= 0; --row) {
        QStandardItem* checkItem = model->item(row, 0);
        if (checkItem->checkState() == Qt::Checked) {

            //int row = selectedRows.first().row();
            QString idMachine = ui->tableMachine->model()->data(ui->tableMachine->model()->index(row, 1)).toString();
            QString typeMachine = ui->tableMachine->model()->data(ui->tableMachine->model()->index(row, 2)).toString();
            QString statutMachine = ui->tableMachine->model()->data(ui->tableMachine->model()->index(row, 3)).toString();
            QString dateMaintenance = ui->tableMachine->model()->data(ui->tableMachine->model()->index(row, 4)).toString();
            QString localisation = ui->tableMachine->model()->data(ui->tableMachine->model()->index(row, 5)).toString();

            modifiermachine dialog(this);
            dialog.setDetails({idMachine, typeMachine, statutMachine, dateMaintenance, localisation});
            if (dialog.exec() == QDialog::Accepted) {
                QStringList updatedDetails = dialog.getDetails();

        }
    }
        setupTable(); // Afficher les données lors de l'initialisation

    }
}


