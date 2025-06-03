/********************************************************************************
** Form generated from reading UI file 'dialogreturn.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRETURN_H
#define UI_DIALOGRETURN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogReturn
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogReturn)
    {
        if (DialogReturn->objectName().isEmpty())
            DialogReturn->setObjectName("DialogReturn");
        DialogReturn->resize(640, 480);
        verticalLayout = new QVBoxLayout(DialogReturn);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(DialogReturn);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"qproperty-alignment: 'AlignCenter';\n"
"font-size: 23px\n"
"}"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(DialogReturn);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"qproperty-alignment: 'AlignCenter';\n"
"font-size: 23px\n"
"\n"
"}"));

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DialogReturn);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogReturn);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogReturn, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogReturn, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogReturn);
    } // setupUi

    void retranslateUi(QDialog *DialogReturn)
    {
        DialogReturn->setWindowTitle(QCoreApplication::translate("DialogReturn", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogReturn", "Your progress will not be saved", nullptr));
        label_2->setText(QCoreApplication::translate("DialogReturn", "Would you like to return to the home screen ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogReturn: public Ui_DialogReturn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRETURN_H
