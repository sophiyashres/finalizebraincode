#ifndef LEVEL11_H
#define LEVEL11_H

#include <QWidget>
#include "level12.h"


namespace Ui {
class level11;
}

class level11 : public QWidget
{
    Q_OBJECT

public:
    explicit level11(QWidget *parent = nullptr);
    ~level11();

private slots:
    void on_Next_clicked();
    void on_quit_clicked();
void on_how_clicked();
    void on_q11_6_toggled(bool checked);

private:
    Ui::level11 *ui;

    level12 *Level12;
};

#endif // LEVEL11_H
