#include "employes.h"
#include <QSqlQuery>
#include <QStyledItemDelegate>
#include <QVariant>
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
#include <QRegularExpression>
#include <QString>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChart>
#include <QVBoxLayout>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QValueAxis>
#include <QtCharts/QBarCategoryAxis>
//QT_CHARTS_USE_NAMESPACE

//using namespace QtCharts;

employes::employes() {}

employes::employes(int cin_e, const QString& special_e, const double& salaire_e, const QString& etat_e)
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

double employes::getSalaire_e() const {
    return salaire_e;
}

void employes::setSalaire_e(const double &salaire) {
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
    if (QString::number(cin_e).length()!=8){
        qDebug()<< "Cin doit etre 8 chiffres !";
            return false;
    }
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

QSqlQueryModel* employes::afficherE()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    // Set the query to fetch all employees
    model->setQuery("SELECT * FROM employes");

    // Check for errors in query execution
    if (model->lastError().isValid()) {
        qDebug() << "Error executing query:" << model->lastError();
        return nullptr;  // Return null if the query failed
    }

    // Set the column headers for better display in the table view
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin_e"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("special_e"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("salaire_e"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("etat_e"));

    return model;  // Return the populated model
}



bool employes::modifierE(int cin_e) {
    Connection conn;
    if (conn.createconnection()) {
        QSqlQuery query;
        query.prepare("UPDATE Employes SET special_e = :special_e, salaire_e = :salaire_e, etat_e = :etat_e WHERE cin_e = :cin_e");
        query.bindValue(":cin_e", cin_e);
        query.bindValue(":special_e", special_e);
        query.bindValue(":salaire_e", salaire_e);
        query.bindValue(":etat_e", etat_e);

        if (query.exec()) {
            qDebug() << "Employee updated successfully!";
            return true;
        } else {
            qDebug() << "Error updating employee:" << query.lastError().text();
        }
    } else {
        qDebug() << "Database connection error.";
    }
    return false;
}



bool employes::employeExiste(int cin) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM Employes WHERE CIN_E = :cin");
    query.bindValue(":cin", cin); // Use the function parameter cin here

    if (query.exec()) {
        if (query.next()) {
            int count = query.value(0).toInt();
            return count > 0; // If count is greater than 0, the CIN exists
        }
    } else {
        // Optional: Handle any potential query execution errors
        qDebug() << "Database query error: " << query.lastError().text();
    }
    return false; // CIN does not exist
}
// In employes class
QSqlQueryModel* employes::filtrerEmployes(const QString& type) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QString queryStr;

    if (type == "Salaire") {
        queryStr = "SELECT * FROM employes ORDER BY salaire_e DESC";
    }else if (type == "Disponibilité") {
        queryStr = "SELECT * FROM employes ORDER BY DECODE(etat_e, 'Disponible', 0, 1), etat_e";
    }else if(type == "Spécialité"){
        queryStr = "SELECT * FROM employes ORDER BY DECODE(special_e, 'Ingenieur', 0, 1), special_e";
    }
    else {
        queryStr = "SELECT * FROM employes";
    }

    qDebug() << "Executing query:" << queryStr;  // Debug output
    model->setQuery(queryStr);

    // Check if the query execution was successful
    if (model->lastError().isValid()) {
        qDebug() << "Error in query:" << model->lastError().text();
    }

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Specialité"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Salaire"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("État"));

    return model;
}

