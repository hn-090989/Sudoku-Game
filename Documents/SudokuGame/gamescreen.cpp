#include "gamescreen.h"
#include "ui_gamescreen.h"
#include "difficultyselector.h"
#include "mainwindow.h"
#include "dialogreturn.h"


GameScreen::GameScreen(int setdifficulty, QWidget *parent)
    : QWidget(parent), ui(new Ui::GameScreen)
{
    ui->setupUi(this);

    difficulty = setdifficulty;

    setupGrid();
    while(true){
        if (fillGrid( 0, 0)){
            break;
        }
    }
    for (int i=0 ; i< 9; i++){
        for (int j=0 ; j< 9; j++){
            displayGrid[i][j]= gridFill[i][j];
        }
    }

    timer.start();
    if (!updateTimer) {
        updateTimer = new QTimer(this);
        connect(updateTimer, &QTimer::timeout, this, [=]() {
            qint64 elapsed = timer.elapsed() / 1000;
            int minutes = elapsed / 60;
            int seconds = elapsed % 60;
            ui->time->setText(QString("Time: %1:%2")
                                          .arg(minutes, 2, 10, QChar('0'))
                                          .arg(seconds, 2, 10, QChar('0')));
        });
    }
    updateTimer->start(1000);

    switch(difficulty){
    case 0:
        numToHide= rand()%11+32;
        break;
    case 1:
        numToHide= rand()%11+40;
        break;
    case 2:
        numToHide= rand()%11+45;
        break;
    }
    setCells(numToHide);
    connect (ui->homeReturn, &QPushButton::clicked,this, &GameScreen::on_homeReturn_clicked );
}

void GameScreen::setupGrid() {
    ui->gridLayout->setSpacing(2);
    ui->gridWidget->setFixedSize(675, 675);

    for (int row = 0; row < 9; ++row) {
        for (int col = 0; col < 9; ++col) {
            cells[row][col] = new QLineEdit(this);
            connect(cells[row][col], &QLineEdit::textEdited, this, &GameScreen::checkWinCondition);
            QString style = "background-color: white; font-size: 55px;";
            cellBorders(row, col, style);
            cells[row][col]->setStyleSheet(style);
            cells[row][col]->setMaxLength(1);
            cells[row][col]->setAlignment(Qt::AlignCenter);
            cells[row][col]->setFixedSize(75, 75);
            cells[row][col]->setValidator(new QIntValidator(1, 9, this));
            ui->gridLayout->addWidget(cells[row][col], row, col);
        }
    }
}

bool GameScreen::fillGrid(int row, int col) {
    if (row == 9)
        return true;

    int nextRow= (col == 8) ? row + 1 : row;
    int nextCol= (col + 1) % 9;

    vector<int> nums = { 1,2,3,4,5,6,7,8,9 };
    random_shuffle(nums.begin(), nums.end());

    for (int num : nums) {
        if (isValid( row, col, num)) {
            gridFill[row][col] = num;
            if (fillGrid( nextRow, nextCol))
                return true;
            gridFill[row][col] = 0;
        }
    }
    return false;
}

bool GameScreen::isValid( int row, int col, int value) {
    for (int i = 0; i < 9; i++) {
        if (gridFill[row][i] == value)
            return false;
        if (gridFill[i][col] == value)
            return false;
    }
    int boxRow = row - row % 3;
    int boxCol = col - col % 3;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (gridFill[boxRow + i][boxCol + j] == value)
                return false;
    return true;
}

void GameScreen::setCells(int numToHide) {
    if (numToHide % 2 != 0) numToHide++;

    int count = 0;
    int attempts = 0;
    int maxAttempts = 2000;

    while (count < numToHide && attempts < maxAttempts) {
        int row = rand()%9;
        int col = rand()%9;

        int oppositeRow = row;
        int oppositeCol = col;

        int symmetry = rand ()%5;
        if (difficulty = 1){
            symmetry = rand ()%4;
        }

        switch(symmetry) {
        case 0: // Symmetry - Horizontal
            oppositeRow = 8 - row;
            break;
        case 1: // 180-degree Rotational Symmetry
            oppositeRow = 8 - row;
            oppositeCol = 8 - col;
            break;
        case 2: // Diagonal Symmetry
        case 3:
            oppositeRow = col;
            oppositeCol = row;
            break;
        case 4: break;
        }

        if ((row == oppositeRow && col == oppositeCol) ||
            displayGrid[row][col] == 0 ||
            displayGrid[oppositeRow][oppositeCol]== 0) {
            attempts++;
            continue;
        }
        displayGrid[row][col] = 0;
        displayGrid[oppositeRow][oppositeCol] = 0;
        count+=2;
        attempts++;
    }

    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            if (displayGrid[r][c] > 0) {
                cells[r][c]->setText(QString::number(displayGrid[r][c]));
                QString style = "background-color: lightBlue; font-size: 55px;";
                cellBorders(r, c,style);
                cells[r][c]->setReadOnly(true);
                cells[r][c]->setStyleSheet(style);
            }
        }
    }
}

void GameScreen::on_showSolution_clicked()
{
    if (!solutionShown){
        showSolution();
        solutionShown = true;
    }
    else {
        wipeSolution();
        solutionShown = false;
    }
}

void GameScreen::showSolution(){
    for (int r = 0; r < 9; r++){
        for (int c = 0; c < 9; c++ ){
            if (displayGrid[r][c] == 0){
                temp[r][c]= cells[r][c]->text();
                cells[r][c]->setText(QString::number(gridFill[r][c]));
                QString style = "font-size : 55px;";
                cellBorders(r, c, style);
                cells[r][c]->setStyleSheet(style);
                cells[r][c]->setReadOnly(true);
            }
        }
    }
}

void GameScreen::wipeSolution(){
    for (int r = 0; r < 9; r++){
        for (int c = 0; c < 9; c++ ){
            if (displayGrid[r][c] == 0){
                cells[r][c]->clear();
                cells[r][c]->setReadOnly(false);
                QString style = "font-size : 55px;";
                cellBorders(r, c, style);
                cells[r][c]->setStyleSheet(style);
                cells[r][c]->setText(temp[r][c]);
            }
        }
    }
}

void GameScreen::on_showMistakes_clicked(){
    if (!mistakesHighlighted){
        highlightMistakes();
        mistakesHighlighted = true;
    }
    else {
        wipeMistakes();
        mistakesHighlighted = false;
    }
}

void GameScreen::highlightMistakes(){
    for (int r = 0; r < 9; r++){
        for (int c = 0; c < 9; c++ ){
            QString cellText = cells[r][c]->text();
            if (!cellText.isEmpty() && cellText.toInt() != gridFill[r][c]){
                QString style = "font-size: 55px; color: red;";
                cellBorders (r, c, style);
                cells[r][c]->setStyleSheet(style);
            }
        }
    }
}

void GameScreen::wipeMistakes(){
    for (int r = 0; r < 9; r++){
        for (int c = 0; c < 9; c++ ){
            QString cellText = cells[r][c]->text();
            if (!cellText.isEmpty() && displayGrid[r][c]==0){
                QString style = "font-size: 55px; color: black;";
                cellBorders (r, c, style);
                cells[r][c]->setStyleSheet(style);
            }
        }
    }
}

void GameScreen::on_resetCells_clicked(){
    for (int r = 0; r < 9; r++){
        for (int c = 0; c < 9; c++ ){
            if (displayGrid[r][c] == 0){
                cells[r][c]->clear();
            }
        }
    }
}

void GameScreen :: cellBorders(int row, int column, QString &style ){
    if (row % 3 == 0) {
        style += "border-top: 2px solid black;";
    } else {
        style += "border-top: 1px solid gray;";
    }

    if (column % 3 == 0) {
        style += "border-left: 2px solid black;";
    } else {
        style += "border-left: 1px solid gray;";
    }

    if (row == 8) {
        style += "border-bottom: 2px solid black;";
    }

    if (column == 8) {
        style += "border-right: 2px solid black;";
    }
}

void GameScreen:: checkWinCondition(){
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            QString cellText = cells[i][j]->text();
            if (cellText.isEmpty() || cellText.toInt() != gridFill[i][j]) {
                return;
            }
        }
    }
    emit winScreen();
}

void GameScreen::on_homeReturn_clicked(){
    emit returnToHome();
}

void GameScreen::gameSet(){
    for ( int r =0 ; r<9; r++){
        for ( int c =0 ; c<9; c++){
            cells[r][c]->setReadOnly(true);
        }
    }
    updateTimer->stop();
}
GameScreen::~GameScreen()
{
    delete ui;
}

