/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *plotButton;
    QVBoxLayout *verticalLayout;
    QLabel *dutyRatioLabel;
    QSlider *dutyRatioSlider;
    QHBoxLayout *horizontalLayout;
    QLabel *vSteadyLabel;
    QLabel *FMSLabel;
    QCustomPlot *customPlot;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(785, 735);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plotButton = new QPushButton(centralWidget);
        plotButton->setObjectName(QStringLiteral("plotButton"));

        gridLayout->addWidget(plotButton, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dutyRatioLabel = new QLabel(centralWidget);
        dutyRatioLabel->setObjectName(QStringLiteral("dutyRatioLabel"));
        QFont font;
        font.setPointSize(13);
        dutyRatioLabel->setFont(font);

        verticalLayout->addWidget(dutyRatioLabel);

        dutyRatioSlider = new QSlider(centralWidget);
        dutyRatioSlider->setObjectName(QStringLiteral("dutyRatioSlider"));
        dutyRatioSlider->setMaximum(85);
        dutyRatioSlider->setValue(50);
        dutyRatioSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(dutyRatioSlider);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        vSteadyLabel = new QLabel(centralWidget);
        vSteadyLabel->setObjectName(QStringLiteral("vSteadyLabel"));

        horizontalLayout->addWidget(vSteadyLabel);

        FMSLabel = new QLabel(centralWidget);
        FMSLabel->setObjectName(QStringLiteral("FMSLabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Zapfino"));
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        FMSLabel->setFont(font1);

        horizontalLayout->addWidget(FMSLabel);


        gridLayout->addLayout(horizontalLayout, 0, 2, 1, 1);

        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QStringLiteral("customPlot"));

        gridLayout->addWidget(customPlot, 1, 0, 1, 3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 785, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        plotButton->setText(QApplication::translate("MainWindow", "Replot", nullptr));
        dutyRatioLabel->setText(QApplication::translate("MainWindow", "Duty Ratio = 50%", nullptr));
        vSteadyLabel->setText(QApplication::translate("MainWindow", "Vsteady =", nullptr));
        FMSLabel->setText(QApplication::translate("MainWindow", "FMS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
