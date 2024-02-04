#ifndef LEVEL10_H
#define LEVEL10_H

#include <QWidget>
#include"level11.h"

namespace Ui {
class level10;
}

class level10 : public QWidget
{
    Q_OBJECT

public:
    explicit level10(QWidget *parent = nullptr);
    ~level10();

private slots:
    void on_Next_clicked();
    void on_quit_clicked();
void on_how_clicked();
    void on_q10_3_toggled(bool checked);

private:
    Ui::level10 *ui;

    level11 *Level11;
};

#endif // LEVEL10_H
