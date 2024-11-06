#include "employes.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include "connection.h"
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QTableView>
#include <QSqlError>
#include <QDebug>
#include "ui_mainwindow.h"
employes::employes() {}

employes::employes(int cin_e, const QString& special_e, const QString& salaire_e, const QString& etat_e)
{
    this->cin_e=cin_e;
    this->salaire_e=salaire_e;
    this->special_e=special_e;
    this->etat_e=etat_e;
}


///////////////////////////////getters setters
int employes::getCIN() const {
    return cin_e;
}

void employes::setCIN(int cin) {
    cin_e = cin;
}

QString employes::getSalaire_e() const {
    return salaire_e;
}

void employes::setSalaire_e(const QString &salaire) {
    salaire_e = salaire;
}

QString employes::getSpecial_e() const {
    return special_e;
}

void employes::setSpecial_e(const QString &special) {
    special_e = special;
}

QString employes::getEtat_e() const {
    return etat_e;
}

void employes::setEtat_e(const QString &etat) {
    etat_e = etat;
}

///////////////////////////////////////////////



bool employes::ajouterE() {
    Connection conn;
    if (conn.createconnection()) {
         QSqlQuery query;
         query.prepare("INSERT INTO EMPLOYES (cin_e, special_e, salaire_e, etat_e) "
                  "VALUES (:cin_e, :special_e, :salaire_e, :etat_e)");

         query.bindValue(":cin_e", cin_e);
         query.bindValue(":special_e", special_e);
         query.bindValue(":salaire_e", salaire_e);
         query.bindValue(":etat_e", etat_e);

    // Exécution de la requête et gestion des erreurs
         if (query.exec()) {
             qDebug() << "employe ajoutée avec succès !";
             return true;
         } else {
             qDebug() << "Erreur lors de l'ajout de l'employe :" << query.lastError().text();
             }
    } else {
        qDebug() << "Erreur de connexion à la base de données.";
    }

    return false;


}

bool employes::supprimerE(int cin_e){



        QSqlQuery query;
        query.prepare("DELETE FROM employes WHERE CIN_E = :cin_e");
        query.bindValue(":cin_e",cin_e);
        if (!query.exec()) {
            qDebug() << "Erreur lors de la suppression de l'employé :" << query.lastError().text();
            return false;
        }


}

QSqlQueryModel * employes::afficherE()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from employes");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cin_e"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("salaire_e"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("special_e"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("etat_e"));
    return model;
}


bool employes::modifierE(int cin_e) {
    Connection conn;
    if (conn.createconnection()) {
        QSqlQuery query;

    // Prepare the SQL update statement
        query.prepare("UPDATE EMPLOYES SET special_e = :special_e, salaire_e = :salaire_e, etat_e = :etat_e WHERE cin_e = :cin_e");

    // Bind values to the query parameters
        query.bindValue(":cin_e", cin_e);
        query.bindValue(":special_e", special_e);
        query.bindValue(":salaire_e", salaire_e);
        query.bindValue(":etat_e", etat_e);

    // Execute the query and check for success
        if (query.exec()) {
            qDebug() << "employe ajoutée avec succès !";
            return true;
        } else {
            qDebug() << "Erreur lors de l'ajout de l'employe :" << query.lastError().text();
        }
    } else {
        qDebug() << "Erreur de connexion à la base de données.";
    }

return false;
}

