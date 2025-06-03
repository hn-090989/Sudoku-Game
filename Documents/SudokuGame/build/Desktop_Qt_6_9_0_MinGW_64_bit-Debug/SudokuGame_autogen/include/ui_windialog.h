/********************************************************************************
** Form generated from reading UI file 'windialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDIALOG_H
#define UI_WINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_winDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *winDialog)
    {
        if (winDialog->objectName().isEmpty())
            winDialog->setObjectName("winDialog");
        winDialog->resize(977, 674);
        winDialog->setStyleSheet(QString::fromUtf8("QDialog{\n"
"    background-color: lightblue;\n"
"    qproperty-alignment: 'AlignCenter';\n"
"\n"
"\n"
"}\n"
"QLabel{ \n"
"font-size : 28px; \n"
"font- color : white;\n"
"}"));
        gridLayout = new QGridLayout(winDialog);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(winDialog);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #ffffff;\n"
"    background: transparent;\n"
"    font-size:  70px;         \n"
"    font-weight: 800;       \n"
"    letter-spacing: 2px;   \n"
"    font-family: \"Orbitron\", \"Poppins\", \"Segoe UI\", \"Arial\";\n"
"    qproperty-alignment: 'AlignCenter';\n"
"}"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(winDialog);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #ffffff;\n"
"    background: transparent;\n"
"    font-size:  56px;         \n"
"    font-weight: 800;       \n"
"    letter-spacing: 2px;   \n"
"    font-family: \"Orbitron\", \"Poppins\", \"Segoe UI\", \"Arial\";\n"
"    qproperty-alignment: 'AlignCenter';\n"
"}"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(winDialog);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #ffffff;\n"
"    background: transparent;\n"
"    font-size:  56px;         \n"
"    font-weight: 800;       \n"
"    letter-spacing: 2px;   \n"
"    font-family: \"Orbitron\", \"Poppins\", \"Segoe UI\", \"Arial\";\n"
"    qproperty-alignment: 'AlignCenter';\n"
"}"));

        verticalLayout->addWidget(label_3);

        pushButton = new QPushButton(winDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #e0e0e0;\n"
"    background-color: #2b2f4a;         \n"
"    font-size: 30px;\n"
"    font-weight: 800;\n"
"    font-family: \"Orbitron\", \"Poppins\", \"Segoe UI\", \"Arial\";\n"
"    padding: 8px , 16px;\n"
"    border-radius: 12px;\n"
"    border: 3px solid lightblue;        \n"
"    letter-spacing: 1.5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3a3f5c;\n"
"    color: #ffffff;\n"
"    border: 2px solid #5ef1f3;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #22263b;\n"
"    padding-left: 16px;\n"
"    padding-top: 16px;\n"
"}"));

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        retranslateUi(winDialog);

        QMetaObject::connectSlotsByName(winDialog);
    } // setupUi

    void retranslateUi(QDialog *winDialog)
    {
        winDialog->setWindowTitle(QCoreApplication::translate("winDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("winDialog", "Congragulations ", nullptr));
        label_2->setText(QCoreApplication::translate("winDialog", "You won!", nullptr));
        label_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("winDialog", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class winDialog: public Ui_winDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDIALOG_H
