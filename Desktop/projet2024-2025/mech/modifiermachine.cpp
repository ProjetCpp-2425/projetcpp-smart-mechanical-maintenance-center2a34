#include "modifiermachine.h"
#include "ui_modifiermachine.h"
#include "connection.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "machine.h"
#include "mainwindow.h"



modifiermachine::modifiermachine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifiermachine)
{
    ui->setupUi(this);
    qApp->setPalette(QPalette());  // Réinitialise la palette de l'application

}

modifiermachine::~modifiermachine()
{
    delete ui;
}
/*
void modifiermachine::setDetails(const QStringList &details)
{
    // Mettre à jour l'interface avec les détails existants
    currentDetails = details;
    ui->id_machine->setText(details[0]);
    ui->type_m->setCurrentText(details[1]);
    ui->statut_m->setCurrentText(details[2]);
    ui->date_maintenance->setDate(QDate::fromString(details[3], "yyyy-MM-dd"));
    ui->localisation->setCurrentText(details[4]);
}*/
void modifiermachine::setDetails(const QStringList &details)
{
    // Mettre à jour l'interface avec les détails existants
    currentDetails = details;

    // Vérifier que chaque champ est bien dans les détails fournis
    if (details.size() >= 5) {
        ui->id_machine->setText(details[0]);
        ui->type_m->setCurrentText(details[1]);
        ui->statut_m->setCurrentText(details[2]);

        // Vérifier la conversion de la date
        QDate date = QDate::fromString(details[3], "yyyy-MM-dd");
        if (date.isValid()) {
            ui->date_maintenance->setDate(date);
        } else {
            QMessageBox::warning(this, "Erreur", "Format de date invalide pour la date de maintenance.");
        }

        ui->localisation->setCurrentText(details[4]);
    } else {
        QMessageBox::critical(this, "Erreur", "Les détails sont incomplets pour initialiser la machine.");
    }
}


QStringList modifiermachine::getDetails() const
{
    QStringList details;
    details << ui->id_machine->text();
    details << ui->type_m->currentText();
    details << ui->statut_m->currentText();
    details << ui->date_maintenance->date().toString("yyyy-MM-dd");
    details << ui->localisation->currentText();
    return details;
}


void modifiermachine::on_confirmerButton_clicked()
{
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
    } else {

        // Vérifier si la date est valide avant d'exécuter la requête
        if (!date_maintenance.isValid() || date_maintenance < QDate::currentDate()) {
            QMessageBox::critical(nullptr, "Erreur", "La date de maintenance n'est pas valide.");
            return;
        }

        // Vérification de l'existence de l'ID dans la base de données
        QSqlQuery checkQuery;
        checkQuery.prepare("SELECT COUNT(*) FROM MACHINE WHERE ID_MACHINE = :id_machine");
        checkQuery.bindValue(":id_machine", id_machine);

        if (!checkQuery.exec()) {
            QMessageBox::critical(this, "Erreur", "Erreur lors de la vérification de l'ID : " + checkQuery.lastError().text());
            return;
        }

        checkQuery.next();
        int count = checkQuery.value(0).toInt();

        if (count == 0) {
            QMessageBox::critical(this, "Erreur", "L'ID de machine n'existe pas dans la base de données.");
            return;
        }

        // Si l'ID existe, on procède à la mise à jour
        QSqlQuery query;
        query.prepare("UPDATE MACHINE SET TYPE_M = :type_m, STATUT_M = :statut_m, DATE_MAINTENANCE = :date_maintenance, LOCALISATION = :localisation WHERE ID_MACHINE = :id_machine");

        // Lier les paramètres
        query.bindValue(":type_m", type_m);
        query.bindValue(":statut_m", statut_m);
        query.bindValue(":date_maintenance", date_maintenance);
        query.bindValue(":localisation", localisation);
        query.bindValue(":id_machine", id_machine);

        // Exécuter la requête
        if (query.exec()) {
            QMessageBox::information(this, "Succès", "Les informations ont été mises à jour avec succès.");
            accept();  // Accepte la modification et ferme la fenêtre
        } else {
            QMessageBox::critical(this, "Erreur", "Erreur lors de la mise à jour des informations : " + query.lastError().text());
        }
    }
}


void modifiermachine::on_annulerButton_clicked()
{
    reject();  // Rejette la modification et ferme la fenêtre
}


