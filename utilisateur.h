#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include "connection.h"
#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QSqlDatabase>
#include <QDate>
#include <QList>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QTableView>
#include <QSqlError>
#include <QDebug>
class utilisateur
{
public:
    utilisateur();
    utilisateur(int cin_u, const QString& firstname_u, const QString& lastname_u,const double& phonenumber_u,const QString& mdp_u,const QString& email_u,const QString& rolee_u,const QString& image_path,const QByteArray& image_data);
    int getCIN() const ;
    void setCIN(int id) ;

    QString getFirstName() const ;
    void setFirstName(const QString &firstName) ;

    QString getLastName() const ;
    void setLastName(const QString &lastName) ;

    double getPhoneNumber() const ;
    void setPhoneNumber(const double &phoneNumber) ;

    QString getMdp() const;
    void setMdp(const QString &mdp) ;

    QString getEmail() const ;
    void setEmail(const QString &email) ;

    QString getRolee() const ;
    void setRolee(const QString &rolee) ;

    QString getImagepath() const ;
    void setImagepath(const QString &imagepath) ;

    QByteArray getImagedata() const ;
    void setImagedata(const QByteArray &imagedata) ;


    bool ajouterUser();
    bool connectionUser(int cin,QString mdp);
    bool utilisateurExiste(int cin);
    bool modifierU(int cin_u);
    bool supprimerU(int cin_u);

private:
    int cin_u;
    QString firstname_u;
    QString lastname_u;
    double phonenumber_u;
    QString mdp_u;
    QString email_u;
    QString rolee_u;
    QString image_path;
    QByteArray image_data;
};

#endif // UTILISATEUR_H
