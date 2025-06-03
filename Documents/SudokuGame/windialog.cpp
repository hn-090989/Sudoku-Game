#include "windialog.h"
#include "ui_windialog.h"
#include "mainwindow.h"

winDialog::winDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::winDialog)
{
    ui->setupUi(this);

}
void winDialog::on_pushButton_clicked()
{
    emit returnToHome();
}
void winDialog::set_time(quint64 time){
    int seconds= (time /1000) % 60;
    int minutes = (time /60000);
    QString formattedTime = QString("%1:%2")
                                .arg(minutes, 2, 10, QLatin1Char('0'))
                                .arg(seconds, 2, 10,QLatin1Char('0'));

    ui->label_3->setText("Your time was : "+formattedTime);
}

winDialog::~winDialog()
{
    delete ui;
}




