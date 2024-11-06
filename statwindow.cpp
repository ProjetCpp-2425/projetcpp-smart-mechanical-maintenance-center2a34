#include "statwindow.h"
#include <QPixmap>

StatWindow::StatWindow(QWidget *parent) : QDialog(parent)
{
    this->setWindowTitle("Statistiques");
    this->resize(700, 500);  // Ajustez la taille de la fenêtre si nécessaire

    // Créer un label pour afficher l'image
    imageLabel = new QLabel(this);

    // Charger l'image depuis le chemin donné
    QPixmap pixmap("C:/Users/21658/Desktop/projet2024-2025/mech/stat.png");

    // Vérifier si l'image est chargée avec succès
    if (!pixmap.isNull()) {
        imageLabel->setPixmap(pixmap.scaled(this->size(), Qt::KeepAspectRatio));  // Ajuster l'image à la taille de la fenêtre
    } else {
        imageLabel->setText("Image non trouvée");  // En cas d'erreur de chargement
    }

    // Disposer le label dans un layout
    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(imageLabel);
    this->setLayout(layout);
}
