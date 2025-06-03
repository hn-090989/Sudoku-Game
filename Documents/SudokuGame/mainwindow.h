#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QElapsedTimer>

#include "difficultyselector.h"
#include "gamescreen.h"
#include "homescreen.h"
#include "windialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
signals:
    void reset();
    void setTime(qint64 time);
    void setGameScreen();

private slots:

private:
    Ui::MainWindow *ui;
    QStackedWidget *stack;
    HomeScreen *homescreen;
    DifficultySelector *difficultyselector;
    GameScreen *gamescreen;
    DialogReturn *dialogreturn;
    winDialog *windialog;
    QElapsedTimer timer;

    void startGame();
    void lightBlueBackground();
    void darkBlueBackground();

    int setDifficulty;

};
#endif // MAINWINDOW_H
