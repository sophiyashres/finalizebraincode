#ifndef LEVEL2_H
#define LEVEL2_H

#include <QWidget>
#include"level3.h"




namespace Ui {
class level2;
}

class level2 : public QWidget
{
    Q_OBJECT

public:
    explicit level2(QWidget *parent = nullptr);
    ~level2();

private slots:
    void on_quit_clicked();
    void on_Next_clicked();

void on_how_clicked();
    void on_q2_3_toggled(bool checked);

private:
    Ui::level2 *ui;

    level3 *Level3;

};

#endif // LEVEL2_H
