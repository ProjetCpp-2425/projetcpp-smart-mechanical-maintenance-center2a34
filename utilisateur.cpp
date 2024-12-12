#include "utilisateur.h"
#include <QSqlQuery>
#include <QVariant>
#include <QSqlError>
#include <QMessageBox>
#include "connection.h"
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QTableView>
#include <QDebug>
#include "ui_mainwindow.h"
#include <QRegularExpression>
#include <QString>

utilisateur::utilisateur() {}

utilisateur::utilisateur(int cin_u, const QString& firstname_u, const QString& lastname_u,const double& phonenumber_u,const QString& mdp_u,const QString& email_u,const QString& rolee_u,const QString& image_path,const QByteArray& image_data )//,const QByteArray& image_data
{
    this->cin_u=cin_u;
    this->firstname_u=firstname_u;
    this->lastname_u=lastname_u;
    this->phonenumber_u=phonenumber_u;
    this->mdp_u=mdp_u;
    this->email_u=email_u;
    this->rolee_u=rolee_u;
    this->image_path=image_path;
    this->image_data=image_data;
}


///////////////////////////////getters setters
int utilisateur::getCIN() const {
    return cin_u;
}

void utilisateur::setCIN(int cin) {
    cin_u = cin;
}

QString utilisateur::getFirstName() const {
    return firstname_u;
}

void utilisateur::setFirstName(const QString &firstname) {
    firstname_u = firstname;
}

// Getter and Setter for LastName
QString utilisateur::getLastName() const {
    return lastname_u;
}

void utilisateur::setLastName(const QString &lastname) {
    lastname_u = lastname;
}

// Getter and Setter for PhoneNumber
double utilisateur::getPhoneNumber() const {
    return phonenumber_u;
}

void utilisateur::setPhoneNumber(const double &phonenumber) {
    phonenumber_u = phonenumber;
}

// Getter and Setter for Mdp (Password)
QString utilisateur::getMdp() const {
    return mdp_u;
}

void utilisateur::setMdp(const QString &mdp) {
    mdp_u = mdp;
}

// Getter and Setter for Email
QString utilisateur::getEmail() const {
    return email_u;
}

void utilisateur::setEmail(const QString &email) {
    email_u = email;
}

// Getter and Setter for Rolee
QString utilisateur::getRolee() const {
    return rolee_u;
}

void utilisateur::setRolee(const QString &rolee) {
    rolee_u = rolee;
}
QString utilisateur::getImagepath() const {
    return image_path;
}

void utilisateur::setImagepath(const QString &imagepath) {
    image_path = imagepath;
}
QByteArray utilisateur::getImagedata() const {
    return image_data;
}

void utilisateur::setImagedata(const QByteArray &imagedata) {
    image_data = imagedata;
}

bool utilisateur::ajouterUser() {
    // Validate that the CIN is exactly 8 digits
    if (QString::number(cin_u).length() != 8) {
        qDebug() << "CIN doit être 8 chiffres !";
        return false;
    }

    // Create a connection to the database
    Connection conn;
    if (conn.createconnection()) {
        QSqlQuery query;
        query.prepare("INSERT INTO utilisateur (cin_u, firstname_u, lastname_u, phonenumber_u, mdp_u, email_u, rolee_u, image_path, image_data) "
                      "VALUES (:cin_u, :firstname_u, :lastname_u, :phonenumber_u, :mdp_u, :email_u, :rolee_u, :image_path, :image_data)");

        // Bind the values to the query
        query.bindValue(":cin_u", cin_u);
        query.bindValue(":firstname_u", firstname_u);
        query.bindValue(":lastname_u", lastname_u);
        query.bindValue(":phonenumber_u", phonenumber_u);
        query.bindValue(":mdp_u", mdp_u);
        query.bindValue(":email_u", email_u);
        query.bindValue(":rolee_u", rolee_u);
        query.bindValue(":image_path", image_path);  // Store the image path
        query.bindValue(":image_data", image_data);  // Store the image data as binary

        // Execute the query and handle errors
        if (query.exec()) {
            qDebug() << "Utilisateur ajouté avec succès !";
            return true;
        } else {
            qDebug() << "Erreur lors de l'ajout de l'utilisateur :" << query.lastError().text();
        }
    } else {
        qDebug() << "Erreur de connexion à la base de données.";
    }

    return false;
}

bool utilisateur::connectionUser(int cin, QString mdp) {
    Connection conn;  // Make sure the connection is created properly

    // Check if connection is successful
    if (conn.createconnection()) {
        QSqlQuery query;

        // Query to check if the CIN and password match
        query.prepare("SELECT CIN_U FROM utilisateur WHERE CIN_U = :cin AND mdp_u = :mdp");
        query.bindValue(":cin", cin);
        query.bindValue(":mdp", mdp);

        // Execute the query
        if (query.exec()) {
            if (query.next()) {  // If a row is found, the login is successful
                qDebug() << "Connexion réussie!";
                return true;
            } else {
                qDebug() << "Échec de la connexion : CIN ou mot de passe incorrect.";
                return false;
            }
        } else {
            qDebug() << "Erreur de la requête de connexion :" << query.lastError().text();
        }
    } else {
        qDebug() << "Erreur de connexion à la base de données.";
    }

    return false;
}

bool utilisateur::utilisateurExiste(int cin) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM utilisateur WHERE CIN_U = :cin");
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
bool utilisateur::modifierU(int cin_u) {
    Connection conn;
    if (conn.createconnection()) {
        QSqlQuery query;
        query.prepare("UPDATE utilisateur SET firstname_u= :firstname_u, lastname_u= :lastname_u, phonenumber_u= :phonenumber_u,mdp_u= :mdp_u,email_u= :email_u,rolee_u= :rolee_u,image_path= :image_path,image_data= :image_data WHERE cin_u = :cin_u");
        query.bindValue(":cin_u", cin_u);
        query.bindValue(":firstname_u", firstname_u);
        query.bindValue(":lastname_u", lastname_u);
        query.bindValue(":phonenumber_u",phonenumber_u);
        query.bindValue(":mdp_u", mdp_u);
        query.bindValue(":email_u", email_u);
        query.bindValue(":rolee_u", rolee_u);
        query.bindValue(":image_path", image_path);
        query.bindValue(":image_data", image_data);


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

bool utilisateur::supprimerU(int cin_u){



    QSqlQuery query;
    query.prepare("DELETE FROM utilisateur WHERE CIN_U = :cin_u");
    query.bindValue(":cin_u",cin_u);
    if (!query.exec()) {
        qDebug() << "Erreur lors de la suppression de l'employé :" << query.lastError().text();
        return false;
    }


}
