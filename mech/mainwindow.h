#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QSequentialAnimationGroup>
#include <QMainWindow>
#include <QStackedWidget> // Assurez-vous que cet en-tête est inclus
#include <QWidget>
#include <QString> // Ajouté pour QString
#include <QSortFilterProxyModel>
#include <QPushButton>
#include <QPropertyAnimation>  // Ajoutez cette ligne
#include <QEvent>
#include <QSize>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QChart>
#include <QtCharts/QBarCategoryAxis>
#include <QSqlQuery>
#include <QPropertyAnimation>
#include <QEasingCurve>
#include <QGeoCoordinate>  // Inclure QGeoCoordinate
#include <QMap>  // Exemple d'utilisation d'autres types Qt
#include <QQuickWidget>  // Ajoutez cette ligne pour utiliser QQuickWidget
#include <QCalendarWidget>

#include <QtDataVisualization/Q3DBars>
#include <QtDataVisualization/QBar3DSeries>
#include <QtDataVisualization/QBarDataProxy>
#include <QtDataVisualization/QCategory3DAxis>
#include <QtDataVisualization/QValue3DAxis>
#include <QtDataVisualization/Q3DTheme>
#include <QtDataVisualization/Q3DCamera>
#include <QSqlQuery>
#include <QSqlError>
#include <QStringList>
#include <QDebug>

#include <QDialog>
#include <QLabel>
#include <QDate>
#include <QSqlQuery>
#include <QVariant>
#include <QVBoxLayout>
#include <QMessageBox>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void showMachineDataDialog(const QList<QVariant>& machineData);

protected:
    bool eventFilter(QObject *watched, QEvent *event) override;


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
    //void setupSlidingAnimation(QWidget* widget);

    void on_confirmerMachine_clicked();
    void setupTable();
    void on_supprimerMachine_clicked();
    void checkAllRows();
    void on_modifierButton_clicked();
    void sortTable(int index);
    void on_searchLineEdit_textChanged(const QString &text);
    void loadDataFromDatabase();
    void exportToPDF();
    void updateImage(int index);
    void on_stat_clicked();
    void on_donneesBtn_clicked();
    void on_ajoutcentreBtn_clicked();
    void initMap();
    void on_calendrierBtn_clicked();
    void markMaintenanceDates(QCalendarWidget* calendar);
    void setupCalendar();
    void refreshCalendar(QCalendarWidget* calendar, const QList<QDate>& maintenanceDates);
     void onDateSelected();

private:
    Ui::MainWindow *ui;
    QSortFilterProxyModel *searchProxyModel;
    QPropertyAnimation *iconAnimation;
    QPropertyAnimation *textAnimation;

    // Déclaration des animations pour chaque bouton
    QPropertyAnimation *iconAnimation_ajoutcentre;
    QPropertyAnimation *textAnimation_ajoutcentre;

    QPropertyAnimation *iconAnimation_tableau;
    QPropertyAnimation *textAnimation_tableau;

    QPropertyAnimation *iconAnimation_stat;
    QPropertyAnimation *textAnimation_stat;

    QPropertyAnimation *iconAnimation_export;
    QPropertyAnimation *textAnimation_export;

    QPropertyAnimation *iconAnimation_donnees;
    QPropertyAnimation *textAnimation_donnees;

    QPropertyAnimation *iconAnimation_calendrier;
    QPropertyAnimation *textAnimation_calendrier;

    void setupButtons();
    QQuickWidget *mapWidget;
    void initializeMap();
    // Méthode pour récupérer les données de la machine pour une date spécifique
    QList<QDate> getMaintenanceDates(); // Obtenir les dates de maintenance depuis la base de données
    QList<QVariant> getMachineDataForDate(const QDate& date); // Obtenir les données de la machine pour une date spécifique




};

#endif // MAINWINDOW_H
