#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "difficultyselector.h"
#include "gamescreen.h"
#include "homescreen.h"
#include "dialogreturn.h"
#include "windialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    gamescreen(nullptr)
{
    ui->setupUi(this);
    srand (time(0));
    timer.start();

    stack = new QStackedWidget(this);
    difficultyselector = new DifficultySelector(this);
    homescreen = new HomeScreen(this);
    dialogreturn = new DialogReturn(this);
    windialog = new winDialog(this);

    stack->addWidget(homescreen);
    stack->addWidget(difficultyselector);

    setCentralWidget(stack);
    darkBlueBackground();
    stack->setCurrentIndex(0);

    connect(homescreen, &HomeScreen::startClicked, this, [=]() {
        lightBlueBackground();
        stack->setCurrentIndex(1);
    });
    connect(difficultyselector, &DifficultySelector::easySelected, this, [=]() {
        setDifficulty = 0;
        startGame();
    });
    connect(difficultyselector, &DifficultySelector::mediumSelected, this, [=]() {
        setDifficulty = 1;
        startGame();
    });
    connect(difficultyselector, &DifficultySelector::hardSelected, this, [=]() {
        setDifficulty = 2;
        startGame();
    });
    connect(this, &MainWindow::setTime, windialog, &winDialog::set_time);

}

void MainWindow:: startGame(){

    if (gamescreen!=nullptr) {
        stack->removeWidget(gamescreen);
        delete gamescreen;
        gamescreen = nullptr;
    }
    gamescreen = new GameScreen(setDifficulty, this);
    timer.restart();
    stack->setStyleSheet("background-color: white;");

    connect (this, &MainWindow::setGameScreen, gamescreen, &GameScreen::gameSet );

    connect(gamescreen, &GameScreen::returnToHome, this, [=]() {
        dialogreturn->show();
    });
    connect(gamescreen, &GameScreen::winScreen, this, [=]() {
        windialog->show();
        emit setGameScreen();
        qint64 elapsedTime = timer.elapsed();
        emit setTime(elapsedTime);
    });
    connect (windialog, &winDialog::returnToHome, this ,[=](){
        darkBlueBackground();
        stack->setCurrentIndex(0);
        windialog->hide();
        stack->removeWidget(gamescreen);
        delete gamescreen;
        gamescreen = nullptr;
    });

    connect(dialogreturn, &DialogReturn::accepted, this, [=]() {
        darkBlueBackground();
        stack->setCurrentIndex(0);
        stack->removeWidget(gamescreen);
        delete gamescreen;
        gamescreen = nullptr;
    });
    stack->addWidget(gamescreen);
    stack->setCurrentIndex(stack->indexOf(gamescreen));
}

void MainWindow::lightBlueBackground(){
    stack->setStyleSheet("background-color: lightblue;");
}

void MainWindow::darkBlueBackground(){
    stack->setStyleSheet("background: qlineargradient("
                         "x1: 0, y1: 0, x2: 1, y2: 1, "
                         "stop: 0 #2c3e50, "
                         "stop: 1 #3498db);");
}

MainWindow::~MainWindow()
{
    delete ui;
}

