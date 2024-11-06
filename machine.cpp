#include "machine.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QDate>
#include "connection.h"
#include <QSqlDatabase>



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
    Connection conn;
    if (conn.createconnection()) {
        QSqlQuery query;
        query.prepare("INSERT INTO MACHINE (id_machine, type_m, statut_m, date_maintenance, localisation) "
                      "VALUES (:id_machine, :type_m, :statut_m, :date_maintenance, :localisation)");

        query.bindValue(":id_machine", id_machine);
        query.bindValue(":type_m", type_m);
        query.bindValue(":statut_m", statut_m);

        // Créer QDateTime à partir de QDate
        QDateTime dateTime(date_maintenance, QTime(0, 0)); // Ajoutez une heure à la date
        query.bindValue(":date_maintenance", dateTime); // Utiliser QDateTime directement

        query.bindValue(":localisation", localisation);

        // Exécution de la requête et gestion des erreurs
        if (query.exec()) {
            qDebug() << "Machine ajoutée avec succès !";
            return true;
        } else {
            qDebug() << "Erreur lors de l'ajout de la machine :" << query.lastError().text();
        }
    } else {
        qDebug() << "Erreur de connexion à la base de données.";
    }

    return false;
}





