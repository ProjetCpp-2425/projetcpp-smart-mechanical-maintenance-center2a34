#ifndef STATWINDOW_H
#define STATWINDOW_H

#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>

class StatWindow : public QDialog
{
    Q_OBJECT
public:
    explicit StatWindow(QWidget *parent = nullptr);

private:
    QLabel* imageLabel;
};

#endif // STATWINDOW_H
