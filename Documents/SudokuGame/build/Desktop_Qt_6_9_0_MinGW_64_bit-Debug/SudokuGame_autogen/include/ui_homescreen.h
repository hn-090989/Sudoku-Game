/********************************************************************************
** Form generated from reading UI file 'homescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESCREEN_H
#define UI_HOMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeScreen
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QPushButton *Start;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *HomeScreen)
    {
        if (HomeScreen->objectName().isEmpty())
            HomeScreen->setObjectName("HomeScreen");
        HomeScreen->resize(986, 598);
        HomeScreen->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 1, y2: 1,\n"
"        stop: 0 #2c3e50,\n"
"        stop: 1 #3498db\n"
"    );\n"
"}\n"
""));
        gridLayout = new QGridLayout(HomeScreen);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_2 = new QSpacerItem(20, 111, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        label = new QLabel(HomeScreen);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #ffffff;\n"
"    background: transparent;\n"
"    font-size:  200px;         \n"
"    font-weight: 800;       \n"
"    letter-spacing: 2px;   \n"
"    font-family: \"Orbitron\", \"Poppins\", \"Segoe UI\", \"Arial\";\n"
"    qproperty-alignment: 'AlignCenter';\n"
"}"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        Start = new QPushButton(HomeScreen);
        Start->setObjectName("Start");
        Start->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #e0e0e0;\n"
"    background-color: #2b2f4a;         \n"
"    font-size: 22px;\n"
"    font-weight: 800;\n"
"    font-family: \"Orbitron\", \"Poppins\", \"Segoe UI\", \"Arial\";\n"
"    padding: 14px 28px;\n"
"    border-radius: 12px;\n"
"    border: 2px solid #3ddad9;        \n"
"    letter-spacing: 1.5px;\n"
"    text-transform: uppercase;\n"
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
"}\n"
""));

        gridLayout->addWidget(Start, 2, 1, 2, 1);

        horizontalSpacer = new QSpacerItem(110, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(110, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 110, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);


        retranslateUi(HomeScreen);

        QMetaObject::connectSlotsByName(HomeScreen);
    } // setupUi

    void retranslateUi(QWidget *HomeScreen)
    {
        HomeScreen->setWindowTitle(QCoreApplication::translate("HomeScreen", "Form", nullptr));
        label->setText(QCoreApplication::translate("HomeScreen", "Sudoku", nullptr));
        Start->setText(QCoreApplication::translate("HomeScreen", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeScreen: public Ui_HomeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESCREEN_H
