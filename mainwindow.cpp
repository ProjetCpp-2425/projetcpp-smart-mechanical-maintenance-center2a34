#include "mainwindow.h"
#include <QPixmap>
#include <QLabel>
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include <QDate>
#include <QGraphicsBlurEffect>
#include <QPropertyAnimation>
#include "ui_mainwindow.h"
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QParallelAnimationGroup>
#include <QPalette>
#include <QDesktopServices>
#include <QUrl>
#include <QFileDialog>
#include <QImage>
#include <QBuffer>
#include <QByteArray>
#include <QInputDialog>
#include <QTcpSocket>
#include <QSslSocket>
#include <QtCore/QBuffer>
#include <QtCore/QByteArray>
#include <QTextStream>
#include <QPainter>


#include "employes.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include "connection.h"
#include <QFileDialog>
#include <QtNetwork>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QTableView>
#include <QAxObject>
#include <QFileDialog>
#include <QPixmap>
#include <QRegularExpression>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChart>
#include <QVBoxLayout>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QValueAxis>
#include <QtCharts/QBarCategoryAxis>
#include <QFileDialog>
#include <QMessageBox>
#include <iostream>
#include <QImage>
#include <vector>
#include <QMessageBox>
#include <QTimer>
#include <QImage>
#include <QLabel>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QFileDialog>
#include <QTableView> // Assume this is where the employee data is displayed
#include <QPixmap> // For capturing chart images
#include <QChartView>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QUrl>
#include <QUrlQuery>
#include <QByteArray>
#include <QDebug>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QParallelAnimationGroup>
#include <QResizeEvent>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QTableWidget>
#include <QSortFilterProxyModel>
#include <QPalette>
#include <QPushButton>
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>
#include <QPixmap>
#include <QPageSize>
#include <QPainter>
#include <QPdfWriter>
#include <QHoverEvent>
#include <QEvent>
#include <QHBoxLayout>
#include <QEasingCurve>
#include <QList>

// QtCharts includes
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

// Custom includes

#include "connection.h"

#include "qchart.h"


#include <QQuickWidget>
#include <QVBoxLayout>

#include <QCalendarWidget>
#include <QVBoxLayout>
#include <QStackedWidget>
#include <QPushButton>

#include <QCalendarWidget>
#include <QTextCharFormat>
#include <QBrush>


#include <QBarSet>
#include <QBarSeries>
#include <QBarCategoryAxis>
#include <QValueAxis>
#include <QChart>
#include <QChartView>
#include <QPropertyAnimation>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

#include <QtDataVisualization/Q3DBars>
#include <QtDataVisualization/QBar3DSeries>
#include <QtDataVisualization/QCategory3DAxis>
#include <QtDataVisualization/QValue3DAxis>
#include <QtDataVisualization/Q3DCamera>
#include <QtDataVisualization/QBarDataProxy>
#include <QtDataVisualization/QBarDataRow>
#include <QLoggingCategory>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Pour mettre la fenêtre en plein écran
    //this->showFullScreen();

    Connection c;
    c.createconnection();
    connect(ui->filter, SIGNAL(currentTextChanged(QString)), this, SLOT(on_filter_currentTextChanged(QString)));
    connect(ui->rechercherr, &QLineEdit::textChanged, this, &MainWindow::on_rechercherr_textChanged);

    ui->tableEmployes->setModel(E.afficherE());

    chartView1 = new QChartView();
    chartView1->setRenderHint(QPainter::Antialiasing);

    chartView2 = new QChartView();
    chartView2->setRenderHint(QPainter::Antialiasing);


    // Affichez la page par défaut
    ui->stackedWidget->setCurrentWidget(ui->page1);
    animateWidgetAppearance(ui->page1);


    // Connecter les boutons aux pages du QStackedWidget

    //connect(ui->ButtonConnecter, &QPushButton::clicked, this, &MainWindow::showEmployes);


    connect(ui->buttonPage2, &QPushButton::clicked, this, &MainWindow::showPage2);
    connect(ui->sinscrir, &QPushButton::clicked, this, &MainWindow::showPage3);
    connect(ui->seconnecter, &QPushButton::clicked, this, &MainWindow::showPage2);
    connect(ui->mdp_oublie, &QPushButton::clicked, this, &MainWindow::showForgotPassword);
    connect(ui->Retour, &QPushButton::clicked, this, &MainWindow::showPage2);
    connect(ui->sedeconnecter, &QPushButton::clicked, this, &MainWindow::showPage2);
    connect(ui->parametre, &QPushButton::clicked, this, &MainWindow::showPage4);
    connect(ui->retour_u, &QPushButton::clicked, this, &MainWindow::showPagecentral);

    connect(ui->ButtonPage, &QPushButton::clicked, this, &MainWindow::showPagecentral);
    connect(ui->ButtonEmployes, &QPushButton::clicked, this, &MainWindow::showEmployes);
    ui->tableEmployes->setModel(E.afficherE());
    connect(ui->ButtonVehicules, &QPushButton::clicked, this, &MainWindow::showVehicules);
    connect(ui->ButtonMachines, &QPushButton::clicked, this, &MainWindow::showMachines);
    connect(ui->ButtonTrensactions, &QPushButton::clicked, this, &MainWindow::showTrensactions);
    connect(ui->ButtonApropos, &QPushButton::clicked, this, &MainWindow::showApropos);

    connect(ui->ButtonPage1, &QPushButton::clicked, this, &MainWindow::showPagecentral);
    connect(ui->ButtonEmployes1, &QPushButton::clicked, this, &MainWindow::showEmployes);
    connect(ui->ButtonVehicules1, &QPushButton::clicked, this, &MainWindow::showVehicules);
    connect(ui->ButtonMachines1, &QPushButton::clicked, this, &MainWindow::showMachines);
    connect(ui->ButtonTrensactions1, &QPushButton::clicked, this, &MainWindow::showTrensactions);
    connect(ui->ButtonApropos1, &QPushButton::clicked, this, &MainWindow::showApropos);

    connect(ui->ButtonPage2, &QPushButton::clicked, this, &MainWindow::showPagecentral);
    connect(ui->ButtonEmployes2, &QPushButton::clicked, this, &MainWindow::showEmployes);
    connect(ui->ButtonVehicules2, &QPushButton::clicked, this, &MainWindow::showVehicules);
    connect(ui->ButtonMachines2, &QPushButton::clicked, this, &MainWindow::showMachines);
    connect(ui->ButtonTrensactions2, &QPushButton::clicked, this, &MainWindow::showTrensactions);
    connect(ui->ButtonApropos2, &QPushButton::clicked, this, &MainWindow::showApropos);

    connect(ui->ButtonPage3, &QPushButton::clicked, this, &MainWindow::showPagecentral);
    connect(ui->ButtonEmployes3, &QPushButton::clicked, this, &MainWindow::showEmployes);
    connect(ui->ButtonVehicules3, &QPushButton::clicked, this, &MainWindow::showVehicules);
    connect(ui->ButtonMachines3, &QPushButton::clicked, this, &MainWindow::showMachines);
    connect(ui->ButtonTrensactions3, &QPushButton::clicked, this, &MainWindow::showTrensactions);
    connect(ui->ButtonApropos3, &QPushButton::clicked, this, &MainWindow::showApropos);

    connect(ui->ButtonPage4, &QPushButton::clicked, this, &MainWindow::showPagecentral);
    connect(ui->ButtonEmployes4, &QPushButton::clicked, this, &MainWindow::showEmployes);
    connect(ui->ButtonVehicules4, &QPushButton::clicked, this, &MainWindow::showVehicules);
    connect(ui->ButtonMachines4, &QPushButton::clicked, this, &MainWindow::showMachines);
    connect(ui->ButtonTrensactions4, &QPushButton::clicked, this, &MainWindow::showTrensactions);
    connect(ui->ButtonApropos4, &QPushButton::clicked, this, &MainWindow::showApropos);

    connect(ui->ButtonPage5, &QPushButton::clicked, this, &MainWindow::showPagecentral);
    connect(ui->ButtonEmployes5, &QPushButton::clicked, this, &MainWindow::showEmployes);
    connect(ui->ButtonVehicules5, &QPushButton::clicked, this, &MainWindow::showVehicules);
    connect(ui->ButtonMachines5, &QPushButton::clicked, this, &MainWindow::showMachines);
    connect(ui->ButtonTrensactions5, &QPushButton::clicked, this, &MainWindow::showTrensactions);
    connect(ui->ButtonApropos5, &QPushButton::clicked, this, &MainWindow::showApropos);

    connect(ui->stat1Button, &QPushButton::clicked, this, &MainWindow::on_statButton1_clicked);//hathi t3 l'employe
    connect(ui->stat2, &QPushButton::clicked, this, &MainWindow::on_statButton1_clicked);
    connect(ui->stat, &QPushButton::clicked, this, &MainWindow::on_statButton1_clicked);
    connect(ui->stat4, &QPushButton::clicked, this, &MainWindow::on_statButton1_clicked);


/*


    // Connexion du QLineEdit au filtre
    connect(ui->searchLineEdit, &QLineEdit::textChanged, this, &MainWindow::on_searchLineEdit_textChanged);
    connect(ui->exportButton, &QPushButton::clicked, this, &MainWindow::exportToPDF);

    // Connecter le signal de changement d'index à une nouvelle méthode dans votre constructeur
    connect(ui->type_m, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::updateImage);
    connect(ui->stat, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->stat);
    });
    connect(ui->donneesBtn, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->donnees);
    });
    ui->ajoutcentreBtn->setIcon(QIcon("C:/Users/21658/Desktop/projet2024-2025/mech/ajoutcentreIcon.png"));
    ui->ajoutcentreBtn->setIconSize(QSize(30, 30));  // Définir la taille de l'icône
    ui->ajoutcentreBtn->setToolTip("Ajout d'un centre");


    ui->stat->setIcon(QIcon("C:/Users/21658/Desktop/projet2024-2025/mech/statIcon.png"));
    ui->stat->setIconSize(QSize(30, 30));  // Définir la taille de l'icône
    ui->stat->setToolTip("Statistiques");

    ui->exportButton->setIcon(QIcon("C:/Users/21658/Desktop/projet2024-2025/mech/exportIcon.png"));
    ui->exportButton->setIconSize(QSize(30, 30));  // Définir la taille de l'icône
    ui->exportButton->setToolTip("Exporter");

    ui->donneesBtn->setIcon(QIcon("C:/Users/21658/Desktop/projet2024-2025/mech/donneesIcon.png"));
    ui->donneesBtn->setIconSize(QSize(30, 30));  // Définir la taille de l'icône
    ui->donneesBtn->setToolTip("Gestion des données");

    ui->calendrierBtn->setIcon(QIcon("C:/Users/21658/Desktop/projet2024-2025/mech/calendriericon.png"));
    ui->calendrierBtn->setIconSize(QSize(30, 30));  // Définir la taille de l'icône
    ui->calendrierBtn->setToolTip("calendrier des maintenances");

    connect(ui->stat, &QPushButton::clicked, this, &MainWindow::on_stat_clicked);

    connect(ui->calendrierBtn, &QPushButton::clicked, this, &MainWindow::on_calendrierBtn_clicked);

    // MainWindow.cpp
    connect(ui->calendarWidget, &QCalendarWidget::selectionChanged, this, &MainWindow::onDateSelected);

*/
}

MainWindow::~MainWindow()
{
    delete ui;
}
/////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::showPagecentral() {
    QGraphicsOpacityEffect* opacityEffect = new QGraphicsOpacityEffect(ui->widget_2);
    ui->widget_2->setGraphicsEffect(opacityEffect);

    ui->stackedWidget->setCurrentWidget(ui->pagecentral);
    ui->stackedWidget_->setCurrentWidget(ui->page);
    startBlinkingEffect(ui->widget_2); // Appel de la méthode pour faire clignoter le widget


    int cin_u = ui->cin_c->text().toInt();

    // Préparer une requête SQL pour récupérer les données de l'image et les noms
    QSqlQuery query;
    query.prepare("SELECT firstname_u, lastname_u, image_data FROM utilisateur WHERE CIN_U = :cin_u");
    query.bindValue(":cin_u", cin_u);

    // Exécuter la requête et vérifier le succès
    if (query.exec() && query.next()) {
        // Récupérer le prénom, le nom et les données de l'image
        QString firstname = query.value("firstname_u").toString();
        QString lastname = query.value("lastname_u").toString();
        QByteArray imageData = query.value("image_data").toByteArray();

        // Concaténer le prénom et le nom
        QString fullName = firstname + " " + lastname;

        // Afficher le prénom et le nom dans le label texte (en plus de l'image)
        ui->nomlabel->setText(fullName);

        QPixmap pixmap;
        if (pixmap.loadFromData(imageData)) {
            // Créer un masque circulaire pour l'image
            QPixmap circularImage(ui->imglbl_2->size());
            circularImage.fill(Qt::transparent); // Fond transparent

            QPainter painter(&circularImage);
            painter.setRenderHint(QPainter::Antialiasing);
            painter.setRenderHint(QPainter::SmoothPixmapTransform);

            // Définir un chemin circulaire pour le masque
            QPainterPath path;
            int margin = 5; // Marge pour réduire l'image à l'intérieur du cercle
            int radius = qMin(ui->imglbl_2->width(), ui->imglbl_2->height()) / 2 - margin;
            path.addEllipse(ui->imglbl_2->width() / 2 - radius,
                            ui->imglbl_2->height() / 2 - radius,
                            2 * radius,
                            2 * radius);
            painter.setClipPath(path);

            // Dessiner l'image redimensionnée dans le cercle
            painter.drawPixmap(margin,
                               margin,
                               ui->imglbl_2->width() - 2 * margin,
                               ui->imglbl_2->height() - 2 * margin,
                               pixmap);
            painter.end();

            // Afficher l'image circulaire dans le label
            ui->imglbl_2->setPixmap(circularImage);
        } else {
            qDebug() << "Failed to load the image data.";
        }
    } else {
        qDebug() << "Failed to execute query or no data found for the user.";
    }
}




void MainWindow::showPage2() {
    ui->stackedWidget->setCurrentWidget(ui->page_2);
}

void MainWindow::showPage3() {
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}

void MainWindow::showForgotPassword() {

    ui->stackedWidget->setCurrentWidget(ui->ForgotPassword);

}



//////////////////////////////////////////////////////////////////////////////////
void MainWindow::showPage4() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_->setCurrentWidget(ui->page_4);
    int cin_u = ui->cin_c->text().toInt();
    QSqlQuery query;
    query.prepare("SELECT firstname_u, lastname_u, phonenumber_u, mdp_u, email_u, rolee_u, image_data FROM utilisateur WHERE CIN_U = :cin_u");
    query.bindValue(":cin_u", cin_u);

    if (query.exec() && query.next()) {
        // Remplir les champs de texte avec les informations utilisateur
        ui->nom_u->setText(query.value("firstname_u").toString());
        ui->prenom_u->setText(query.value("lastname_u").toString());
        ui->num_u->setText(query.value("phonenumber_u").toString());
        ui->mot_u->setText(query.value("mdp_u").toString());
        ui->mail_u->setText(query.value("email_u").toString());
        ui->role_u->setCurrentText(query.value("rolee_u").toString());

        // Récupérer et afficher l'image
        QByteArray imageData = query.value("image_data").toByteArray();
        if (!imageData.isEmpty()) {
            QPixmap pixmap;
            if (pixmap.loadFromData(imageData)) {
                // Créer un masque circulaire pour adapter l'image au label
                QPixmap circularImage(ui->imageLabel_2->size());
                circularImage.fill(Qt::transparent); // Fond transparent

                QPainter painter(&circularImage);
                painter.setRenderHint(QPainter::Antialiasing);
                painter.setRenderHint(QPainter::SmoothPixmapTransform);

                // Définir un chemin circulaire pour le masque
                QPainterPath path;
                path.addEllipse(0, 0, ui->imageLabel_2->width(), ui->imageLabel_2->height());
                painter.setClipPath(path);

                // Dessiner l'image redimensionnée dans le cercle
                painter.drawPixmap(0, 0, pixmap.scaled(ui->imageLabel_2->size(),
                                                       Qt::KeepAspectRatioByExpanding,
                                                       Qt::SmoothTransformation));
                painter.end();

                // Afficher l'image circulaire dans le label
                ui->imageLabel_2->setPixmap(circularImage);
            } else {
                QMessageBox::warning(this, tr("Error"), tr("Failed to load the image data."));
            }
        } else {
            // Gérer l'absence d'image
            ui->imageLabel_2->clear();
            QMessageBox::information(this, tr("No Image"), tr("No image associated with this user."));
        }
    } else {
        QMessageBox::critical(this, tr("Error"), tr("Failed to retrieve user information."));
    }


}

void MainWindow::showEmployes()
{
    // Afficher la page 'pagecentral' dans le widget principal (stackedWidget)
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Récupérer les données des employés
    QSqlQueryModel* model = E.afficherE();

    // Vérifier si le modèle est valide
    if (model != nullptr) {
        // Appliquer le modèle de données au tableau
        ui->tableEmployes->setModel(model);
    } else {
        // Journaliser une erreur ou gérer l'échec
        qDebug() << "Failed to load employee data!";
    }

    // Passer à la page 'employes' dans le second stackedWidget
    ui->stackedWidget_->setCurrentWidget(ui->employes);

    // Récupérer le CIN de l'utilisateur connecté
    int cin_u = ui->cin_c->text().toInt();

    // Préparer une requête SQL pour récupérer les données de l'image et les noms
    QSqlQuery query;
    query.prepare("SELECT firstname_u, lastname_u, image_data FROM utilisateur WHERE CIN_U = :cin_u");
    query.bindValue(":cin_u", cin_u);

    // Exécuter la requête et vérifier le succès
    if (query.exec() && query.next()) {
        // Récupérer le prénom, le nom et les données de l'image
        QString firstname = query.value("firstname_u").toString();
        QString lastname = query.value("lastname_u").toString();
        QByteArray imageData = query.value("image_data").toByteArray();

        // Concaténer le prénom et le nom
        QString fullName = firstname + " " + lastname;

        // Afficher le prénom et le nom dans le label texte (en plus de l'image)
        ui->nomlabel2->setText(fullName);

        QPixmap pixmap;
        if (pixmap.loadFromData(imageData)) {
            // Créer un masque circulaire pour l'image
            QPixmap circularImage(ui->imglbl->size());
            circularImage.fill(Qt::transparent); // Fond transparent

            QPainter painter(&circularImage);
            painter.setRenderHint(QPainter::Antialiasing);
            painter.setRenderHint(QPainter::SmoothPixmapTransform);

            // Définir un chemin circulaire pour le masque
            QPainterPath path;
            int margin = 5; // Marge pour réduire l'image à l'intérieur du cercle
            int radius = qMin(ui->imglbl->width(), ui->imglbl->height()) / 2 - margin;
            path.addEllipse(ui->imglbl->width() / 2 - radius,
                            ui->imglbl->height() / 2 - radius,
                            2 * radius,
                            2 * radius);
            painter.setClipPath(path);

            // Dessiner l'image redimensionnée dans le cercle
            painter.drawPixmap(margin,
                               margin,
                               ui->imglbl->width() - 2 * margin,
                               ui->imglbl->height() - 2 * margin,
                               pixmap);
            painter.end();

            // Afficher l'image circulaire dans le label
            ui->imglbl->setPixmap(circularImage);
        } else {
            qDebug() << "Failed to load the image data.";
        }
    } else {
        qDebug() << "Failed to execute query or no data found for the user.";
    }
}


void MainWindow::showVehicules() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_->setCurrentWidget(ui->vehicules);
}

void MainWindow::showMachines() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_->setCurrentWidget(ui->machines);
}
void MainWindow::showTrensactions() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_->setCurrentWidget(ui->trensactions);
}


void MainWindow::showApropos() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_->setCurrentWidget(ui->apropos);
}

/////////////////////////////////////////////////////


void MainWindow::animateWidgetAppearance(QWidget* widget) {
    // Appliquer un effet d'opacité au widget
    QGraphicsOpacityEffect* opacityEffect = new QGraphicsOpacityEffect(widget);
    widget->setGraphicsEffect(opacityEffect);

    // Créer une animation sur la propriété "opacity" (transparence)
    QPropertyAnimation* opacityAnimation = new QPropertyAnimation(opacityEffect, "opacity");
    opacityAnimation->setDuration(1000);  // Durée de l'animation en millisecondes
    opacityAnimation->setStartValue(0.0); // Commence transparent
    opacityAnimation->setEndValue(1.0);   // Finit opaque

    // Lancer l'animation
    opacityAnimation->start(QAbstractAnimation::DeleteWhenStopped); // Supprime l'animation à la fin
}


void MainWindow::startBlinkingEffect(QWidget* widget) {
    // Appliquer un effet d'opacité au widget si ce n'est pas déjà fait
    QGraphicsOpacityEffect* opacityEffect = new QGraphicsOpacityEffect(widget);
    widget->setGraphicsEffect(opacityEffect);

    // Créer une animation pour l'opacité
    QPropertyAnimation* opacityAnimation = new QPropertyAnimation(opacityEffect, "opacity");
    opacityAnimation->setDuration(500); // Durée de chaque cycle
    opacityAnimation->setStartValue(1.0); // Commence opaque
    opacityAnimation->setEndValue(0.0); // Devient transparent

    // Créer un groupe d'animations pour faire clignoter
    QSequentialAnimationGroup* blinkGroup = new QSequentialAnimationGroup(this);
    blinkGroup->addAnimation(opacityAnimation);

    // Ajouter l'animation inverse pour revenir à opaque
    QPropertyAnimation* reverseOpacityAnimation = new QPropertyAnimation(opacityEffect, "opacity");
    reverseOpacityAnimation->setDuration(500);
    reverseOpacityAnimation->setStartValue(0.0);
    reverseOpacityAnimation->setEndValue(1.0);
    blinkGroup->addAnimation(reverseOpacityAnimation);

    // Répéter l'animation
    blinkGroup->setLoopCount(-1); // -1 pour un nombre infini de répétitions

    // Lancer l'animation
    blinkGroup->start(QAbstractAnimation::DeleteWhenStopped);
}

//////////////////////////////////////////////////////
void MainWindow::on_statButton1_clicked() {
    QSqlQuery query;

    // Step 1: Count total employees
    query.exec("SELECT COUNT(*) FROM employes");
    int totalEmployees = 0;
    if (query.next()) {
        totalEmployees = query.value(0).toInt();
    }

    // Step 2: Count employees by status (e.g., 'Disponible' and 'Occupé')
    int disponibleCount = 0;
    int occupeCount = 0;
    query.exec("SELECT Etat_E, COUNT(*) FROM employes GROUP BY Etat_E");
    while (query.next()) {

        QString status = query.value(0).toString();
        int count = query.value(1).toInt();
        if (status == "Disponible") {
            disponibleCount = count;
        } else if (status == "Occupe") {
            occupeCount = count;
        }
    }

    // Step 3: Calculate salary statistics (average, max, min)
    double avgSalary = 0.0;
    double minSalary = 0.0;
    double maxSalary = 0.0;
    query.exec("SELECT AVG(Salaire_E), MIN(Salaire_E), MAX(Salaire_E) FROM employes");
    if (query.next()) {
        avgSalary = query.value(0).toDouble();
        minSalary = query.value(1).toDouble();
        maxSalary = query.value(2).toDouble();
    }
    showPieChart(disponibleCount, occupeCount);
    showBarChart(avgSalary, minSalary, maxSalary);

    // Step 4: Display statistics
    QString message = tr("Total Employees: %1\n"
                         "Available Employees: %2\n"
                         "Occupied Employees: %3\n"
                         "Average Salary: %4\n"
                         "Minimum Salary: %5\n"
                         "Maximum Salary: %6")
                          .arg(totalEmployees)
                          .arg(disponibleCount)
                          .arg(occupeCount)
                          .arg(avgSalary)
                          .arg(minSalary)
                          .arg(maxSalary);

    QMessageBox::information(this, tr("Employee Statistics"), message);
}



void MainWindow::on_confirmerEmployes_clicked() {
    // Récupération des données depuis les champs de l'interface
    QString cinText = ui->cin_e->text();
    QString salaireText = ui->salaire_e->text();

    // Vérification que cin_e est un nombre de 8 chiffres
    if (!QRegularExpression("^[0-9]{8}$").match(cinText).hasMatch()) {
        QMessageBox::critical(nullptr, QObject::tr("Échec"),
                              QObject::tr("Le CIN doit être un nombre de 8 chiffres.\nCliquez sur Annuler pour quitter."),
                              QMessageBox::Cancel);
        return;
    }

    // Vérification que salaire_e est un nombre décimal valide
    bool salaireOk;
    double salaire_e = salaireText.toDouble(&salaireOk);
    if (!salaireOk) {
        QMessageBox::critical(nullptr, QObject::tr("Échec"),
                              QObject::tr("Le salaire doit être un nombre valide.\nCliquez sur Annuler pour quitter."),
                              QMessageBox::Cancel);
        return;
    }

    // Conversion du CIN en entier
    int cin_e = cinText.toInt();

    // Vérifier si le CIN existe déjà dans la base de données
    if (E.employeExiste(cin_e)) {
        QMessageBox::critical(nullptr, QObject::tr("Échec"),
                              QObject::tr("Un employé avec ce CIN existe déjà.\nCliquez sur Annuler pour quitter."),
                              QMessageBox::Cancel);
        return;
    }

    // Récupération des autres données
    QString special_e = ui->special_e->currentText();
    QString etat_e = ui->etat_e->currentText();

    // Création de l'objet employé
    employes Eu(cin_e, special_e, salaire_e, etat_e);

    // Appel de la méthode d'ajout
    if (Eu.ajouterE()) {
        ui->tableEmployes->setModel(E.afficherE());
        QMessageBox::information(nullptr, QObject::tr("Succès"),
                                 QObject::tr("Ajout effectué.\nCliquez sur Annuler pour quitter."),
                                 QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Échec"),
                              QObject::tr("Ajout non effectué.\nCliquez sur Annuler pour quitter."),
                              QMessageBox::Cancel);
    }
}


void MainWindow::on_supprimerEmployes_clicked(){
    int cin_e = ui->rechercher->text().toInt();
    employes Eu;

    // Vérifier si l'employé avec ce CIN existe
    if (!Eu.employeExiste(cin_e)) {
        QMessageBox::critical(this, tr("Erreur"), tr("Le CIN n'existe pas dans la base de données.\nVeuillez vérifier le CIN et réessayer."));
        return; // Si le CIN n'existe pas, on arrête l'exécution de la fonction
    }

    // Si le CIN existe, procéder à la suppression
    if (Eu.supprimerE(cin_e)) {
        ui->tableEmployes->setModel(E.afficherE());
        QMessageBox::information(this, tr("Succès"), tr("Employé supprimé avec succès."));
    } else {
        QMessageBox::critical(this, tr("Erreur"), tr("Échec de la suppression de l'employé.\nVeuillez réessayer."));
    }
}

void MainWindow::on_modifierEmployes_clicked()
{
    int cin_e = ui->rechercher->text().toInt();

    // Create an instance of the 'employes' class to check if the employee exists
    employes Eu;

    // Vérifier si l'employé avec ce CIN existe
    if (!Eu.employeExiste(cin_e)) {
        QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                              QObject::tr("L'employé avec ce CIN n'existe pas.\nVeuillez vérifier le CIN et réessayer."),
                              QMessageBox::Cancel);
        return; // Stop if employee doesn't exist
    }

    // If the employee exists, retrieve the data and populate the fields
    // Assuming you have a method to get employee data based on CIN
    QSqlQuery query;
    query.prepare("SELECT Special_E, Salaire_E, Etat_E FROM Employes WHERE CIN_E = :cin_e");
    query.bindValue(":cin_e", cin_e);

    if (query.exec() && query.next()) {
        // Populate the fields with the current values
        ui->special_e->setCurrentText(query.value(0).toString());
        ui->salaire_e->setText(query.value(1).toString());
        ui->etat_e->setCurrentText(query.value(2).toString());
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                              QObject::tr("Impossible de récupérer les informations de l'employé."),
                              QMessageBox::Cancel);
        return;
    }
}
void MainWindow::on_saveEmploye_clicked()
{
    int cin_e = ui->rechercher->text().toInt();

    // Create an instance of the 'employes' class to check if the employee exists
    employes Eu;

    // Vérifier si l'employé avec ce CIN existe
    if (!Eu.employeExiste(cin_e)) {
        QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                              QObject::tr("L'employé avec ce CIN n'existe pas.\nVeuillez vérifier le CIN et réessayer."),
                              QMessageBox::Cancel);
        return; // Stop if employee doesn't exist
    }

    // Retrieve the updated data from the UI fields
    double salaire_e = ui->salaire_e->text().toDouble();
    QString special_e = ui->special_e->currentText();
    QString etat_e = ui->etat_e->currentText();

    // Create the employee object with the updated data
    Eu = employes(cin_e, special_e, salaire_e, etat_e);

    // Call the modifierE function to update the employee in the database
    if (Eu.modifierE(cin_e)) {
        ui->tableEmployes->setModel(Eu.afficherE());  // Refresh the table model with updated data
        QMessageBox::information(nullptr, QObject::tr("Succès"),
                                 QObject::tr("Modification effectuée.\nCliquez sur Annuler pour quitter."),
                                 QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Échec"),
                              QObject::tr("Échec de la modification.\nVeuillez réessayer."),
                              QMessageBox::Cancel);
    }
}
void MainWindow::on_filter_currentTextChanged(const QString& selectedType) {
    qDebug() << "Selected filter type:" << selectedType;  // Debug output
    QSqlQueryModel* model = E.filtrerEmployes(selectedType);

    if (model) {
        ui->tableEmployes->setModel(model);
    } else {
        qDebug() << "Model is null. Could not set model for QTableView.";
    }
}
void MainWindow::on_ButtonCreer_clicked()
{
    // Récupération des données depuis les champs de l'interface
    int cin_u = ui->cin_u->text().toInt();
    QString passwordText = ui->mdp_u->text();  // Mot de passe
    QString firstname = ui->firstname_u->text();  // Prénom
    QString lastname = ui->lastname_u->text();    // Nom
    double phonenumber = ui->phone_u->text().toDouble();  // Numéro de téléphone
    QString email = ui->email_u->text();  // Email
    QString role = ui->rolee_u->currentText();  // Rôle

    // Check if an image is selected
    if (selectedImagePath1.isEmpty()) {
        QMessageBox::warning(this, tr("Error"), tr("Please select an image using the 'Add Image' button."));
        return;
    }

    // Read the image data from the selected image file
    QFile imageFile(selectedImagePath1);
    QByteArray imageData;
    if (imageFile.open(QIODevice::ReadOnly)) {
        imageData = imageFile.readAll();  // Read all bytes from the file
    } else {
        QMessageBox::warning(this, tr("Error"), tr("Unable to read the image file."));
        return;
    }

    // Creating the utilisateur object with image path and image data
    utilisateur Uu(cin_u, firstname, lastname, phonenumber, passwordText, email, role, selectedImagePath1, imageData);

    // Call the add user method
    if (Uu.ajouterUser()) {
        QMessageBox::information(this, tr("Succès"),
                                 tr("Utilisateur ajouté avec succès."),
                                 QMessageBox::Cancel);
    } else {
        QMessageBox::critical(this, tr("Échec"),
                              tr("Ajout de l'utilisateur échoué."),
                              QMessageBox::Cancel);
    }
}




bool MainWindow::on_ButtonConnecter_clicked() {
    // Get CIN and password from the UI fields (QLineEdit)
    QString cinText = ui->cin_c->text();
    QString passwordText = ui->mdp_c->text();

    // CIN validation
    if (!QRegularExpression("^[0-9]{8}$").match(cinText).hasMatch()) {
        QMessageBox::critical(this, tr("Échec"),
                              tr("Le CIN doit être un nombre de 8 chiffres.\nCliquez sur Annuler pour quitter."),
                              QMessageBox::Cancel);
        return false;
    }

    // Password validation
    if (passwordText.isEmpty()) {
        QMessageBox::critical(this, tr("Échec"),
                              tr("Le mot de passe ne peut pas être vide.\nCliquez sur Annuler pour quitter."),
                              QMessageBox::Cancel);
        return false;
    }

    // Convert CIN to integer
    int cin_n = cinText.toInt();

    // Attempt to connect
    if (U.connectionUser(cin_n, passwordText)) {
        qDebug() << "Login successful! Starting blur animation.";

        // Apply the blur effect to the stackedWidget
        auto blurEffect = new QGraphicsBlurEffect(this);
        ui->stackedWidget->setGraphicsEffect(blurEffect);

        // Create the blur animation
        auto blurAnimation = new QPropertyAnimation(blurEffect, "blurRadius", this);
        blurAnimation->setDuration(1000);  // Duration in milliseconds
        blurAnimation->setStartValue(0);   // Start without blur
        blurAnimation->setEndValue(15);    // Maximum blur value
        blurAnimation->setEasingCurve(QEasingCurve::OutQuad);

        // Connect the animation to proceed after completion
        connect(blurAnimation, &QPropertyAnimation::finished, [this]() {
            qDebug() << "Blur animation finished. Transitioning to employee page.";

            // Remove blur effect
            ui->stackedWidget->setGraphicsEffect(nullptr);

            // Show the employee page
            showEmployes();
        });

        // Start the blur animation
        blurAnimation->start(QAbstractAnimation::DeleteWhenStopped);

        return true;
    } else {
        QMessageBox::critical(this, tr("Échec"),
                              tr("Échec de la connexion : CIN ou mot de passe incorrect.\nVeuillez réessayer."),
                              QMessageBox::Cancel);
        return false;
    }
}



/*void MainWindow::showTransitionAnimation() {
    // Apply blur effect to the entire window
    blurEffect = new QGraphicsBlurEffect(this);
    blurEffect->setBlurRadius(0); // Start with no blur
    this->setGraphicsEffect(blurEffect);

    // Create a label for the "Connected" text
    connectedLabel = new QLabel("Connected", this);
    connectedLabel->setAlignment(Qt::AlignCenter);
    connectedLabel->setStyleSheet("font: bold 48px; color: white; background: transparent;");
    connectedLabel->setGeometry(this->width() / 2 - 150, this->height() / 2 - 50, 300, 100);
    connectedLabel->setAttribute(Qt::WA_TranslucentBackground);
    connectedLabel->setWindowFlags(Qt::FramelessWindowHint);

    // Fade in animation for "Connected" text
    QGraphicsOpacityEffect *opacityEffect = new QGraphicsOpacityEffect(connectedLabel);
    connectedLabel->setGraphicsEffect(opacityEffect);
    QPropertyAnimation *fadeIn = new QPropertyAnimation(opacityEffect, "opacity");
    fadeIn->setDuration(1000); // 1 second
    fadeIn->setStartValue(0);
    fadeIn->setEndValue(1);

    // Gradually increase blur effect
    QPropertyAnimation *blurAnimation = new QPropertyAnimation(blurEffect, "blurRadius");
    blurAnimation->setDuration(1000);
    blurAnimation->setStartValue(0);
    blurAnimation->setEndValue(20); // Maximum blur

    // Fade out animation for "Connected" text
    QPropertyAnimation *fadeOut = new QPropertyAnimation(opacityEffect, "opacity");
    fadeOut->setDuration(1000); // 1 second
    fadeOut->setStartValue(1);
    fadeOut->setEndValue(0);
    fadeOut->setStartDelay(1000); // Delay after fade-in

    // Connect the animation finished signal to switch pages
    connect(fadeOut, &QPropertyAnimation::finished, [this]() {
        // Remove blur effect
        this->setGraphicsEffect(nullptr);
        delete blurEffect;
        blurEffect = nullptr;

        // Delete "Connected" label
        delete connectedLabel;
        connectedLabel = nullptr;

        // Show the employees page
        showEmployes();
    });

    // Group animations together
    QParallelAnimationGroup *animationGroup = new QParallelAnimationGroup(this);
    animationGroup->addAnimation(fadeIn);
    animationGroup->addAnimation(blurAnimation);
    animationGroup->addAnimation(fadeOut);
    animationGroup->start(QAbstractAnimation::DeleteWhenStopped);
}
*/
void MainWindow::showPieChart(int disponibleCount, int occupeCount) {
    QPieSeries *series = new QPieSeries();
    int total = disponibleCount + occupeCount;

    // Add slices with percentage labels
    QString disponibleLabel = QString("Disponible: %1 (%2%)")
                                  .arg(disponibleCount)
                                  .arg((total > 0) ? (disponibleCount * 100.0 / total) : 0, 0, 'f', 1);
    QString occupeLabel = QString("Occupé: %1 (%2%)")
                              .arg(occupeCount)
                              .arg((total > 0) ? (occupeCount * 100.0 / total) : 0, 0, 'f', 1);

    series->append(disponibleLabel, disponibleCount);
    series->append(occupeLabel, occupeCount);

    // Highlight sections
    QPieSlice *disponibleSlice = series->slices().at(0);
    QPieSlice *occupeSlice = series->slices().at(1);

    disponibleSlice->setLabelVisible();
    occupeSlice->setLabelVisible();

    disponibleSlice->setBrush(Qt::green);
    occupeSlice->setBrush(Qt::red);

    // Create the chart
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Employee Status");

    // Display the chart in a view
    chartView1 = new QChartView(chart); // Ensure chartView1 is declared as a member
    chartView1->setRenderHint(QPainter::Antialiasing);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(chartView1);
    QWidget *chartWidget = new QWidget();
    chartWidget->setLayout(layout);
    chartWidget->setWindowTitle("Employee Status Chart");
    chartWidget->resize(400, 300);
    chartWidget->show();
}


void MainWindow::showBarChart(double avgSalary, double minSalary, double maxSalary) {
    QBarSet *set = new QBarSet("Salaries");
    *set << minSalary << avgSalary << maxSalary;

    QBarSeries *series = new QBarSeries();
    series->append(set);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Salary Statistics");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << "Minimum" << "Average" << "Maximum";
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, maxSalary * 1.2); // Adjust range for visibility
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chartView2 = new QChartView(chart); // Ensure chartView2 is declared as a member
    chartView2->setRenderHint(QPainter::Antialiasing);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(chartView2);
    QWidget *chartWidget = new QWidget();
    chartWidget->setLayout(layout);
    chartWidget->setWindowTitle("Salary Chart");
    chartWidget->resize(400, 300);
    chartWidget->show();
}


void MainWindow::on_exportButton_clicked() {
    QString choice = QInputDialog::getItem(this, "Export Options", "Select what to export:", {"Employee List", "PieChart", "BarChart"}, 0, false);

    if (choice == "Employee List") {
        exportEmployeeListToCSV();
    } else if (choice == "PieChart") {
        QString fileName = QFileDialog::getSaveFileName(this, "Save Chart 1", "", "Image Files (*.png *.jpg *.bmp)");
        if (!fileName.isEmpty()) {
            exportChartToImage(chartView1, fileName);  // Export Chart 1
        }
    } else if (choice == "BarChart") {
        QString fileName = QFileDialog::getSaveFileName(this, "Save Chart 2", "", "Image Files (*.png *.jpg *.bmp)");
        if (!fileName.isEmpty()) {
            exportChartToImage(chartView2, fileName);  // Export Chart 2
        }
    }
}


void MainWindow::exportEmployeeListToCSV() {
    QString fileName = QFileDialog::getSaveFileName(this, "Save Employee List", "", "CSV Files (*.csv)");
    if (fileName.isEmpty()) {
        return;  // User canceled, so return
    }

    // Make sure the file name has the correct extension
    if (!fileName.endsWith(".csv")) {
        fileName.append(".csv");
    }

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Export Failed", "Failed to open the file for writing.");
        return;
    }

    QTextStream out(&file);

    // Get the model from the table
    QAbstractItemModel *employeeModel = ui->tableEmployes->model();
    int rowCount = employeeModel->rowCount();
    int columnCount = employeeModel->columnCount();

    // Write column headers to CSV
    for (int col = 0; col < columnCount; ++col) {
        out << employeeModel->headerData(col, Qt::Horizontal).toString();
        if (col < columnCount - 1)
            out << ",";  // Add comma between columns
    }
    out << "\n";  // Newline after headers

    // Write the employee data to CSV
    for (int row = 0; row < rowCount; ++row) {
        for (int col = 0; col < columnCount; ++col) {
            out << employeeModel->data(employeeModel->index(row, col)).toString();
            if (col < columnCount - 1)
                out << ",";  // Add comma between columns
        }
        out << "\n";  // Newline after each row
    }

    file.close();

    QMessageBox::information(this, "Export Successful", "Employee list has been exported successfully.");
}
void MainWindow::exportChartToImage(QChartView *chartView, const QString &filename) {
    // Trigger the chart view to repaint and allow events to be processed
    chartView->repaint();
    QApplication::processEvents();  // Ensure the chart gets rendered

    // Capture the chart view as a QPixmap (image)
    QPixmap chartPixmap = chartView->grab();

    // Check if the image is valid
    if (!chartPixmap.isNull()) {
        if (chartPixmap.save(filename)) {
            QMessageBox::information(this, "Export Successful", "Chart has been exported as an image.");
        } else {
            QMessageBox::critical(this, "Export Failed", "Failed to save chart as an image.");
        }
    } else {
        QMessageBox::critical(this, "Export Failed", "Failed to capture chart as an image.");
    }
}






void MainWindow::on_save_u_clicked()
{
    int cin_u = ui->cin_c->text().toInt();

    // Create an instance of the 'employes' class to check if the employee exists
    utilisateur Uu;
    // Vérifier si l'employé avec ce CIN existe
    // Retrieve the updated data from the UI fields
    QString nom_u= ui->nom_u->text();
    QString prenom_u = ui->prenom_u->text();
    int num_u = ui->num_u->text().toInt();
    QString mot_u = ui->mot_u->text();
    QString mail_u = ui->mail_u->text();
    QString role_u = ui->role_u->currentText();
    if (selectedImagePath2.isEmpty()) {
        QMessageBox::warning(this, tr("Error"), tr("Please select an image using the 'Add Image' button."));
        return;
    }
    QFile imageFile(selectedImagePath2);
    QByteArray imageData;
    if (imageFile.open(QIODevice::ReadOnly)) {
        imageData = imageFile.readAll();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("Unable to read the image file."));
        return;
    }

    // Create the employee object with the updated data
    Uu = utilisateur(cin_u, nom_u, prenom_u,num_u,mot_u,mail_u,role_u,selectedImagePath2,imageData);

    // Call the modifierE function to update the employee in the database
    if (Uu.modifierU(cin_u)){  // Refresh the table model with updated data
        QMessageBox::information(nullptr, QObject::tr("Succès"),
                                 QObject::tr("Modification effectuée.\nCliquez sur Annuler pour quitter."),
                                 QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Échec"),
                              QObject::tr("Échec de la modification.\nVeuillez réessayer."),
                              QMessageBox::Cancel);
    }
}
void MainWindow::on_supp_u_clicked(){
    int cin_u = ui->cin_c->text().toInt();
    utilisateur Uu;

    // Vérifier si l'employé avec ce CIN existe

    // Si le CIN existe, procéder à la suppression
    if (Uu.supprimerU(cin_u)) {
        QMessageBox::information(this, tr("Succès"), tr("Utilisateur supprimé avec succès."));
        showPage2();
    } else {
        QMessageBox::critical(this, tr("Erreur"), tr("Échec de la suppression de l'utilisateur.\nVeuillez réessayer."));
    }
}
void MainWindow::on_addimage1_clicked() {
    // Ouvrir une boîte de dialogue pour sélectionner une image
    QString image_path = QFileDialog::getOpenFileName(this, tr("Select Image"), "", tr("Images (*.png *.jpg *.bmp *.jpeg)"));
    if (!image_path.isEmpty()) {
        selectedImagePath1 = image_path; // Stocker le chemin de l'image sélectionnée

        // Charger l'image
        QPixmap image(selectedImagePath1);
        if (!image.isNull()) {
            // Créer un masque circulaire pour adapter l'image au label
            QPixmap circularImage(ui->imageLabel->size()); // Taille du label
            circularImage.fill(Qt::transparent); // Fond transparent

            QPainter painter(&circularImage);
            painter.setRenderHint(QPainter::Antialiasing);
            painter.setRenderHint(QPainter::SmoothPixmapTransform);

            // Définir une brosse pour dessiner un cercle
            QPainterPath path;
            path.addEllipse(0, 0, ui->imageLabel->width(), ui->imageLabel->height());
            painter.setClipPath(path);

            // Dessiner l'image à l'intérieur du cercle
            painter.drawPixmap(0, 0, image.scaled(ui->imageLabel->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));

            painter.end();

            // Appliquer l'image au QLabel
            ui->imageLabel->setPixmap(circularImage);
        } else {
            QMessageBox::warning(this, tr("Error"), tr("Failed to load the selected image."));
        }
    }
}



void MainWindow::on_addimage2_clicked() {
    // Ouvrir une boîte de dialogue pour sélectionner une image
    QString image_path = QFileDialog::getOpenFileName(this, tr("Select Image"), "", tr("Images (*.png *.jpg *.bmp *.jpeg)"));
    if (!image_path.isEmpty()) {
        selectedImagePath2 = image_path; // Stocker le chemin de l'image sélectionnée

        // Charger l'image
        QPixmap image(selectedImagePath2);
        if (!image.isNull()) {
            // Créer un masque circulaire pour adapter l'image au label
            QPixmap circularImage(ui->imageLabel_2->size()); // Taille du label
            circularImage.fill(Qt::transparent); // Fond transparent

            QPainter painter(&circularImage);
            painter.setRenderHint(QPainter::Antialiasing);
            painter.setRenderHint(QPainter::SmoothPixmapTransform);

            // Définir une brosse pour dessiner un cercle
            QPainterPath path;
            path.addEllipse(0, 0, ui->imageLabel_2->width(), ui->imageLabel_2->height());
            painter.setClipPath(path);

            // Dessiner l'image à l'intérieur du cercle
            painter.drawPixmap(0, 0, image.scaled(ui->imageLabel_2->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));

            painter.end();

            // Appliquer l'image au QLabel
            ui->imageLabel_2->setPixmap(circularImage);
        } else {
            QMessageBox::warning(this, tr("Error"), tr("Failed to load the selected image."));
        }
    }
}


void MainWindow::sendSms(const QString& toPhoneNumber, const QString& message)
{
    // Twilio credentials
    const QString accountSid = "ACc0626fa295fbde3b6c2b3f76d35032a3";  // Replace with your Twilio Account SID
    const QString authToken = "13195a5c2857c4d9771de6357839d5f1";    // Replace with your Twilio Auth Token
    const QString fromPhoneNumber = "+12512441041"; // Replace with your Twilio phone number

    // API endpoint
    QUrl apiUrl("https://api.twilio.com/2010-04-01/Accounts/" + accountSid + "/Messages.json");

    // Network manager to handle the request
    QNetworkAccessManager* manager = new QNetworkAccessManager(this);
    QNetworkRequest request(apiUrl);

    // Set up authentication for the request (Basic Auth)
    QString authValue = "Basic " + QString(QByteArray(QString("%1:%2").arg(accountSid).arg(authToken).toUtf8()).toBase64());
    request.setRawHeader("Authorization", authValue.toUtf8());

    // Prepare the multipart form data
    QHttpMultiPart* multiPart = new QHttpMultiPart(QHttpMultiPart::FormDataType);

    // "To" part
    QHttpPart toPart;
    toPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"To\""));
    toPart.setBody(toPhoneNumber.toUtf8());

    // "From" part
    QHttpPart fromPart;
    fromPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"From\""));
    fromPart.setBody(fromPhoneNumber.toUtf8());

    // "Body" part (Message body, which will contain the password)
    QHttpPart bodyPart;
    bodyPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"Body\""));
    bodyPart.setBody(message.toUtf8());

    // Append the parts to the multipart form data
    multiPart->append(toPart);
    multiPart->append(fromPart);
    multiPart->append(bodyPart);

    // Send the request
    QNetworkReply* reply = manager->post(request, multiPart);
    multiPart->setParent(reply);

    // Handle the reply (SMS sent status)
    connect(reply, &QNetworkReply::finished, [reply]() {
        if (reply->error() == QNetworkReply::NoError) {
            QMessageBox::information(nullptr, "Success", "SMS sent successfully!");
        } else {
            QByteArray responseData = reply->readAll();
            QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData);
            QString errorMessage = jsonResponse["message"].toString();

            qDebug() << "Error sending SMS:" << reply->errorString();
            qDebug() << "Twilio response:" << jsonResponse;
            QMessageBox::warning(nullptr, "Error", "Failed to send SMS: " + errorMessage);
        }
        reply->deleteLater();
    });
}

QString MainWindow::getPasswordFromDatabase(const QString& phoneNumber)
{
    QSqlQuery query;
    query.prepare("SELECT mdp_u FROM utilisateur WHERE phonenumber_u = :phonenumber");
    query.bindValue(":phonenumber", phoneNumber);  // Correct binding name

    if (query.exec() && query.next()) {
        return query.value(0).toString();  // Return the password
    } else {
        qDebug() << "Error executing query:" << query.lastError().text();
        return "";  // Return empty if no record is found
    }
}

void MainWindow::on_send_clicked()
{
    QString phoneNumber = ui->phoneLine->text();  // Get the phone number from input

    if (phoneNumber.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter a phone number.");
        return;
    }

    // Check if the phone number exists in the database
    QString password = getPasswordFromDatabase(phoneNumber);

    if (!password.isEmpty()) {
        // Send SMS with the password if found

        QString message = "Your password is: " + password;
        QString phoneNumber216="+216"+phoneNumber;        // Create message with the password
        sendSms(phoneNumber216, message);  // Call sendSms to send the message
        QMessageBox::information(this, "Success", "SMS sent successfully!");
    } else {
        // Show error if phone number is not found
        QMessageBox::warning(this, "Error", "Phone number not found in the database.");
    }
}
void MainWindow::on_rechercherr_textChanged(const QString& searchText) {
    // Create the query with a dynamic WHERE clause
    QSqlQuery query;
    query.prepare("SELECT * FROM Employes WHERE "
                  "Special_E LIKE :searchText OR "
                  "Salaire_E LIKE :searchText OR "
                  "Etat_E LIKE :searchText");

    // Bind the search text, adding wildcards for partial matches
    query.bindValue(":searchText", "%" + searchText + "%");

    // Execute the query and set the model if successful
    QSqlQueryModel* model = new QSqlQueryModel;
    if (query.exec()) {
        model->setQuery(query);
        ui->tableEmployes->setModel(model);
    } else {
        qDebug() << "Filter query failed:" << query.lastError().text();
    }
}

void MainWindow::on_demande_clicked() {
    // Récupérer l'ID de l'employé depuis le champ "rechercher"
    QString employeeID = ui->rechercher->text();

    // Récupérer les dates depuis les QDateEdit
    QDate startDate = ui->datedb->date();
    QDate endDate = ui->datefn->date();

    // Validation des données
    if (employeeID.isEmpty()) {
        QMessageBox::critical(this, "Erreur", "L'ID de l'employé ne peut pas être vide.");
        return;
    }
    if (startDate > endDate) {
        QMessageBox::critical(this, "Erreur", "La date de début doit être antérieure ou égale à la date de fin.");
        return;
    }

    // Calcul de la durée (en jours)
    int duration = startDate.daysTo(endDate) + 1;

    // Demander où enregistrer le fichier
    QString filePath = QFileDialog::getSaveFileName(this, "Enregistrer la demande", "", "PDF Files (*.pdf)");
    if (filePath.isEmpty()) {
        return; // L'utilisateur a annulé
    }

    // Configuration de l'écriture PDF
    QPdfWriter writer(filePath);
    writer.setPageSize(QPageSize(QPageSize::A4));
    writer.setResolution(300);

    QPainter painter(&writer);

    // Configuration des marges et police
    int margin = 100;
    int yOffset = margin;
    painter.setFont(QFont("Times New Roman", 12));

    // Titre centré
    painter.setFont(QFont("Times New Roman", 16, QFont::Bold));
    painter.drawText(writer.width() / 2 - 100, yOffset, "Demande de Congé");
    yOffset += 100;

    // Corps de la lettre
    painter.setFont(QFont("Times New Roman", 12));
    QString text = QString(
                       "Madame, Monsieur,\n\n"
                       "Je soussigné(e), employé(e) au sein de votre honorable établissement sous le numéro CIN [%1], "
                       "me permets de vous adresser cette demande de congé.\n\n"
                       "Je sollicite, avec votre bienveillance, l’autorisation de m’absenter du [%2] au [%3], "
                       "soit une durée de [%4] jours.\n\n"
                       "Je reste à votre disposition pour toute information complémentaire ou formalité à accomplir en vue de "
                       "faciliter cette procédure.\n\n"
                       "Dans l’attente de votre réponse favorable, je vous remercie par avance pour votre compréhension "
                       "et vous prie d’agréer, Madame, Monsieur, l’expression de mes salutations respectueuses.")
                       .arg(employeeID)
                       .arg(startDate.toString("dd/MM/yyyy"))
                       .arg(endDate.toString("dd/MM/yyyy"))
                       .arg(duration);

    painter.drawText(margin, yOffset, writer.width() - 2 * margin, 400, Qt::TextWordWrap, text);

    // Signatures
    yOffset += 450; // Descendre un peu pour laisser de l'espace après le texte principal

    // Ligne et texte pour la signature de l'employé
    int signatureY = yOffset + 50; // Position verticale des signatures
    painter.drawLine(margin, signatureY, margin + 200, signatureY); // Ligne pour la signature de l'employé
    painter.drawText(margin, signatureY + 20, "Signature de l'Employé");

    // Ligne et texte pour la signature du responsable (déplacé vers la gauche)
    int responsableX = writer.width() - margin - 300; // Plus à gauche
    painter.drawLine(responsableX, signatureY, responsableX + 200, signatureY); // Ligne pour la signature du responsable
    painter.drawText(responsableX, signatureY + 20, "Signature du Responsable");

    // Terminer le dessin
    painter.end();

    QMessageBox::information(this, "Succès", "Le fichier PDF a été généré avec succès!");
}
