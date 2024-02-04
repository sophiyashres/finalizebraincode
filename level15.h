#ifndef LEVEL15_H
#define LEVEL15_H

#include <QWidget>
#include"score.h"

namespace Ui {
class level15;
}

class level15 : public QWidget
{
    Q_OBJECT

public:
    explicit level15(QWidget *parent = nullptr);
    ~level15();

private slots:
    void on_quit_clicked();

    void on_q15_5_toggled(bool checked);
void on_how_clicked();
    void on_finish_clicked();

private:
    Ui::level15 *ui;

   score *Score ;
};

#endif // LEVEL15_H
