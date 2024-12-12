#include "connection.h"
#include <QMessageBox>


Connection::Connection()
{}

bool Connection::createconnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("source2a34"); // Insérer le nom de la source de données
    db.setUserName("projetcpp2a34");            // Insérer le nom de l'utilisateur
    db.setPassword("mp2a34");            // Insérer le mot de passe de cet utilisateur

    if (db.open()) {
        qDebug() << "Connexion réussie !" << db.lastError().text();
        return true; // Connexion réussie
    }

    qDebug() << "Erreur: La connexion a échoué -" << db.lastError().text();
    return false; // Connexion échouée
}
