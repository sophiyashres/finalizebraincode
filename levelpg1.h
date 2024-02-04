#ifndef LEVELPG1_H
#define LEVELPG1_H

#include <QMainWindow>


#include "level1.h"
#include "level2.h"
#include "level3.h"
#include "level4.h"
#include "level5.h"
#include "level6.h"
#include "level7.h"
#include "level8.h"
#include "level9.h"
#include "level10.h"
#include "level11.h"
#include "level12.h"

namespace Ui {
class levelpg1;
}

class levelpg1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit levelpg1(QWidget *parent = nullptr);
    ~levelpg1();

private slots:
    void on_quit_clicked();
    void on_l1_clicked();
    void on_l2_clicked();
    void on_l3_clicked();
    void on_l4_clicked();
    void on_l5_clicked();
    void on_l6_clicked();
    void on_l7_clicked();
    void on_l8_clicked();
    void on_l9_clicked();
    void on_l10_clicked();
    void on_l11_clicked();
    void on_l12_clicked();
    void on_l13_clicked();
    void on_l14_clicked();
    void on_l15_clicked();
void on_how_clicked();

private:
    Ui::levelpg1 *ui;


    level1 *Level1;
    level2 *Level2;
    level3 *Level3;
    level4 *Level4;
    level5 *Level5;
    level6 *Level6;
    level7 *Level7;
    level8 *Level8;
    level9 *Level9;
    level10 *Level10;
    level11 *Level11;
    level12 *Level12;
    level13 *Level13;
    level14 *Level14;
    level15 *Level15;

};

#endif // LEVELPG1_H
