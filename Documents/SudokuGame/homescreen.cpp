#include "homescreen.h"
#include "ui_homescreen.h"

HomeScreen::HomeScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HomeScreen)
{
    ui->setupUi(this);

    connect(ui ->Start, &QPushButton::clicked, this, &HomeScreen::on_Start_clicked);
}

HomeScreen::~HomeScreen()
{
    delete ui;
}
void HomeScreen::on_Start_clicked()
{
    emit startClicked();
}

