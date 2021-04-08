/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QSlider *zoomSlider;
    QPushButton *abrindo;
    QPushButton *salvando;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 239, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        zoomSlider = new QSlider(centralwidget);
        zoomSlider->setObjectName(QString::fromUtf8("zoomSlider"));
        zoomSlider->setGeometry(QRect(740, 120, 21, 181));
        zoomSlider->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 175, 185);"));
        zoomSlider->setMinimum(1);
        zoomSlider->setMaximum(200);
        zoomSlider->setValue(100);
        zoomSlider->setOrientation(Qt::Vertical);
        abrindo = new QPushButton(centralwidget);
        abrindo->setObjectName(QString::fromUtf8("abrindo"));
        abrindo->setGeometry(QRect(180, 390, 121, 61));
        abrindo->setStyleSheet(QString::fromUtf8("font: 12pt \"Reem Kufi\";\n"
"background-color: rgb(255, 181, 176);\n"
"border-radius: 30px;"));
        salvando = new QPushButton(centralwidget);
        salvando->setObjectName(QString::fromUtf8("salvando"));
        salvando->setGeometry(QRect(440, 390, 131, 61));
        salvando->setStyleSheet(QString::fromUtf8("font: 12pt \"Reem Kufi\";\n"
"background-color: rgb(255, 181, 176);\n"
"border-radius: 30px;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 70, 661, 271));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(187, 203, 255);\n"
"border-radius: 30px;"));
        label->setMargin(0);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(730, 80, 51, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Reem Kufi\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        abrindo->setText(QCoreApplication::translate("MainWindow", "Abrir imagem", nullptr));
        salvando->setText(QCoreApplication::translate("MainWindow", "Salvar imagem", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Zoom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
