#ifndef LEVEL7_H
#define LEVEL7_H

#include <QWidget>
#include"level8.h"

namespace Ui {
class level7;
}

class level7 : public QWidget
{
    Q_OBJECT

public:
    explicit level7(QWidget *parent = nullptr);
    ~level7();

private slots:
    void on_Next_clicked();
    void on_quit_clicked();
void on_how_clicked();
    void on_q7_8_toggled(bool checked);

private:
    Ui::level7 *ui;
      level8 *Level8;
};

#endif // LEVEL7_H
