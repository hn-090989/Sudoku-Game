#include "difficultyselector.h"
#include "ui_difficultyselector.h"

DifficultySelector::DifficultySelector(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DifficultySelector)
{
    ui->setupUi(this);

    connect (ui -> Easy, &QPushButton::clicked,this, &DifficultySelector::on_Easy_clicked);
    connect (ui -> Medium, &QPushButton::clicked,this, &DifficultySelector::on_Medium_clicked);
    connect (ui -> Hard, &QPushButton::clicked,this, &DifficultySelector::on_Hard_clicked);
}

DifficultySelector::~DifficultySelector()
{
    delete ui;
}

void DifficultySelector::on_Easy_clicked()
{
    emit easySelected();
}

void DifficultySelector::on_Medium_clicked()
{
    emit mediumSelected();
}

void DifficultySelector::on_Hard_clicked()
{
    emit hardSelected();
}

