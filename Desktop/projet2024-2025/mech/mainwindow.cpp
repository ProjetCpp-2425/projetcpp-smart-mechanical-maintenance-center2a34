#include "mainwindow.h"
#include "ui_mainwindow.h"

// Qt includes
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
#include "statwindow.h"
#include "machine.h"
#include "connection.h"
#include "modifiermachine.h"
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

#include <QtCharts/QPieSeries>
#include <QInputDialog>
#include <QDesktopServices>
#include <QUrl>









MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Connection conn;
    conn.createconnection();
    ui->setupUi(this);
    setupButtons();

    initMap();  // Initialiser la carte au démarrage



    // Affichez la page par défaut
    ui->stackedWidget->setCurrentWidget(ui->page1);
    animateWidgetAppearance(ui->page1);


    // Connecter les boutons aux pages du QStackedWidget
    //connect(ui->ButtonConnecter, &QPushButton::clicked, this, &MainWindow::showPagecentral);
    connect(ui->ButtonCreer, &QPushButton::clicked, this, &MainWindow::showPagecentral);

    connect(ui->buttonPage2, &QPushButton::clicked, this, &MainWindow::showPage2);
    connect(ui->sinscrir, &QPushButton::clicked, this, &MainWindow::showPage3);
    connect(ui->seconnecter, &QPushButton::clicked, this, &MainWindow::showPage2);


    connect(ui->ButtonPage, &QPushButton::clicked, this, &MainWindow::showPagecentral);
    connect(ui->ButtonEmployes, &QPushButton::clicked, this, &MainWindow::showEmployes);
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
    //connect(ui->ButtonMachines3, &QPushButton::clicked, this, &MainWindow::showMachines);
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

    /*connect(ui->stat1Button, &QPushButton::clicked, this, &MainWindow::on_stat1Button_clicked);
    connect(ui->stat2, &QPushButton::clicked, this, &MainWindow::on_stat1Button_clicked);
    connect(ui->stat, &QPushButton::clicked, this, &MainWindow::on_stat1Button_clicked);
    connect(ui->stat4, &QPushButton::clicked, this, &MainWindow::on_stat1Button_clicked);*/

    connect(ui->statBtn, &QPushButton::clicked, this, &MainWindow::checkAllRows);
    //connect(ui->modifierButton, &QPushButton::clicked, this, &MainWindow::on_modifierButton_clicked());

    connect(ui->comboBoxtrie, &QComboBox::currentIndexChanged, this, &MainWindow::sortTable);
    // Initialisation du QSortFilterProxyModel
    searchProxyModel = new QSortFilterProxyModel(this);
    QStandardItemModel *sourceModel = new QStandardItemModel(); // Remplacez ceci par votre modèle réel
    searchProxyModel->setSourceModel(sourceModel); // Définir le modèle source
    searchProxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
    searchProxyModel->setFilterKeyColumn(-1); // Appliquer le filtre à toutes les colonnes
    ui->tableMachine->setModel(searchProxyModel); // Assigner le proxy au tableau

    // Connexion du QLineEdit au filtre
    connect(ui->searchLineEdit, &QLineEdit::textChanged, this, &MainWindow::on_searchLineEdit_textChanged);
    connect(ui->exportButton, &QPushButton::clicked, this, &MainWindow::exportToPDF);

    // Connecter le signal de changement d'index à une nouvelle méthode dans votre constructeur
    connect(ui->type_m, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::updateImage);


    //////////////////////////////////////////////
    // Connecter les boutons aux pages dans QStackedWidget

   /* connect(ui->ajoutcentreBtn, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->ajoutcentre); // Changez le widget correspondant
    });*/



    connect(ui->stat, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->stat);
    });

    /*connect(ui->exportButton, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->exportpage);
    });*/

    connect(ui->donneesBtn, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->donnees);
    });
    //
    // Dans votre MainWindow, dans le constructeur ou la méthode d'initialisation

    // Ajout d'icônes et de Tooltips pour les boutons

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
    ui->stackedWidget_2->setCurrentWidget(ui->page);
    startBlinkingEffect(ui->widget_2); // Appel de la méthode pour faire clignoter le widget

}

void MainWindow::showPage2() {
    ui->stackedWidget->setCurrentWidget(ui->page_2);
}

void MainWindow::showPage3() {
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}





//////////////////////////////////////////////////////////////////////////////////

void MainWindow::showEmployes() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_2->setCurrentWidget(ui->employes);
}
void MainWindow::showVehicules() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_2->setCurrentWidget(ui->vehicules);
}
//////////////////////////////////
void MainWindow::showMachines() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);
    //setupSlidingAnimation(ui->widget_3);


    ui->stackedWidget_2->setCurrentWidget(ui->machines);
    setupTable(); // Afficher les données lors de l'initialisation



}
/////////////////////////////////




void MainWindow::showTrensactions() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_2->setCurrentWidget(ui->trensactions);
}


void MainWindow::showApropos() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_2->setCurrentWidget(ui->apropos);
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

/*id MainWindow::setupSlidingAnimation(QWidget* widget)
{
    // Obtenez les dimensions du parent et du widget
    int parentWidth = widget->parentWidget()->width();
    int widgetWidth = widget->width();

    // Animation de position
    QPropertyAnimation* slideAnimation = new QPropertyAnimation(widget, "pos", this);

    // Configuration de l'animation
    slideAnimation->setDuration(8000);  // Durée totale d'un cycle (3 secondes)
    slideAnimation->setStartValue(QPoint(-widgetWidth, widget->y()));  // Commence hors de la zone visible (à gauche)
    slideAnimation->setEndValue(QPoint(parentWidth, widget->y()));  // Termine hors de la zone visible (à droite)
    slideAnimation->setEasingCurve(QEasingCurve::Linear);

    // Recommence l'animation en boucle
    connect(slideAnimation, &QPropertyAnimation::finished, [=]() {
        widget->move(-widgetWidth, widget->y());  // Réinitialise la position du widget à gauche
        slideAnimation->start();  // Redémarre l'animation
    });

    // Démarre l'animation
    slideAnimation->start();
}*/



////////////////////////////////////////////////////////////////////


void MainWindow::on_confirmerMachine_clicked() {
    // Récupération des données depuis les champs de l'interface
    QString id_machine_str = ui->id_machine->text();
    int id_machine = id_machine_str.toInt();
    QString type_m = ui->type_m->currentText();
    QString statut_m = ui->statut_m->currentText();
    QDate date_maintenance = ui->date_maintenance->date();
    QString localisation = ui->localisation->currentText();
    // Vérification que tous les champs sont remplis
    if (id_machine_str.isEmpty() || type_m == "Choisir" || statut_m == "Choisir" || localisation == "Choisir") {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs.");
        return; // Interrompt l'exécution si un champ est vide ou non sélectionné
    }

    // Vérification si l'ID de machine est un entier de trois chiffres maximum
    QRegularExpression re("^\\d{1,3}$"); // Regex pour un nombre entier de 1 à 3 chiffres
    QRegularExpressionMatch match = re.match(id_machine_str);
    if (!match.hasMatch()) {
        QMessageBox::warning(this, "Erreur", "L'ID de machine doit être un entier de trois chiffres maximum.");
        return; // Interrompt l'exécution si l'ID n'est pas valide
    }

    // Vérifier si la date est valide avant d'exécuter la requête
    if (!date_maintenance.isValid() || date_maintenance < QDate::currentDate()) {
        QMessageBox::critical(this, "Erreur", "La date de maintenance n'est pas valide.");
        return; // Interrompt l'exécution si la date est incorrecte
    }

    // Vérifier si l'ID existe déjà dans le tableau
    bool idExists = false;
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableMachine->model());
    if (model) {
        for (int row = 0; row < model->rowCount(); ++row) {
            int existingId = model->item(row, 1)->text().toInt(); // Colonne 1 contient l'ID de machine
            if (existingId == id_machine) {
                idExists = true;
                break;
            }
        }
    }

    if (idExists) {
        QMessageBox::critical(this, "Erreur", "L'ID de machine existe déjà dans la table.");
        return; // Interrompt l'exécution si l'ID existe déjà
    }

         // Création d'un objet Machine
    Machine M(id_machine, type_m, statut_m, date_maintenance, localisation);

    // Appel de la méthode d'ajout
    if (M.ajouter() ) {
        QMessageBox::information(this, QObject::tr("Succès"),
                                 QObject::tr("Ajout effectué.\nCliquez sur Annuler pour quitter."),
                                 QMessageBox::Cancel);
        setupTable(); // Rafraîchit la table après un ajout réussi
    } else {
        QMessageBox::critical(this, QObject::tr("Échec"),
                              QObject::tr("Échec de l'ajout.\nCliquez sur Annuler pour quitter."),
                              QMessageBox::Cancel);
    }
}




void MainWindow::setupTable()
{
    Machine machine;
    QStandardItemModel *model = machine.afficher();
    ui->tableMachine->setModel(model);

    // Ajustement de la largeur des colonnes
    ui->tableMachine->setColumnWidth(0, 5); // Taille pour la colonne de sélection
    ui->tableMachine->setColumnWidth(1, 30); // Taille pour ID Machine
    ui->tableMachine->setColumnWidth(2, 120); // Taille pour Type Machine
    ui->tableMachine->setColumnWidth(3, 120); // Taille pour Statut Machine
    ui->tableMachine->setColumnWidth(4, 120); // Taille pour Date de Maintenance
    ui->tableMachine->setColumnWidth(5, 110); // Taille pour Localisation

    // Ajustement de la hauteur par défaut des lignes
    ui->tableMachine->verticalHeader()->setDefaultSectionSize(35);

    // Optionnel : Redimensionnement automatique des colonnes
    //ui->tableMachine->resizeColumnsToContents();
}

void MainWindow::checkAllRows() {
    QStandardItemModel* model = qobject_cast<QStandardItemModel*>(ui->tableMachine->model());
    if (model) {
        for (int row = 0; row < model->rowCount(); ++row) {
            QStandardItem* item = model->item(row, 0); // Supposant que la première colonne est celle des cases à cocher
            if (item) {
                item->setCheckState(Qt::Checked);
            }
        }
    }
}


void MainWindow::on_supprimerMachine_clicked() {
    QStandardItemModel* model = qobject_cast<QStandardItemModel*>(ui->tableMachine->model());

    // Parcourir les lignes et supprimer celles cochées
    for (int row = model->rowCount() - 1; row >= 0; --row) {
        QStandardItem* checkItem = model->item(row, 0);
        if (checkItem && checkItem->checkState() == Qt::Checked) {
            int id_machine = model->item(row, 1)->text().toInt();
            if (Machine::supprimerMachine(id_machine)) {
                model->removeRow(row); // Supprime la ligne de l'affichage
            }
        }
    }
    setupTable(); // Recharge les données après suppression
}


void MainWindow::on_modifierButton_clicked() {
    QStandardItemModel* model = qobject_cast<QStandardItemModel*>(ui->tableMachine->model());
    for (int row = model->rowCount() - 1; row >= 0; --row) {
        QStandardItem* checkItem = model->item(row, 0);
        if (checkItem->checkState() == Qt::Checked) {

            //int row = selectedRows.first().row();
            QString idMachine = ui->tableMachine->model()->data(ui->tableMachine->model()->index(row, 1)).toString();
            QString typeMachine = ui->tableMachine->model()->data(ui->tableMachine->model()->index(row, 2)).toString();
            QString statutMachine = ui->tableMachine->model()->data(ui->tableMachine->model()->index(row, 3)).toString();
            QString dateMaintenance = ui->tableMachine->model()->data(ui->tableMachine->model()->index(row, 4)).toString();
            QString localisation = ui->tableMachine->model()->data(ui->tableMachine->model()->index(row, 5)).toString();

            modifiermachine dialog(this);
            dialog.setDetails({idMachine, typeMachine, statutMachine, dateMaintenance, localisation});
            if (dialog.exec() == QDialog::Accepted) {
                QStringList updatedDetails = dialog.getDetails();

        }
    }
        setupTable(); // Afficher les données lors de l'initialisation

    }
}

void MainWindow::sortTable(int index) {
    QStandardItemModel* model = qobject_cast<QStandardItemModel*>(ui->tableMachine->model());
    if (!model) return; // Vérifie que le modèle est valide

    // Si l'index est 0 (Choisir), ne rien faire
    if (index == 0) {
        return;
    }

    // Déterminer la colonne à trier en fonction de l'index sélectionné dans comboBoxtrie
    int columnToSort = -1;
    Qt::SortOrder order = Qt::AscendingOrder; // Par défaut, ordre croissant

    switch (index) {
    case 1:
        columnToSort = 5; // Localisation (index de la colonne Localisation)
        order = Qt::AscendingOrder; // Tri alphabétique croissant
        break;
    case 2:
        columnToSort = 2; // Type (index de la colonne Type)
        order = Qt::AscendingOrder; // Tri alphabétique croissant
        break;
    case 3:
        columnToSort = 4; // Date de maintenance (index de la colonne Date)
        order = Qt::AscendingOrder; // Tri par date la plus proche
        break;
    default:
        return; // Ne rien faire si l'index n'est pas valide
    }

    // Appliquer le tri sur la colonne choisie
    ui->tableMachine->sortByColumn(columnToSort, order);
}


void MainWindow::on_searchLineEdit_textChanged(const QString &text)
{
    if (text.isEmpty()) {
        // Si le texte est vide, réinitialisez le modèle pour afficher toutes les données
        setupTable();  // Cette fonction réinitialise le tableau avec toutes les données de la base
        return;
    }

    // Créer la requête SQL avec une recherche basée sur toutes les colonnes
    QString queryString = "SELECT * FROM machine WHERE id_machine LIKE :searchText "
                          "OR type_m LIKE :searchText "
                          "OR statut_m LIKE :searchText "
                          "OR date_maintenance LIKE :searchText "
                          "OR localisation LIKE :searchText";

    QSqlQuery query;
    query.prepare(queryString);
    query.bindValue(":searchText", "%" + text + "%");  // Recherche insensible à la casse

    if (!query.exec()) {
        qDebug() << "Erreur de recherche dans la base de données: " << query.lastError().text();
        return;
    }

    // Créer un modèle standard pour ajouter la colonne de cases à cocher
    QStandardItemModel *model = new QStandardItemModel(this);

    // Ajouter la première colonne pour les cases à cocher
    model->setColumnCount(query.record().count() + 1);  // Une colonne supplémentaire pour la case à cocher

    // Ajouter l'entête des colonnes (en ajoutant une colonne pour la case à cocher)
    model->setHorizontalHeaderItem(0, new QStandardItem("Select"));
    for (int i = 0; i < query.record().count(); ++i) {
        model->setHorizontalHeaderItem(i + 1, new QStandardItem(query.record().fieldName(i)));
    }

    // Remplir le modèle avec les résultats de la requête
    int row = 0;
    while (query.next()) {
        QList<QStandardItem*> rowItems;

        // Ajouter une case à cocher dans la première colonne
        QStandardItem *checkItem = new QStandardItem();
        checkItem->setCheckable(true);  // Rendre la case cliquable
        checkItem->setCheckState(Qt::Unchecked);  // Par défaut, la case est décochée
        rowItems.append(checkItem);

        // Ajouter les données des autres colonnes
        for (int i = 0; i < query.record().count(); ++i) {
            QStandardItem *dataItem = new QStandardItem(query.value(i).toString());
            rowItems.append(dataItem);
        }

        model->appendRow(rowItems);
        ++row;
    }

    // Appliquer le modèle à la vue
    ui->tableMachine->setModel(model);
}


// Fonction pour charger toutes les données depuis la base de données
void MainWindow::loadDataFromDatabase()
{
    QSqlQuery query("SELECT * FROM machines");
    if (query.exec()) {
        QSqlTableModel *model = new QSqlTableModel(this);
        model->setTable("machines");
        model->setQuery(query);

        // Mettre à jour le modèle des données dans le tableau
        ui->tableMachine->setModel(model);
    } else {
        qDebug() << "Erreur lors du chargement des données: " << query.lastError().text();
    }
}
////////////////////////////////
void MainWindow::exportToPDF()
{
    // Ouvrir une boîte de dialogue pour choisir où enregistrer le fichier PDF
    QString fileName = QFileDialog::getSaveFileName(this, tr("Exporter en PDF"), "", tr("Fichiers PDF (*.pdf)"));

    if (fileName.isEmpty()) {
        return; // Annuler si aucun fichier n'a été choisi
    }

    // Obtenir le modèle actuellement utilisé par tableMachine
    QAbstractItemModel *model = ui->tableMachine->model();
    if (!model) {
        qDebug() << "Aucun modèle trouvé pour tableMachine.";
        return;
    }

    // Indices des colonnes à exporter (dans l'ordre correct)
    QVector<int> columnIndices = {1, 2, 3, 4, 5}; // ID, TYPE, STATUT, D.MAINT, LOCALISATION

    // Titres correspondants pour les colonnes
    QStringList columnTitles = {"ID", "TYPE", "STATUT", "D.MAINT", "LOCALISATION"};

    // Créer un objet QPdfWriter pour générer le fichier PDF
    QPdfWriter writer(fileName);
    writer.setPageSize(QPageSize::A4);
    writer.setResolution(300);

    QPainter painter(&writer);
    if (!painter.isActive()) {
        qDebug() << "Erreur lors de l'initialisation du QPainter pour le PDF.";
        return;
    }

    // Configurer les polices
    QFont titleFont("Arial", 20, QFont::Bold);
    QFont columnFont("Arial", 12, QFont::Bold);
    QFont dataFont("Arial", 10);

    // Calculer la hauteur et largeur de la page
    int pageHeight = writer.height();
    int pageWidth = writer.width();
    int marginLeft = 20;
    int marginTop = 20;
    int marginBottom = 20;

    // Calculer les largeurs des colonnes dynamiquement
    QVector<int> columnWidths;
    painter.setFont(columnFont);

    for (const QString &title : columnTitles) {
        int width = painter.fontMetrics().horizontalAdvance(title) + 20; // Ajouter une marge
        columnWidths.append(width);
    }

    // Calculer la largeur totale et ajuster proportionnellement
    int totalWidth = std::accumulate(columnWidths.begin(), columnWidths.end(), 0);
    double scaleFactor = (pageWidth - marginLeft * 2) / static_cast<double>(totalWidth);

    for (int &width : columnWidths) {
        width = static_cast<int>(width * scaleFactor);
    }

    // Dessiner le titre du tableau
    painter.setFont(titleFont);
    painter.setPen(QPen(Qt::darkBlue));

    QString title = "Tableau des Machines";
    int titleWidth = painter.fontMetrics().horizontalAdvance(title);
    int titleX = (pageWidth - titleWidth) / 2; // Centrer le titre horizontalement
    painter.drawText(titleX, marginTop, title);

    marginTop += 80; // Espacement sous le titre

    // Dessiner les en-têtes de colonnes
    painter.setFont(columnFont);
    painter.setPen(QPen(Qt::black));

    int x = marginLeft;
    int y = marginTop;
    for (int i = 0; i < columnTitles.size(); ++i) {
        painter.drawText(x, y, columnWidths[i], 40, Qt::AlignCenter, columnTitles[i]);
        x += columnWidths[i];
    }

    y += 40; // Espacement après les en-têtes

    // Dessiner les données affichées dans la table
    painter.setFont(dataFont);
    for (int row = 0; row < model->rowCount(); ++row) {
        x = marginLeft;
        for (int col = 0; col < columnIndices.size(); ++col) {
            int modelCol = columnIndices[col];
            QString cellText = model->data(model->index(row, modelCol)).toString();

            // Appliquer la couleur rouge à la colonne ID (col == 0)
            if (col == 0) {
                painter.setPen(QPen(Qt::red));
            } else {
                painter.setPen(QPen(Qt::black));
            }

            painter.drawText(x, y, columnWidths[col], 40, Qt::AlignCenter, cellText);
            x += columnWidths[col];
        }
        y += 40; // Espacement entre les lignes

        // Si la page est pleine, ajouter une nouvelle page
        if (y > pageHeight - marginBottom) {
            painter.end();
            writer.newPage();
            painter.begin(&writer);

            // Redessiner les en-têtes
            painter.setFont(columnFont);
            painter.setPen(QPen(Qt::black));
            x = marginLeft;
            y = marginTop;

            for (int i = 0; i < columnTitles.size(); ++i) {
                painter.drawText(x, y, columnWidths[i], 40, Qt::AlignCenter, columnTitles[i]);
                x += columnWidths[i];
            }
            y += 40;
        }
    }

    painter.end();
    qDebug() << "Export PDF terminé!";
}





///////////////////////////
// Méthode pour mettre à jour l'image
void MainWindow::updateImage(int index) {
    QString imagePath;

    // Déterminer le chemin de l'image en fonction de l'élément sélectionné
    switch (index) {
    case 1:
        imagePath = "C:/Users/21658/Desktop/projet2024-2025/mech/tourcnc.png";
        break;
    case 2:
        imagePath = "C:/Users/21658/Desktop/projet2024-2025/mech/fraiseusecnc.jpg";
        break;
    case 3:
        imagePath = "C:/Users/21658/Desktop/projet2024-2025/mech/robotindustriel.jpg";
        break;
    case 4:
        imagePath = "C:/Users/21658/Desktop/projet2024-2025/mech/imprimente3d.jpg";
        break;
    default:
        return; // Sortir si l'index est invalide
    }

    // Charger et afficher l'image dans typelabel
    QPixmap pixmap(imagePath);
    if (!pixmap.isNull()) {
        ui->typelabel->setPixmap(pixmap.scaled(ui->typelabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        qDebug() << "Erreur : Image non trouvée à " << imagePath;
    }
}

void MainWindow::setupButtons()
{
    // Initialiser les animations pour chaque bouton
    iconAnimation_ajoutcentre = new QPropertyAnimation(ui->ajoutcentreBtn, "iconSize");
    iconAnimation_stat = new QPropertyAnimation(ui->stat, "iconSize");
    iconAnimation_export = new QPropertyAnimation(ui->exportButton, "iconSize");
    iconAnimation_donnees = new QPropertyAnimation(ui->donneesBtn, "iconSize");
    iconAnimation_calendrier = new QPropertyAnimation(ui->calendrierBtn, "iconSize");

    // Paramètres des animations
    for (QPropertyAnimation* animation : {iconAnimation_ajoutcentre,
                                          iconAnimation_stat, iconAnimation_export,
                                          iconAnimation_donnees, iconAnimation_calendrier})
    {
        animation->setDuration(300);
        animation->setEasingCurve(QEasingCurve::OutQuad);
    }

    // Style transparent et centrage des icônes pour chaque bouton
    for (QPushButton* button : {ui->ajoutcentreBtn, ui->stat, ui->exportButton, ui->donneesBtn, ui->calendrierBtn})
    {
        button->setFlat(true);  // Fond transparent
        button->setIconSize(QSize(30, 30));  // Taille initiale de l'icône
        button->setStyleSheet(
            "QPushButton { background: transparent; border: none; padding: 10px; }"
            "QPushButton { font-size: 12px; color: transparent; }"
            "QPushButton:hover { color: black; }"
            );  // Le texte est transparent par défaut et s'affiche au survol
        button->installEventFilter(this);

        // Assurez-vous que chaque bouton a une icône définie
        if (button == ui->donneesBtn) {
            button->setIcon(QIcon(":/icons/donneesIcon.png"));  // Remplacez par votre icône
        } else if (button == ui->calendrierBtn) {
            button->setIcon(QIcon(":/icons/calendriericon.png"));  // Remplacez par votre icône
        }
    }
}


bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    QPushButton *button = qobject_cast<QPushButton *>(watched);
    if (!button)
        return false;

    if (event->type() == QEvent::Enter) {
        QPropertyAnimation* animation = nullptr;

        if (button == ui->ajoutcentreBtn) {
            animation = iconAnimation_ajoutcentre;
            button->setText("emplacement");
        } else if (button == ui->stat) {
            animation = iconAnimation_stat;
            button->setText("Statistiques");
        } else if (button == ui->exportButton) {
            animation = iconAnimation_export;
            button->setText("Exporter PDF");
        } else if (button == ui->calendrierBtn) {
            animation = iconAnimation_calendrier;
            button->setText("Calendrier");
        } else if (button == ui->donneesBtn) {
            animation = iconAnimation_donnees;
            button->setText("Afficher les données");
        }

        if (animation) {
            animation->setStartValue(QSize(30, 30));
            animation->setEndValue(QSize(50, 50));  // Agrandir l'icône
            animation->start();
        }

    } else if (event->type() == QEvent::Leave) {
        QPropertyAnimation* animation = nullptr;

        if (button == ui->ajoutcentreBtn) {
            animation = iconAnimation_ajoutcentre;
            button->setText("");
        } else if (button == ui->stat) {
            animation = iconAnimation_stat;
            button->setText("");
        } else if (button == ui->exportButton) {
            animation = iconAnimation_export;
            button->setText("");
        } else if (button == ui->calendrierBtn) {
            animation = iconAnimation_calendrier;
            button->setText("");
        } else if (button == ui->donneesBtn) {
            animation = iconAnimation_donnees;
            button->setText("");
        }

        if (animation) {
            animation->setStartValue(QSize(50, 50));
            animation->setEndValue(QSize(30, 30));  // Réduire l'icône
            animation->start();
        }
    }
    return false;
}


///////////////////////////////

void MainWindow::on_stat_clicked()
{
    // Effacer les anciennes données
    QLayout *layout = ui->verticalLayoutStat;
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            delete item->widget();
        }
        delete item;
    }

    // Connexion à la base de données
    QSqlQuery query;
    query.prepare("SELECT LOCALISATION, COUNT(ID_MACHINE) AS total_machines "
                  "FROM MACHINE "
                  "GROUP BY LOCALISATION");

    if (query.exec()) {
        // Créer un QBarSet pour les valeurs des barres
        QBarSet *set = new QBarSet("Total Machines");

        // Définir des couleurs vives pour les barres
        set->setColor(QColor(255, 16, 16));  // rouge
        set->setBorderColor(QColor(0, 0, 0)); // Noir pour les contours

        // Créer un tableau pour les catégories (localisations)
        QStringList categories;

        // Remplir les données
        while (query.next()) {
            QString localisation = query.value(0).toString();
            int totalMachines = query.value(1).toInt();

            // Ajouter les données au QBarSet
            *set << totalMachines;
            categories.append(localisation);
        }

        // Créer une série de barres
        QBarSeries *series = new QBarSeries();
        series->append(set);

        // Activer l'effet 3D simulé
        series->setBarWidth(0.8);  // Barres légèrement espacées pour un effet visuel
        series->setLabelsVisible(true);
        series->setLabelsFormat("@value");

        // Créer un graphique
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Statistiques des Machines");
        QFont titleFont = chart->titleFont();
        titleFont.setPointSize(16);  // Augmenter la taille de la police (par exemple, 16)
        titleFont.setBold(true);     // Rendre le titre en gras
        chart->setTitleFont(titleFont);
        chart->setTitleBrush(QBrush(Qt::white));  // Titre en blanc
        chart->setAnimationOptions(QChart::AllAnimations);

        // Ajouter des couleurs vives au fond
        chart->setBackgroundBrush(QBrush(QColor(30, 30, 30))); // Fond sombre (gris foncé)
        chart->setBackgroundRoundness(15);

        // Créer un axe des catégories pour les localisations
        QBarCategoryAxis *axisX = new QBarCategoryAxis();
        axisX->append(categories);
        chart->addAxis(axisX, Qt::AlignBottom);
        series->attachAxis(axisX);
        axisX->setLabelsFont(QFont("Arial", 12, QFont::Bold));  // Police Arial, taille 12, gras
        axisX->setLabelsColor(Qt::white);  // Couleur des labels en blanc

        // Récupérer la valeur maximale du QBarSet pour ajuster l'axe Y
        qreal maxValue = 0;
        for (int i = 0; i < set->count(); ++i) {
            qreal value = set->at(i);
            if (value > maxValue) {
                maxValue = value;
            }
        }

        // Créer un axe des valeurs pour le nombre de machines
        QValueAxis *axisY = new QValueAxis();
        axisY->setRange(0, maxValue * 1.2); // Ajouter un espace en haut
        axisY->setTitleText("Nombre de Machines");
        axisY->setLabelsFont(QFont("Arial", 12, QFont::Bold));  // Police Arial, taille 12, gras
        axisY->setLabelsColor(Qt::white);  // Couleur des labels en blanc
        axisY->setLabelFormat("%d");
        axisY->setTitleBrush(QBrush(Qt::white));  // Titre de l'axe Y en blanc
        chart->addAxis(axisY, Qt::AlignLeft);
        series->attachAxis(axisY);

        // Créer le QChartView pour afficher le graphique
        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);

        // Ajouter des ombres aux barres
        //chartView->setStyleSheet("QChartView { border: 2px solid #FF1493; border-radius: 10px; }"); // Bordure rose vif

        // Ajouter le QChartView à votre interface
        ui->verticalLayoutStat->addWidget(chartView);

        // Afficher la page des statistiques dans le stackedWidget_3
        ui->stackedWidget_3->setCurrentIndex(2); // Index de la page "statistiques"

    } else {
        qDebug() << "Erreur lors de l'exécution de la requête : " << query.lastError();
    }
}




/////////////////////
void MainWindow::on_donneesBtn_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(1);  // Navigue vers la page "données"
}
////////////


//////////////////////////
///

void MainWindow::initMap() {
    // Créer un QQuickWidget pour afficher la carte
    QQuickWidget *mapWidget = new QQuickWidget(this);


    // Charger la carte depuis les ressources Qt en utilisant le chemin qrc:/map/map.qml
    mapWidget->setSource(QUrl(QStringLiteral("qrc:/map.qml")));  // Correct, utilisant qrc:// pour les ressources
    mapWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);

    // Ajouter le widget QQuickWidget dans le layout
    QVBoxLayout *layout = qobject_cast<QVBoxLayout *>(ui->mapcentre->layout());
    if (!layout) {
        layout = new QVBoxLayout(ui->mapcentre);
        ui->mapcentre->setLayout(layout);
    }

    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(mapWidget);
}



void MainWindow::on_ajoutcentreBtn_clicked() {
    ui->stackedWidget_3->setCurrentIndex(0);  // Naviguer vers la page "map"

    // Supprimer l'ancien widget de la carte si il existe
    if (ui->mapcentre->layout()) {
        QLayoutItem* item;
        while ((item = ui->mapcentre->layout()->takeAt(0)) != nullptr) {
            delete item->widget();  // Supprimer le widget existant
            delete item;
        }
    }

    initMap();  // Initialiser ou charger la carte après avoir supprimé l'ancienne
}
/////////////////////////////

// Obtenir les dates de maintenance de la base de données
        QList<QDate> MainWindow::getMaintenanceDates()
{
    QList<QDate> maintenanceDates;
    QSqlQuery query;

    // Requête SQL pour récupérer les dates de maintenance
    if (query.exec("SELECT date_maintenance FROM machine")) {
        while (query.next()) {
            QDate date = query.value(0).toDate();  // Convertir la valeur en QDate
            if (date.isValid()) {
                maintenanceDates.append(date);
            }
        }
    } else {
        qDebug() << "Erreur lors de la récupération des dates :" << query.lastError().text();
    }

    return maintenanceDates;
}

// Obtenir les données de la machine pour une date spécifique
QList<QVariant> MainWindow::getMachineDataForDate(const QDate& date)
{
    QList<QVariant> machineData;
    QSqlQuery query;

    // Requête SQL pour récupérer les données de la machine pour une date spécifique
    query.prepare("SELECT id_machine, type_m, statut_m, localisation FROM machine WHERE date_maintenance = :date");
    query.bindValue(":date", date);

    if (query.exec()) {
        if (query.next()) {
            // Ajouter les données récupérées à la liste
            machineData.append(query.value(0)); // id_machine
            machineData.append(query.value(1)); // type_m
            machineData.append(query.value(2)); // statut_m
            machineData.append(query.value(3)); // localisation
        }
    } else {
        qDebug() << "Erreur lors de la récupération des données pour la date" << date.toString("dd/MM/yyyy") << ":" << query.lastError().text();
    }

    return machineData;
}

// Afficher le QDialog avec les données de la machine
void MainWindow::showMachineDataDialog(const QList<QVariant>& machineData)
{
    // Créer une instance du QDialog
    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle("Détails de la machine");

    // Créer les labels pour afficher les informations
    QLabel *idMachineLabel = new QLabel(QString("ID Machine: %1").arg(machineData[0].toInt()), dialog);
    QLabel *typeMachineLabel = new QLabel(QString("Type: %1").arg(machineData[1].toString()), dialog);
    QLabel *statutMachineLabel = new QLabel(QString("Statut: %1").arg(machineData[2].toString()), dialog);
    QLabel *localisationLabel = new QLabel(QString("Localisation: %1").arg(machineData[3].toString()), dialog);

    // Disposer les labels dans une mise en page verticale
    QVBoxLayout *layout = new QVBoxLayout(dialog);
    layout->addWidget(idMachineLabel);
    layout->addWidget(typeMachineLabel);
    layout->addWidget(statutMachineLabel);
    layout->addWidget(localisationLabel);

    // Appliquer une feuille de style pour un fond blanc et du texte noir
    dialog->setStyleSheet("background-color: white; color: black;");

    // Afficher la boîte de dialogue
    dialog->exec();
}

// Configurer le calendrier et marquer les dates
void MainWindow::setupCalendar()
{
    QCalendarWidget* calendar = ui->calendarWidget;
    calendar->setGridVisible(true);
    calendar->setFirstDayOfWeek(Qt::Monday);

    // Marquer les dates de maintenance
    markMaintenanceDates(calendar);

    // Connexion au signal de changement de sélection
    connect(calendar, &QCalendarWidget::selectionChanged, this, [=]() {
        QDate selectedDate = calendar->selectedDate();
        qDebug() << "Date sélectionnée :" << selectedDate.toString("dd/MM/yyyy");
    });
    //connect(calendar, &QCalendarWidget::selectionChanged, this, &MainWindow::onDateSelected);
}

// Marquer les dates de maintenance sur le calendrier
void MainWindow::markMaintenanceDates(QCalendarWidget* calendar)
{
    // Récupérer les dates de maintenance
    QList<QDate> maintenanceDates = getMaintenanceDates();

    // Définir un format pour les dates marquées
    QTextCharFormat maintenanceFormat;
    maintenanceFormat.setBackground(QBrush(Qt::red));  // Fond rouge pour indiquer les dates importantes
    maintenanceFormat.setForeground(QBrush(Qt::white));  // Texte blanc
    maintenanceFormat.setFontWeight(QFont::Bold);  // Texte en gras

    // Appliquer le format aux dates dans le calendrier
    for (const QDate& date : maintenanceDates) {
        calendar->setDateTextFormat(date, maintenanceFormat);
    }
}

// Rafraîchir le calendrier avec les dates de maintenance
void MainWindow::refreshCalendar(QCalendarWidget* calendar, const QList<QDate>& maintenanceDates)
{
    // Réinitialiser les formats des dates
    QTextCharFormat defaultFormat;  // Format par défaut
    QDate minDate = calendar->minimumDate();
    QDate maxDate = calendar->maximumDate();

    for (QDate date = minDate; date <= maxDate; date = date.addDays(1)) {
        calendar->setDateTextFormat(date, defaultFormat);  // Réinitialiser chaque date
    }

    // Appliquer les formats aux dates de maintenance
    QTextCharFormat highlightFormat;
    highlightFormat.setBackground(QBrush(Qt::yellow));
    highlightFormat.setForeground(QBrush(Qt::black));

    for (const QDate& date : maintenanceDates) {
        calendar->setDateTextFormat(date, highlightFormat);
    }
}

// Gestion du bouton pour afficher le calendrier
void MainWindow::on_calendrierBtn_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(3);  // Naviguer vers la page "map"
    setupCalendar();  // Configurer et marquer les dates
}

// Lorsque l'utilisateur sélectionne une date
void MainWindow::onDateSelected()
{
    // Récupérer la date sélectionnée
    QDate selectedDate = ui->calendarWidget->selectedDate();
    qDebug() << "Date sélectionnée :" << selectedDate.toString("dd/MM/yyyy");

    // Récupérer les données de la base de données pour la date sélectionnée
    QList<QVariant> machineData = getMachineDataForDate(selectedDate);

    if (!machineData.isEmpty()) {
        // Afficher le QDialog avec les données de la machine
        showMachineDataDialog(machineData);
    } else {
        // Si aucune donnée n'est trouvée pour cette date
        QMessageBox::information(this, "Aucune donnée", "Aucune donnée disponible pour cette date.");
    }
}




/////////////////////////////////////gestion employes///////////////////////////////////////////////////////////////////////////////


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
void MainWindow::on_ButtonCreer_clicked() {
    // Récupération des données depuis les champs de l'interface
    int cin_u = ui->cin_u->text().toInt();  // Convertir directement en entier
    QString passwordText = ui->mdp_u->text();  // Mot de passe
    QString firstname = ui->firstname_u->text();  // Prénom
    QString lastname = ui->lastname_u->text();    // Nom
    double phonenumber = ui->phone_u->text().toDouble();  // Numéro de téléphone
    QString email = ui->email_u->text();  // Email
    QString role = ui->rolee_u->currentText();  // Rôle

    // Création de l'objet Utilisateur
    utilisateur Uu(cin_u, firstname, lastname, phonenumber, passwordText, email, role);

    // Appel de la méthode d'ajout
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
    QString cinText = ui->cin_c->text();  // CIN from QLineEdit
    QString passwordText = ui->mdp_c->text();  // Password from QLineEdit

    // CIN validation (should be exactly 8 digits)
    if (!QRegularExpression("^[0-9]{8}$").match(cinText).hasMatch()) {
        QMessageBox::critical(this, tr("Échec"),
                              tr("Le CIN doit être un nombre de 8 chiffres.\nCliquez sur Annuler pour quitter."),
                              QMessageBox::Cancel);
        return(false);
    }

    // Password validation (cannot be empty)
    if (passwordText.isEmpty()) {
        QMessageBox::critical(this, tr("Échec"),
                              tr("Le mot de passe ne peut pas être vide.\nCliquez sur Annuler pour quitter."),
                              QMessageBox::Cancel);
        return(false);

    }

    // Convert CIN to integer
    int cin_n = cinText.toInt();

    // Create the Utilisateur object and attempt to connect
    if (U.connectionUser(cin_n, passwordText)) {
        // If login is successful, proceed to the next window
        QMessageBox::information(this, tr("Succès"),
                                 tr("Connexion réussie !\nBienvenue dans l'application."),
                                 QMessageBox::Ok);

        // Open the central page or main window
        showPagecentral();
        return (true);        // Make sure this function is defined in your class to show the next page

        // Hide the current window (optional)
        // Hide the login window
    } else {
        QMessageBox::critical(this, tr("Échec"),
                              tr("Échec de la connexion : CIN ou mot de passe incorrect.\nVeuillez réessayer."),
                              QMessageBox::Cancel);
    }
}
void MainWindow::showPieChart(int disponibleCount, int occupeCount) {
    QPieSeries *series = new QPieSeries();
    series->append("Disponible", disponibleCount);
    series->append("Occupé", occupeCount);

    // Optional: highlight the sections
    QPieSlice *disponibleSlice = series->slices().at(0);
    QPieSlice *occupeSlice = series->slices().at(1);
    disponibleSlice->setLabelVisible();
    occupeSlice->setLabelVisible();
    disponibleSlice->setBrush(Qt::green);
    occupeSlice->setBrush(Qt::red);

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
void MainWindow::on_send_clicked()
{
    QString cin_u = ui->cinLine->text();
    QString email_u = ui->emailLine->text();
    QString phoneNumber = ui->phoneLine->text();

    if (cin_u.isEmpty() || email_u.isEmpty() || phoneNumber.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter CIN, Email, and Phone Number.");
        return;
    }

    // Open the database and check if the CIN, Email, and Phone Number match a record
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        if (!db.open()) {
            QMessageBox::critical(this, "Database Error", "Failed to connect to the database.");
            return;
        }
    }

    // Query the database for the password using the CIN, Email, and Phone Number
    QSqlQuery query;
    query.prepare("SELECT MDP_U FROM utilisateur WHERE CIN_U = :cin AND EMAIL_U = :email AND PHONENUMBER_U = :phone");
    query.bindValue(":cin", cin_u);
    query.bindValue(":email", email_u);
    query.bindValue(":phone", phoneNumber);

    if (query.exec() && query.next()) {
        QString password = query.value(0).toString();

        // Construct the WhatsApp message link
        QString message = QString("Your password is: %1").arg(password);
        QString link = QString("https://wa.me/%1?text=%2").arg(phoneNumber, QUrl::toPercentEncoding(message));

        // Open the WhatsApp link in the default browser
        QDesktopServices::openUrl(QUrl(link));

        QMessageBox::information(this, "WhatsApp Link", "A WhatsApp message has been generated. Click the link to send your password.");
    } else {
        QMessageBox::warning(this, "Error", "No matching record found. Please check your CIN, Email, and Phone Number.");
    }
}
void MainWindow::showPage4() {
    // Affiche le widget `pagecentral` dans le `stackedWidget`
    ui->stackedWidget->setCurrentWidget(ui->pagecentral);

    // Change le widget affiché dans `stackedWidget_2` pour afficher `employes`
    ui->stackedWidget_2->setCurrentWidget(ui->page_4);
}

void MainWindow::on_modif_u_clicked()
{
    int cin_u = ui->cin_c->text().toInt();
    if (on_ButtonConnecter_clicked()==true)
    {
        showPage4();
        QSqlQuery query;
        query.prepare("SELECT firstname_u, lastname_u, phonenumber_u,mdp_u,email_u,rolee_u FROM utilisateur WHERE CIN_U = :cin_u");
        query.bindValue(":cin_u", cin_u);

        if (query.exec() && query.next()) {
            // Populate the fields with the current values
            ui->nom_u->setText(query.value(0).toString());
            ui->prenom_u->setText(query.value(1).toString());
            ui->num_u->setText(query.value(2).toString());
            ui->mot_u->setText(query.value(3).toString());
            ui->mail_u->setText(query.value(4).toString());
            ui->role_u->setCurrentText(query.value(5).toString());;
        } else {
            QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                  QObject::tr("Impossible de récupérer les informations de l'employé."),
                                  QMessageBox::Cancel);
            return;
        }
    }else
    {            QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                              QObject::tr("Impossible de récupérer les informations de l'employé."),
                              QMessageBox::Cancel);
        return;}

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

    // Create the employee object with the updated data
    Uu = utilisateur(cin_u, nom_u, prenom_u,num_u,mot_u,mail_u,role_u);

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
