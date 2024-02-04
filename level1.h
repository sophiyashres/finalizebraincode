#ifndef LEVEL1_H
#define LEVEL1_H

#include <QWidget>
#include "level2.h"


namespace Ui {
class level1;
}

class level1 : public QWidget
{
    Q_OBJECT

public:
    explicit level1(QWidget *parent = nullptr);
    ~level1();

private slots:

    void on_quit_clicked();

    void on_Next_clicked();

void on_how_clicked();
    void on_q1_4_toggled(bool checked);


private:
    Ui::level1 *ui;

    level2 *Level2;




};

#endif // LEVEL1_H
