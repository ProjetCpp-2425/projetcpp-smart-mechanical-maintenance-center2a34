#ifndef MACHINE_H
#define MACHINE_H

#include <QObject>
#include <QString>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QDate>
#include <QList>

class Machine {

public:
    Machine();
    Machine(int id, const QString& type, const QString& statut, const QDate& dateMaintenance, const QString& localisation);

    int getIdMachine() const;
    void setIdMachine(int id);
    QString getTypeM() const;
    void setTypeM(const QString &type);
    QString getStatutM() const;
    void setStatutM(const QString &statut);
    QDate getDateMaintenance() const;
    void setDateMaintenance(const QDate &date);
    QString getLocalisation() const;
    void setLocalisation(const QString &localisation);

    bool ajouter();
    bool afficher();
    bool modifier();
    bool supprimer(int id);


private:
    int id_machine;
    QString type_m;
    QString statut_m;
    QDate date_maintenance;
    QString localisation;
};

#endif // MACHINE_H
