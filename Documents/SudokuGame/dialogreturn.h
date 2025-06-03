#ifndef DIALOGRETURN_H
#define DIALOGRETURN_H

#include <QDialog>

namespace Ui {
class DialogReturn;
}

class DialogReturn : public QDialog
{
    Q_OBJECT

public:
    explicit DialogReturn(QWidget *parent = nullptr);
    ~DialogReturn();

signals:

private slots:

private:
    Ui::DialogReturn *ui;
};

#endif // DIALOGRETURN_H
