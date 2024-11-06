#ifndef EMPLOYES_H
#define EMPLOYES_H
#include <QObject>
#include <QString>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QDate>
#include <QList>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QTableView>
#include <QSqlError>
#include <QDebug>
class employes {

public:
    employes();
    employes(int cin_e, const QString& salaire_e, const QString& special_e, const QString& etat_e);
    int getCIN() const;
    void setCIN(int cin);
    QString getSalaire_e() const;
    void setSalaire_e(const QString &salaire);
    QString getSpecial_e() const;
    void setSpecial_e(const QString &special);
    QString getEtat_e() const;
    void setEtat_e(const QString &etat);


    bool ajouterE();
    QSqlQueryModel* afficherE();
    bool modifierE(int cin_e);
    bool supprimerE(int cin_e);


private:
    int cin_e;
    QString salaire_e;
    QString special_e;
    QString etat_e;
};


#endif // EMPLOYES_H
