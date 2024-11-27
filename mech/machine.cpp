#include "machine.h"
#include "mainwindow.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QDate>
#include "connection.h"

#include <QSqlQueryModel>
#include <QStandardItemModel>

#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include "ui_mainwindow.h"

#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QChart>
#include <QtCharts/QBarCategoryAxis>
#include <QSqlQuery>
#include <QPropertyAnimation>
#include <QEasingCurve>








Machine::Machine() {}

Machine::Machine(int id_machine, const QString& type_m, const QString& statut_m, const QDate& date_maintenance, const QString& localisation)
{
    this->id_machine=id_machine;
    this->type_m=type_m;
    this->statut_m=statut_m;
    this->date_maintenance=date_maintenance;
    this->localisation=localisation;
}


///////////////////////////////getters setters
int Machine::getIdMachine() const {
    return id_machine;
}

void Machine::setIdMachine(int id) {
    id_machine = id;
}

QString Machine::getTypeM() const {
    return type_m;
}

void Machine::setTypeM(const QString &type) {
    type_m = type;
}

QString Machine::getStatutM() const {
    return statut_m;
}

void Machine::setStatutM(const QString &statut) {
    statut_m = statut;
}

QDate Machine::getDateMaintenance() const {
    return date_maintenance;
}

void Machine::setDateMaintenance(const QDate &date) {
    date_maintenance = date;
}

QString Machine::getLocalisation() const {
    return localisation;
}

void Machine::setLocalisation(const QString &loc) {
    localisation = loc;
}

///////////////////////////////////////////////



bool Machine::ajouter() {

        QSqlQuery query;
        query.prepare("INSERT INTO MACHINE (id_machine, type_m, statut_m, date_maintenance, localisation) "
                      "VALUES (:id_machine, :type_m, :statut_m, :date_maintenance, :localisation)");
        query.bindValue(":id_machine", id_machine);
        query.bindValue(":type_m", type_m);
        query.bindValue(":statut_m", statut_m);
        query.bindValue(":date_maintenance", date_maintenance);
        query.bindValue(":localisation", localisation);

        // Exécution de la requête et gestion des erreurs
        if (query.exec()) {
            qDebug() << "Machine ajoutée avec succès !";
            return true;
        } else {
            qDebug() << "Erreur lors de l'ajout de la machine :" << query.lastError().text();
            return false;
        }  
}

QStandardItemModel* Machine::afficher()
{
    QStandardItemModel* model = new QStandardItemModel();

    // Configuration des en-têtes
    model->setColumnCount(6); // Une colonne supplémentaire pour les cases à cocher
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Sélection"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Machine"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type Machine"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Statut Machine"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date de Maintenance"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Localisation"));

    // Récupération des données de la base de données
    QSqlQuery query("SELECT id_machine, type_m, statut_m, date_maintenance, localisation FROM MACHINE");
    int row = 0;

    // Ajout des lignes avec cases à cocher et format de date sans heure
    while (query.next()) {
        QStandardItem* checkItem = new QStandardItem();
        checkItem->setCheckable(true); // Rend l'élément cochable
        model->setItem(row, 0, checkItem);

        model->setItem(row, 1, new QStandardItem(query.value(0).toString())); // ID Machine
        model->setItem(row, 2, new QStandardItem(query.value(1).toString())); // Type Machine
        model->setItem(row, 3, new QStandardItem(query.value(2).toString())); // Statut Machine

        // Conversion et formatage de la date sans heure
        QDate dateMaintenance = query.value(3).toDate(); // Récupère la date sans heure
        QString formattedDate = dateMaintenance.toString("yyyy-MM-dd"); // Formatte la date
        model->setItem(row, 4, new QStandardItem(formattedDate)); // Date de Maintenance formatée

        model->setItem(row, 5, new QStandardItem(query.value(4).toString())); // Localisation
        row++;
    }

    return model;
}

bool Machine::supprimerMachine(int id_machine) {
    QSqlQuery query;
    query.prepare("DELETE FROM MACHINE WHERE id_machine = :id_machine");
    query.bindValue(":id_machine", id_machine);

    if (query.exec()) {
        return true; // Suppression réussie
    } else {
        qDebug() << "Erreur de suppression :" << query.lastError().text();
        return false; // Échec de la suppression
    }
}


bool Machine::updateInDatabase()
{
    // Créer la requête SQL pour mettre à jour les données dans la base
    QSqlQuery query;
    query.prepare("UPDATE MACHINE SET TYPE_M = :type, STATUT_M = :statut, DATE_MAINTENANCE = :date, LOCALISATION = :localisation WHERE ID_MACHINE = :id");

    // Lier les paramètres
    query.bindValue(":type", type_m);
    query.bindValue(":statut", statut_m);
    query.bindValue(":date", date_maintenance);
    query.bindValue(":localisation", localisation);
    query.bindValue(":id", id_machine);

    // Exécuter la requête
    if (query.exec()) {
        return true;  // Mise à jour réussie
    } else {
        qDebug() << "Erreur lors de la mise à jour : " << query.lastError().text();
        return false;  // Erreur lors de la mise à jour
    }
}
/////////////
