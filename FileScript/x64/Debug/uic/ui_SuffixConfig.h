/********************************************************************************
** Form generated from reading UI file 'SuffixConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUFFIXCONFIG_H
#define UI_SUFFIXCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SuffixConfigClass
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *SuffixConfigClass)
    {
        if (SuffixConfigClass->objectName().isEmpty())
            SuffixConfigClass->setObjectName(QString::fromUtf8("SuffixConfigClass"));
        SuffixConfigClass->resize(405, 298);
        verticalLayout_3 = new QVBoxLayout(SuffixConfigClass);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(SuffixConfigClass);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_3 = new QRadioButton(SuffixConfigClass);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(SuffixConfigClass);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);

        radioButton_2 = new QRadioButton(SuffixConfigClass);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);


        verticalLayout_2->addLayout(verticalLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(SuffixConfigClass);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(SuffixConfigClass);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        verticalLayout_2->addLayout(hboxLayout);

        verticalLayout_2->setStretch(0, 4);
        verticalLayout_2->setStretch(1, 1);

        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(SuffixConfigClass);
        QObject::connect(okButton, SIGNAL(clicked()), SuffixConfigClass, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), SuffixConfigClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(SuffixConfigClass);
    } // setupUi

    void retranslateUi(QDialog *SuffixConfigClass)
    {
        SuffixConfigClass->setWindowTitle(QCoreApplication::translate("SuffixConfigClass", "Dialog", nullptr));
        radioButton->setText(QCoreApplication::translate("SuffixConfigClass", ".txt", nullptr));
        radioButton_3->setText(QCoreApplication::translate("SuffixConfigClass", ".jpeg", nullptr));
        radioButton_4->setText(QCoreApplication::translate("SuffixConfigClass", ".png", nullptr));
        radioButton_2->setText(QCoreApplication::translate("SuffixConfigClass", ".jpg", nullptr));
        okButton->setText(QCoreApplication::translate("SuffixConfigClass", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("SuffixConfigClass", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SuffixConfigClass: public Ui_SuffixConfigClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUFFIXCONFIG_H
