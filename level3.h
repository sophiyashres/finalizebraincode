#ifndef LEVEL3_H
#define LEVEL3_H

#include <QWidget>
#include "level4.h"

namespace Ui {
class level3;
}

class level3 : public QWidget
{
    Q_OBJECT

public:
    explicit level3(QWidget *parent = nullptr);
    ~level3();

private slots:
    void on_Next_clicked();

    void on_quit_clicked();

    void on_how_clicked();

    void on_q3_5_toggled(bool checked);

private:
    Ui::level3 *ui;

    level4 *Level4;
};

#endif // LEVEL3_H
