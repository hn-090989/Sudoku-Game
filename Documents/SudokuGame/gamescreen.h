#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <QWidget>
#include <QLineEdit>
#include <QGridLayout>
#include <QIntValidator>
#include <vector>
#include <QTimer>
#include <QElapsedTimer>
#include <QTime>

#include "difficultyselector.h"
#include "homescreen.h"
#include "dialogreturn.h"
using namespace std;

namespace Ui {
class GameScreen;
}

class GameScreen : public QWidget
{
    Q_OBJECT

public:
    explicit GameScreen(int setdifficulty, QWidget *parent = nullptr);
    ~GameScreen();
signals:
    void returnToHome();
    void winScreen();

private slots:
    void on_homeReturn_clicked();
    void on_showSolution_clicked();
    void on_showMistakes_clicked();
    void on_resetCells_clicked();
    void checkWinCondition();

public slots:
    void showSolution();
    void wipeSolution();
    void highlightMistakes();
    void wipeMistakes();
    void gameSet();

private:
    Ui::GameScreen *ui;

    bool solutionShown = false;
    bool mistakesHighlighted = false;
    bool win = true;

    int difficulty= 0;
    int numToHide;
    int gridFill[9][9] = {0};      //solved puzzle
    int displayGrid [9][9] ={0};    // grid shown to the user

    QLineEdit *cells[9][9];
    QString temp[9][9];
    QElapsedTimer timer;
    QTimer* updateTimer = nullptr;

    void setupGrid();
    bool fillGrid(int row, int col);              //sets the numbers in the gridFill array
    bool isValid(int row, int col, int value);
    void setCells( int numToHide);                //sets the numbers to be hidden with the number 0
    void cellBorders(int row, int column, QString &style);

};


#endif // GAMESCREEN_H
