#ifndef LEVELPG2_H
#define LEVELPG2_H

#include <QMainWindow>
#include "level13.h"
#include "level14.h"
#include "level15.h"


namespace Ui {
class levelpg2;
}

class levelpg2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit levelpg2(QWidget *parent = nullptr);
    ~levelpg2();

private slots:
    void on_levels_next_clicked();

    void on_levelpg2Next_clicked();

    void on_levelpg2Back_clicked();

    void on_pushButton13_clicked();

    void on_pushButton14_clicked();

    void on_pushButton15_clicked();


private:
    Ui::levelpg2 *ui;

    level13 *Level13;
    level14 *Level14;
    level15 *Level15;


};

#endif // LEVELPG2_H
