/********************************************************************************
** Form generated from reading UI file 'gamescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESCREEN_H
#define UI_GAMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameScreen
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *gridWidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *time;
    QGridLayout *gridLayout;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *homeReturn;
    QSpacerItem *verticalSpacer;
    QPushButton *showMistakes;
    QSpacerItem *verticalSpacer_2;
    QPushButton *showSolution;
    QSpacerItem *verticalSpacer_3;
    QPushButton *resetCells;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *GameScreen)
    {
        if (GameScreen->objectName().isEmpty())
            GameScreen->setObjectName("GameScreen");
        GameScreen->resize(1184, 693);
        GameScreen->setMaximumSize(QSize(16777215, 16777215));
        GameScreen->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color: lightblue;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    border: none;\n"
"    border-radius: 12px;\n"
"    padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #357ABD;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #2D5D9F;\n"
"}\n"
"\n"
"\n"
"QLabel {\n"
"    color: #1A1A1A;\n"
"    font-size: 22px;\n"
"    font-weight: semi-bold;\n"
"}\n"
"\n"
"\n"
"QGridLayout {\n"
"    spacing: 5px;\n"
"}\n"
"\n"
""));
        horizontalLayout_2 = new QHBoxLayout(GameScreen);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        gridWidget = new QWidget(GameScreen);
        gridWidget->setObjectName("gridWidget");
        gridWidget->setMaximumSize(QSize(675, 675));
        gridWidget->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(gridWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        time = new QLabel(gridWidget);
        time->setObjectName("time");
        time->setMaximumSize(QSize(16777215, 20));
        time->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: #2c3e50;\n"
"}"));

        gridLayout_2->addWidget(time, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetMaximumSize);

        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 3);


        horizontalLayout_2->addWidget(gridWidget);

        verticalWidget = new QWidget(GameScreen);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setMaximumSize(QSize(180, 7000));
        verticalLayout_2 = new QVBoxLayout(verticalWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        homeReturn = new QPushButton(verticalWidget);
        homeReturn->setObjectName("homeReturn");

        horizontalLayout->addWidget(homeReturn);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        showMistakes = new QPushButton(verticalWidget);
        showMistakes->setObjectName("showMistakes");
        showMistakes->setMaximumSize(QSize(3000, 2000));
        showMistakes->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #e0e0e0;\n"
"    background-color: #2b2f4a;         \n"
"    font-size: 18px;\n"
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
"}\n"
""));

        verticalLayout_2->addWidget(showMistakes);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        showSolution = new QPushButton(verticalWidget);
        showSolution->setObjectName("showSolution");
        showSolution->setMaximumSize(QSize(3000, 1000));
        showSolution->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #e0e0e0;\n"
"    background-color: #2b2f4a;         \n"
"    font-size: 17px;\n"
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

        verticalLayout_2->addWidget(showSolution);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        resetCells = new QPushButton(verticalWidget);
        resetCells->setObjectName("resetCells");
        resetCells->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #e0e0e0;\n"
"    background-color: #2b2f4a;         \n"
"    font-size: 17px;\n"
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

        verticalLayout_2->addWidget(resetCells);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        horizontalLayout_2->addWidget(verticalWidget);


        retranslateUi(GameScreen);

        QMetaObject::connectSlotsByName(GameScreen);
    } // setupUi

    void retranslateUi(QWidget *GameScreen)
    {
        GameScreen->setWindowTitle(QCoreApplication::translate("GameScreen", "Form", nullptr));
        time->setText(QCoreApplication::translate("GameScreen", "Time: ", nullptr));
        homeReturn->setText(QCoreApplication::translate("GameScreen", "X", nullptr));
        showMistakes->setText(QCoreApplication::translate("GameScreen", "Show mistakes", nullptr));
        showSolution->setText(QCoreApplication::translate("GameScreen", "Show solution", nullptr));
        resetCells->setText(QCoreApplication::translate("GameScreen", "Reset cells", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameScreen: public Ui_GameScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESCREEN_H
