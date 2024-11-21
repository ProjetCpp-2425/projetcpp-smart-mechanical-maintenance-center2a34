#ifndef MODIFIERMACHINE_H
#define MODIFIERMACHINE_H

#include <QDialog>
#include <QStringList>
#include "connection.h" // Inclure la classe Connection pour accéder à la base de données

namespace Ui {
class modifiermachine;
}

class modifiermachine : public QDialog
{
    Q_OBJECT

public:
    explicit modifiermachine(QWidget *parent = nullptr);
    ~modifiermachine();

    void setDetails(const QStringList &details);
    QStringList getDetails() const;

private slots:
    void on_confirmerButton_clicked();
    void on_annulerButton_clicked();

private:
    Ui::modifiermachine *ui;
    QStringList currentDetails;  // Stocke les détails actuels de la machine
    Connection dbConnection;     // Instance pour la connexion à la base de données
};

#endif // MODIFIERMACHINE_H
