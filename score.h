#ifndef SCORE_H
#define SCORE_H

#include <QWidget>

extern int points;

namespace Ui {
class score;
}

class score : public QWidget
{
    Q_OBJECT

public:
    explicit score(QWidget *parent = nullptr);
    ~score();

private slots:
    void on_quit_clicked();



private:
    Ui::score *ui;

};

#endif // SCORE_H
