/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat 23. Nov 12:32:39 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineopen;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *openbut;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *linesave;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *savebut;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QTextEdit *indan;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_nBob;
    QPushButton *pushButton_dBob;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_ResultAlisa;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_ResultBob;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_3;
    QFormLayout *formLayout;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_meAlisa;
    QLineEdit *lineEdit_meAlisa;
    QVBoxLayout *verticalLayout_3;
    QPushButton *key2;
    QLineEdit *zakkey;
    QPushButton *pushn;
    QLineEdit *linen;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton_Start;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(510, 590);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        centralWidget->setAutoFillBackground(false);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 492, 563));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        lineopen = new QLineEdit(verticalLayoutWidget);
        lineopen->setObjectName(QString::fromUtf8("lineopen"));
        lineopen->setEnabled(false);

        horizontalLayout_4->addWidget(lineopen);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        openbut = new QPushButton(verticalLayoutWidget);
        openbut->setObjectName(QString::fromUtf8("openbut"));

        horizontalLayout_4->addWidget(openbut);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);

        linesave = new QLineEdit(verticalLayoutWidget);
        linesave->setObjectName(QString::fromUtf8("linesave"));
        linesave->setEnabled(false);

        horizontalLayout_6->addWidget(linesave);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        horizontalLayout_6->addLayout(gridLayout_2);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        savebut = new QPushButton(verticalLayoutWidget);
        savebut->setObjectName(QString::fromUtf8("savebut"));

        horizontalLayout_6->addWidget(savebut);


        verticalLayout->addLayout(horizontalLayout_6);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        indan = new QTextEdit(verticalLayoutWidget);
        indan->setObjectName(QString::fromUtf8("indan"));

        horizontalLayout->addWidget(indan);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_nBob = new QPushButton(verticalLayoutWidget);
        pushButton_nBob->setObjectName(QString::fromUtf8("pushButton_nBob"));
        pushButton_nBob->setEnabled(false);

        gridLayout_3->addWidget(pushButton_nBob, 1, 1, 1, 1);

        pushButton_dBob = new QPushButton(verticalLayoutWidget);
        pushButton_dBob->setObjectName(QString::fromUtf8("pushButton_dBob"));
        pushButton_dBob->setEnabled(false);

        gridLayout_3->addWidget(pushButton_dBob, 2, 1, 1, 1);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 1, 2, 1, 1);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_3->addWidget(lineEdit_2, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout_3, 6, 1, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));

        gridLayout->addLayout(gridLayout_7, 13, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_ResultAlisa = new QLabel(verticalLayoutWidget);
        label_ResultAlisa->setObjectName(QString::fromUtf8("label_ResultAlisa"));

        horizontalLayout_3->addWidget(label_ResultAlisa);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_3, 16, 2, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        label_ResultBob = new QLabel(verticalLayoutWidget);
        label_ResultBob->setObjectName(QString::fromUtf8("label_ResultBob"));

        horizontalLayout_5->addWidget(label_ResultBob);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        gridLayout->addLayout(horizontalLayout_5, 16, 1, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        pushButton_meAlisa = new QPushButton(verticalLayoutWidget);
        pushButton_meAlisa->setObjectName(QString::fromUtf8("pushButton_meAlisa"));
        pushButton_meAlisa->setEnabled(false);

        gridLayout_6->addWidget(pushButton_meAlisa, 2, 2, 1, 1);

        lineEdit_meAlisa = new QLineEdit(verticalLayoutWidget);
        lineEdit_meAlisa->setObjectName(QString::fromUtf8("lineEdit_meAlisa"));
        lineEdit_meAlisa->setEnabled(false);

        gridLayout_6->addWidget(lineEdit_meAlisa, 2, 1, 1, 1);


        formLayout->setLayout(0, QFormLayout::LabelRole, gridLayout_6);


        gridLayout->addLayout(formLayout, 6, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        key2 = new QPushButton(verticalLayoutWidget);
        key2->setObjectName(QString::fromUtf8("key2"));

        verticalLayout_3->addWidget(key2);

        zakkey = new QLineEdit(verticalLayoutWidget);
        zakkey->setObjectName(QString::fromUtf8("zakkey"));
        zakkey->setEnabled(false);

        verticalLayout_3->addWidget(zakkey);

        pushn = new QPushButton(verticalLayoutWidget);
        pushn->setObjectName(QString::fromUtf8("pushn"));

        verticalLayout_3->addWidget(pushn);

        linen = new QLineEdit(verticalLayoutWidget);
        linen->setObjectName(QString::fromUtf8("linen"));
        linen->setEnabled(false);

        verticalLayout_3->addWidget(linen);


        gridLayout->addLayout(verticalLayout_3, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        pushButton_Start = new QPushButton(verticalLayoutWidget);
        pushButton_Start->setObjectName(QString::fromUtf8("pushButton_Start"));

        horizontalLayout_7->addWidget(pushButton_Start);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 510, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \320\272 \321\204\320\260\320\271\320\273\321\203", 0, QApplication::UnicodeUTF8));
        openbut->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\204\320\260\320\271\320\273 \320\264\320\273\321\217 \320\276\321\202\320\272\321\200\321\213\321\202\320\270\321\217", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \320\272 \321\204\320\260\320\271\320\273\321\203", 0, QApplication::UnicodeUTF8));
        savebut->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\204\320\260\320\271\320\273 \320\264\320\273\321\217 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        pushButton_nBob->setText(QApplication::translate("MainWindow", "n=p*q", 0, QApplication::UnicodeUTF8));
        pushButton_dBob->setText(QApplication::translate("MainWindow", "d-\320\267\320\260\320\272\321\200\321\213\321\202\320\260\321\217 \321\215\320\272\321\201\320\277\320\276\320\275\320\265\320\275\321\202\320\260", 0, QApplication::UnicodeUTF8));
        label_ResultAlisa->setText(QString());
        label_ResultBob->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", 0, QApplication::UnicodeUTF8));
        pushButton_meAlisa->setText(QApplication::translate("MainWindow", "me", 0, QApplication::UnicodeUTF8));
        key2->setText(QApplication::translate("MainWindow", "\320\267\320\260\320\272\321\200\321\213\321\202\321\213\320\271 \320\272\320\273\321\216\321\207", 0, QApplication::UnicodeUTF8));
        pushn->setText(QApplication::translate("MainWindow", "\320\262\320\265\320\273\320\270\321\207\320\270\320\275\320\260 n", 0, QApplication::UnicodeUTF8));
        pushButton_Start->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\260\320\273\320\270\320\267\320\276\320\262\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
