#ifndef LEVEL5_H
#define LEVEL5_H

#include <QWidget>
#include "level6.h"

namespace Ui {
class level5;
}

class level5 : public QWidget
{
    Q_OBJECT

public:
    explicit level5(QWidget *parent = nullptr);
    ~level5();

private slots:
    void on_Next_clicked();
    void on_quit_clicked();
void on_how_clicked();
    void on_q5_6_toggled(bool checked);

private:
    Ui::level5 *ui;

    level6 *Level6;
};

#endif // LEVEL5_H
