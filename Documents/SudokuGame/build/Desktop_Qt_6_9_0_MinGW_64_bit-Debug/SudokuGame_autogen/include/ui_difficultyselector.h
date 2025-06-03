/********************************************************************************
** Form generated from reading UI file 'difficultyselector.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFFICULTYSELECTOR_H
#define UI_DIFFICULTYSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DifficultySelector
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Easy;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Medium;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Hard;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *DifficultySelector)
    {
        if (DifficultySelector->objectName().isEmpty())
            DifficultySelector->setObjectName("DifficultySelector");
        DifficultySelector->resize(1144, 519);
        verticalLayout_2 = new QVBoxLayout(DifficultySelector);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(DifficultySelector);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"    background: transparent;\n"
"    font-size:  100px;         \n"
"    font-weight: 800;       \n"
"    letter-spacing: 2px;   \n"
"    font-family: \"Orbitron\", \"Poppins\", \"Segoe UI\", \"Arial\";\n"
"    qproperty-alignment: 'AlignCenter';\n"
"}"));

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        Easy = new QPushButton(DifficultySelector);
        Easy->setObjectName("Easy");
        Easy->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_2->addWidget(Easy);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        Medium = new QPushButton(DifficultySelector);
        Medium->setObjectName("Medium");
        Medium->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_2->addWidget(Medium);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        Hard = new QPushButton(DifficultySelector);
        Hard->setObjectName("Hard");
        Hard->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_2->addWidget(Hard);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(DifficultySelector);

        QMetaObject::connectSlotsByName(DifficultySelector);
    } // setupUi

    void retranslateUi(QWidget *DifficultySelector)
    {
        DifficultySelector->setWindowTitle(QCoreApplication::translate("DifficultySelector", "Form", nullptr));
        label->setText(QCoreApplication::translate("DifficultySelector", "Difficulty", nullptr));
        Easy->setText(QCoreApplication::translate("DifficultySelector", "Easy", nullptr));
        Medium->setText(QCoreApplication::translate("DifficultySelector", "Medium", nullptr));
        Hard->setText(QCoreApplication::translate("DifficultySelector", "Hard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DifficultySelector: public Ui_DifficultySelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFICULTYSELECTOR_H
