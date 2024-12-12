//#ifndef MAINWINDOW_H
//#define MAINWINDOW_H
#include <QSequentialAnimationGroup>
#include <QMainWindow>
#include <QStackedWidget> // Assurez-vous que cet en-tête est inclus
#include <QWidget>
#include "employes.h"
#include "utilisateur.h"
#include <QString> // Ajouté pour QString
#include <QtCharts/QChartView>
#include <QPixmap>
#include <QImage>
#include <vector>
#include<QtCore>
#include<QtGui>
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
#include <fstream>
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
    void showPage4();
    void showForgotPassword();
    void showPagecentral();
    void showEmployes();
    void showVehicules();
    void showMachines();
    void showTrensactions();
    void showApropos();
    void animateWidgetAppearance(QWidget* widget);
    void startBlinkingEffect(QWidget* widget);
    void on_statButton1_clicked();
    void on_confirmerEmployes_clicked();
    void on_supprimerEmployes_clicked();
    void on_modifierEmployes_clicked();
    void on_saveEmploye_clicked();
    void on_filter_currentTextChanged(const QString& selectedType);
    void on_ButtonCreer_clicked();
    bool on_ButtonConnecter_clicked();
    void showPieChart(int disponibleCount, int occupeCount);
    void showBarChart(double avgSalary, double minSalary, double maxSalary);
    void on_exportButton_clicked();
    void exportChartToImage(QChartView *chartView, const QString &filename);
    void exportEmployeeListToCSV();
    void on_send_clicked();
    void on_save_u_clicked();
    void on_supp_u_clicked();
    void on_addimage1_clicked();
    void on_addimage2_clicked();
    //void on_ButtonConnecterF_clicked();
    QString getPasswordFromDatabase(const QString& phoneNumber);
    void sendSms(const QString& toPhoneNumber, const QString& message);
    void on_rechercherr_textChanged(const QString& searchText);
    void on_demande_clicked();

    // machine



private:
    Ui::MainWindow *ui;
    employes E;
    utilisateur U;
    QChartView *chartView1; // Declare chartView1
    QChartView *chartView2;
    QString selectedImagePath1;
    QString selectedImagePath2;




};

//#endif // MAINWINDOW_H
