/********************************************************************************
** Form generated from reading UI file 'FileScript.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESCRIPT_H
#define UI_FILESCRIPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileScriptClass
{
public:
    QAction *action_config;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FileScriptClass)
    {
        if (FileScriptClass->objectName().isEmpty())
            FileScriptClass->setObjectName(QString::fromUtf8("FileScriptClass"));
        FileScriptClass->resize(604, 251);
        action_config = new QAction(FileScriptClass);
        action_config->setObjectName(QString::fromUtf8("action_config"));
        centralWidget = new QWidget(FileScriptClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(verticalLayout);

        FileScriptClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FileScriptClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 604, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        FileScriptClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FileScriptClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        FileScriptClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FileScriptClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        FileScriptClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_config);

        retranslateUi(FileScriptClass);

        QMetaObject::connectSlotsByName(FileScriptClass);
    } // setupUi

    void retranslateUi(QMainWindow *FileScriptClass)
    {
        FileScriptClass->setWindowTitle(QCoreApplication::translate("FileScriptClass", "FileScript", nullptr));
        action_config->setText(QCoreApplication::translate("FileScriptClass", "\351\205\215\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("FileScriptClass", "\346\234\254\345\234\260\347\233\256\345\275\225\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FileScriptClass", "\346\211\223\345\274\200\350\267\257\345\276\204", nullptr));
        pushButton->setText(QCoreApplication::translate("FileScriptClass", "OK", nullptr));
        menu->setTitle(QCoreApplication::translate("FileScriptClass", "\345\267\245\345\205\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileScriptClass: public Ui_FileScriptClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESCRIPT_H
