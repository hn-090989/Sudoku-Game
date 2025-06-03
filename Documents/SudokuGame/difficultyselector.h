#ifndef DIFFICULTYSELECTOR_H
#define DIFFICULTYSELECTOR_H

#include <QWidget>

namespace Ui {
class DifficultySelector;
}

class DifficultySelector : public QWidget
{
    Q_OBJECT

public:
    explicit DifficultySelector(QWidget *parent = nullptr);
    ~DifficultySelector();

signals:
    void easySelected();
    void mediumSelected();
    void hardSelected();

private slots:
    void on_Easy_clicked();
    void on_Medium_clicked();
    void on_Hard_clicked();

private:
    Ui::DifficultySelector *ui;
};

#endif // DIFFICULTYSELECTOR_H
