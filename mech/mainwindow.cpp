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
    connect(ui->ButtonConnecter, &QPushButton::clicked, this, &MainWindow::showPagecentral);
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

    // Créer un objet QSqlQuery pour la requête SQL
    QSqlQuery query;
    query.prepare("SELECT * FROM machine");

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête: " << query.lastError().text();
        return;
    }

    // Créer un QSqlQueryModel pour lier la requête et afficher les résultats
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(query);  // Appliquer la requête à ce modèle

    // Créer un objet QPdfWriter pour générer le fichier PDF
    QPdfWriter writer(fileName);
    writer.setPageSize(QPageSize::A4); // Utilisez QPageSize::A4
    writer.setResolution(300);

    // Créer un QPainter pour dessiner sur le PDF
    QPainter painter(&writer);
    if (!painter.isActive()) {
        qDebug() << "Erreur lors de l'initialisation du QPainter pour le PDF.";
        return;
    }

    // Calculer la hauteur de la page et les marges
    int pageHeight = writer.height();
    int pageWidth = writer.width();
    int marginLeft = 20;
    int marginTop = 20;
    int marginBottom = 20;
    int columnSpacing = 70;  // Espacement entre les colonnes
    int rowHeight = 60;      // Hauteur des lignes

    // Configurer la taille de la police pour le titre
    painter.setFont(QFont("Arial", 16, QFont::Bold));
    painter.setPen(QPen(Qt::darkBlue));  // Définir la couleur du texte

    // Calculer la largeur du titre pour le centrer
    QString title = "Tableau des Machines";
    int titleWidth = painter.fontMetrics().horizontalAdvance(title);
    int titleX = (pageWidth - titleWidth) / 2;  // Centrer le titre horizontalement

    painter.drawText(titleX, marginTop, title);
    marginTop += 80;  // Espacement sous le titre

    // Configurer la police pour les en-têtes de colonne
    QFont columnFont("Arial", 12, QFont::Bold);
    painter.setFont(columnFont);
    painter.setPen(QPen(Qt::black)); // Couleur du texte en noir

    int x = marginLeft;
    int y = marginTop;

    // Les en-têtes de colonnes spécifiés
    QStringList headers = {"ID", "Type", "Statut", "D.Maintenance", "Localisation"};
    int columnCount = headers.size();
    QVector<int> columnWidths(columnCount, 120); // Largeur par défaut pour chaque colonne

    // Calculer la largeur des colonnes en fonction du contenu
    for (int col = 0; col < columnCount; ++col) {
        int maxWidth = 0;
        for (int row = 0; row < model->rowCount(); ++row) {
            QString cellText = model->data(model->index(row, col)).toString();
            maxWidth = qMax(maxWidth, painter.fontMetrics().horizontalAdvance(cellText));  // Utilisation de horizontalAdvance
        }
        columnWidths[col] = maxWidth + 10 + columnSpacing;  // Ajouter un peu de marge et de l'espacement entre les colonnes
    }

    // Dessiner l'en-tête du tableau
    for (int i = 0; i < columnCount; ++i) {
        painter.drawText(x, y, columnWidths[i], rowHeight, Qt::AlignCenter, headers[i]);
        x += columnWidths[i];
    }

    y += rowHeight;  // Espacement après l'en-tête

    // Dessiner les données du tableau
    QFont dataFont("Arial", 10);
    painter.setFont(dataFont);  // Police plus petite pour les données

    for (int row = 0; row < model->rowCount(); ++row) {
        x = marginLeft;
        for (int col = 0; col < columnCount; ++col) {
            QString cellText = model->data(model->index(row, col)).toString();

            // Appliquer la couleur rouge à la colonne ID (col == 0 pour la première colonne)
            if (col == 0) {
                painter.setPen(QPen(Qt::red));  // Définir la couleur du texte en rouge
            } else {
                painter.setPen(QPen(Qt::black));  // Couleur du texte en noir pour les autres colonnes
            }

            painter.drawText(x, y, columnWidths[col], rowHeight, Qt::AlignCenter, cellText);
            x += columnWidths[col];
        }
        y += rowHeight;  // Espacement entre les lignes

        // Si la page est pleine, ajouter une nouvelle page
        if (y > pageHeight - marginBottom) {
            painter.end();
            writer.newPage();
            painter.begin(&writer);
            y = marginTop; // Réinitialiser la position verticale
            // Redessiner le titre et l'en-tête de colonne pour la nouvelle page
            painter.setFont(QFont("Arial", 16, QFont::Bold));
            painter.setPen(QPen(Qt::green));  // Titre vert
            painter.drawText(titleX, marginTop, title);
            marginTop += 40;
            x = marginLeft;
            // Redessiner l'en-tête
            for (int i = 0; i < columnCount; ++i) {
                painter.drawText(x, y, columnWidths[i], rowHeight, Qt::AlignCenter, headers[i]);
                x += columnWidths[i];
            }
            y += rowHeight;
        }
    }

    // Terminer l'écriture du PDF
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
            button->setText("Ajouter un centre");
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
/*void MainWindow::on_stat_clicked()
{
    // Effacer les anciennes données (si un graphique existe déjà dans le layout)
    QLayout *layout = ui->verticalLayoutStat;
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        // Supprimer les widgets du layout
        if (item->widget()) {
            delete item->widget();
        }
        // Supprimer les sous-layouts s'il y en a
        delete item;
    }

    // Connexion à la base de données
    QSqlQuery query;
    query.prepare("SELECT LOCALISATION, COUNT(ID_MACHINE) AS total_machines "
                  "FROM MACHINE "
                  "GROUP BY LOCALISATION");

    // Exécuter la requête
    if (query.exec()) {
        // Créer un QBarSet pour les valeurs des barres
        QBarSet *set = new QBarSet("Total Machines");

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

        // Créer un graphique
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Statistiques des Machines");
        chart->setAnimationOptions(QChart::SeriesAnimations);

        // Créer un axe des catégories pour les localisations
        QBarCategoryAxis *axisX = new QBarCategoryAxis();
        axisX->append(categories);
        chart->addAxis(axisX, Qt::AlignBottom);
        series->attachAxis(axisX);

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
        axisY->setRange(0, maxValue);  // Plage du graphique en fonction de la valeur maximale
        chart->addAxis(axisY, Qt::AlignLeft);
        series->attachAxis(axisY);

        // Créer le QChartView pour afficher le graphique
        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);

        // Ajouter le QChartView à votre interface
        ui->verticalLayoutStat->addWidget(chartView);  // Assurez-vous d'avoir un layout vertical pour le widget de statistiques

        // Afficher la page des statistiques dans le stackedWidget_3
        ui->stackedWidget_3->setCurrentIndex(2);  // Index de la page "statistiques" (index 2)

        // Appliquer une animation pour les barres
        QPropertyAnimation *animation = new QPropertyAnimation(chart, "opacity");
        animation->setDuration(1000);  // Durée de l'animation (en millisecondes)
        animation->setStartValue(0);   // Opacité de départ
        animation->setEndValue(1);     // Opacité finale
        animation->start();
    } else {
        qDebug() << "Erreur lors de l'exécution de la requête : " << query.lastError();
    }
}*/
/*
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
        set->setColor(QColor(255, 20, 20));  // Rouge fluo vif
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
        chart->setTitleBrush(QBrush(Qt::white));  // Changer la couleur du titre en blanc
        chart->setAnimationOptions(QChart::AllAnimations);

        // Ajouter des couleurs vives au fond
        chart->setBackgroundBrush(QBrush(QColor(0,0,0))); // Blanc cassé
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
        chart->addAxis(axisY, Qt::AlignLeft);
        series->attachAxis(axisY);

        // Créer le QChartView pour afficher le graphique
        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);

        // Ajouter des ombres aux barres
        chartView->setStyleSheet("QChartView { border: 2px solid #d500f9; border-radius: 10px; }");

        // Ajouter le QChartView à votre interface
        ui->verticalLayoutStat->addWidget(chartView);

        // Afficher la page des statistiques dans le stackedWidget_3
        ui->stackedWidget_3->setCurrentIndex(2); // Index de la page "statistiques"

    } else {
        qDebug() << "Erreur lors de l'exécution de la requête : " << query.lastError();
    }
}*/
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
        set->setColor(QColor(0, 191, 255));  // Bleu clair vif
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
    connect(calendar, &QCalendarWidget::selectionChanged, this, &MainWindow::onDateSelected);
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
