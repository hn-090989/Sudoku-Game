#ifndef WINDIALOG_H
#define WINDIALOG_H

#include <QDialog>
#include <QString>
#include <QStandardPaths>

namespace Ui {
class winDialog;
}

class winDialog : public QDialog
{
    Q_OBJECT

public:
    explicit winDialog(QWidget *parent = nullptr);
    ~winDialog();

signals:
    void returnToHome();

private slots:
    void on_pushButton_clicked();

public slots:
    void set_time(quint64 time);

private:
    Ui::winDialog *ui;
};

#endif // WINDIALOG_H
