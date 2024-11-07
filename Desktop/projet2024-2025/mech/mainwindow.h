#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QSequentialAnimationGroup>
#include <QMainWindow>
#include <QStackedWidget> // Assurez-vous que cet en-tête est inclus
#include <QWidget>
#include <QString> // Ajouté pour QString
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void showPage2();
    void showPage3();
    void showPagecentral();
    void showEmployes();
    void showVehicules();
    void showMachines();
    void showTrensactions();
    void showApropos();
    void animateWidgetAppearance(QWidget* widget);
    void startBlinkingEffect(QWidget* widget);
    void on_stat1Button_clicked();
    void on_confirmerMachine_clicked();
    void setupTable();
    void on_supprimerMachine_clicked();
    void checkAllRows();
    void on_modifierButton_clicked();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
