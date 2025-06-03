#ifndef HOMESCREEN_H
#define HOMESCREEN_H

#include <QWidget>

namespace Ui {
class HomeScreen;
}

class HomeScreen : public QWidget
{
    Q_OBJECT

public:
    explicit HomeScreen(QWidget *parent = nullptr);
    ~HomeScreen();
signals :
    void startClicked();

private slots:
    void on_Start_clicked();

private:
    Ui::HomeScreen *ui;
};

#endif // HOMESCREEN_H
