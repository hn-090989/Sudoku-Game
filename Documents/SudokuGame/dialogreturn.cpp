#include "dialogreturn.h"
#include "ui_dialogreturn.h"

DialogReturn::DialogReturn(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogReturn)
{
    ui->setupUi(this);

}

DialogReturn::~DialogReturn()
{
    delete ui;
}



