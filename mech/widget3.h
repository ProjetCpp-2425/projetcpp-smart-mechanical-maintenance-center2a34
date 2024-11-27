#ifndef WIDGET3_H
#define WIDGET3_H

#include <QWidget>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <QPalette>
#include <QTimer>

class Widget3 : public QWidget {
    Q_OBJECT

public:
    explicit Widget3(QWidget *parent = nullptr) : QWidget(parent) {
        // Démarrer l'effet néon lors de la création de widget_3
        animateNeonEffect();
    }

private:
    void animateNeonEffect() {
        // Créer une animation pour l'opacité
        QPropertyAnimation* opacityAnimation = new QPropertyAnimation(this, "windowOpacity");
        opacityAnimation->setDuration(500); // Durée de l'animation
        opacityAnimation->setStartValue(1.0); // Commence opaque
        opacityAnimation->setEndValue(0.5); // Devient semi-transparent
        opacityAnimation->setEasingCurve(QEasingCurve::InOutQuad); // Courbe d'animation

        // Créer une animation pour la couleur de fond
        QPropertyAnimation* colorAnimation = new QPropertyAnimation(this, "palette");
        colorAnimation->setDuration(500); // Durée de l'animation
        QPalette originalPalette = palette(); // Palette d'origine
        QPalette neonPalette = originalPalette;
        neonPalette.setColor(QPalette::Window, Qt::cyan); // Couleur néon (par exemple, cyan)

        // Animation de couleur
        colorAnimation->setStartValue(originalPalette);
        colorAnimation->setEndValue(neonPalette);
        colorAnimation->setEasingCurve(QEasingCurve::InOutQuad);

        // Créer un groupe d'animation pour exécuter les deux animations ensemble
        QParallelAnimationGroup* animationGroup = new QParallelAnimationGroup();
        animationGroup->addAnimation(opacityAnimation);
        animationGroup->addAnimation(colorAnimation);

        // Relancer l'animation lorsque celle-ci est terminée
        connect(animationGroup, &QAbstractAnimation::finished, this, [=]() mutable {
            // Inverser les palettes
            QPalette temp = originalPalette;
            originalPalette = neonPalette;
            neonPalette = temp;

            // Relancer l'animation
            opacityAnimation->start();
            colorAnimation->start();
        });

        // Lancer l'animation
        animationGroup->start(QAbstractAnimation::DeleteWhenStopped);
    }
};

#endif // WIDGET3_H
