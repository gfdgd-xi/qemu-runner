/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *easyTab;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *legecyBoot;
    QRadioButton *uefiBoot;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *isoPath;
    QSpacerItem *verticalSpacer;
    QLineEdit *qemuDiskPath;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QLabel *isoPathTips;
    QLabel *qemuDiskTips;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *advancedTab;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QLabel *label_4;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QLabel *label_5;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_7;
    QComboBox *comboBox_3;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_12;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *advancedModeCheckbox;
    QPushButton *runQemu;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        easyTab = new QWidget();
        easyTab->setObjectName(QString::fromUtf8("easyTab"));
        gridLayout = new QGridLayout(easyTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        legecyBoot = new QRadioButton(easyTab);
        legecyBoot->setObjectName(QString::fromUtf8("legecyBoot"));

        horizontalLayout_2->addWidget(legecyBoot);

        uefiBoot = new QRadioButton(easyTab);
        uefiBoot->setObjectName(QString::fromUtf8("uefiBoot"));

        horizontalLayout_2->addWidget(uefiBoot);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 3, 1, 1);

        comboBox = new QComboBox(easyTab);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 3, 3, 1, 1);

        label = new QLabel(easyTab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(easyTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        isoPath = new QLineEdit(easyTab);
        isoPath->setObjectName(QString::fromUtf8("isoPath"));

        gridLayout->addWidget(isoPath, 1, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        qemuDiskPath = new QLineEdit(easyTab);
        qemuDiskPath->setObjectName(QString::fromUtf8("qemuDiskPath"));

        gridLayout->addWidget(qemuDiskPath, 0, 3, 1, 1);

        comboBox_2 = new QComboBox(easyTab);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 4, 3, 1, 1);

        label_3 = new QLabel(easyTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        isoPathTips = new QLabel(easyTab);
        isoPathTips->setObjectName(QString::fromUtf8("isoPathTips"));

        gridLayout->addWidget(isoPathTips, 1, 0, 1, 1);

        qemuDiskTips = new QLabel(easyTab);
        qemuDiskTips->setObjectName(QString::fromUtf8("qemuDiskTips"));

        gridLayout->addWidget(qemuDiskTips, 0, 0, 1, 1);

        pushButton = new QPushButton(easyTab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 4, 1, 1);

        pushButton_2 = new QPushButton(easyTab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 4, 1, 1);

        tabWidget->addTab(easyTab, QString());
        advancedTab = new QWidget();
        advancedTab->setObjectName(QString::fromUtf8("advancedTab"));
        gridLayout_2 = new QGridLayout(advancedTab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_9 = new QLabel(advancedTab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 5, 0, 1, 1);

        label_4 = new QLabel(advancedTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        checkBox = new QCheckBox(advancedTab);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_4->addWidget(checkBox, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 2, 2, 1, 1);

        comboBox_4 = new QComboBox(advancedTab);
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout_2->addWidget(comboBox_4, 3, 2, 1, 1);

        comboBox_5 = new QComboBox(advancedTab);
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout_2->addWidget(comboBox_5, 4, 2, 1, 1);

        label_5 = new QLabel(advancedTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        label_11 = new QLabel(advancedTab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 7, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 9, 0, 1, 1);

        label_7 = new QLabel(advancedTab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        comboBox_3 = new QComboBox(advancedTab);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_2->addWidget(comboBox_3, 1, 2, 1, 1);

        label_8 = new QLabel(advancedTab);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 4, 0, 1, 1);

        label_6 = new QLabel(advancedTab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        label_10 = new QLabel(advancedTab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 6, 0, 1, 1);

        label_12 = new QLabel(advancedTab);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 8, 0, 1, 1);

        spinBox = new QSpinBox(advancedTab);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout_2->addWidget(spinBox, 8, 2, 1, 1);

        spinBox_2 = new QSpinBox(advancedTab);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        gridLayout_2->addWidget(spinBox_2, 5, 2, 1, 1);

        spinBox_3 = new QSpinBox(advancedTab);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        gridLayout_2->addWidget(spinBox_3, 6, 2, 1, 1);

        spinBox_4 = new QSpinBox(advancedTab);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));

        gridLayout_2->addWidget(spinBox_4, 7, 2, 1, 1);

        spinBox_5 = new QSpinBox(advancedTab);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));

        gridLayout_2->addWidget(spinBox_5, 0, 2, 1, 1);

        tabWidget->addTab(advancedTab, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        advancedModeCheckbox = new QCheckBox(centralwidget);
        advancedModeCheckbox->setObjectName(QString::fromUtf8("advancedModeCheckbox"));

        horizontalLayout->addWidget(advancedModeCheckbox);

        runQemu = new QPushButton(centralwidget);
        runQemu->setObjectName(QString::fromUtf8("runQemu"));

        horizontalLayout->addWidget(runQemu);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 29));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        legecyBoot->setText(QCoreApplication::translate("MainWindow", "Legecy\357\274\210\344\274\240\347\273\237\345\220\257\345\212\250\357\274\211", nullptr));
        uefiBoot->setText(QCoreApplication::translate("MainWindow", "UEFI\345\220\257\345\212\250", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "kvm", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250\346\226\271\345\274\217\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\241\254\344\273\266\345\212\240\351\200\237\357\274\232", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "/usr/bin/qemu-system-x86_64", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "Qemu\351\200\211\346\213\251\357\274\232", nullptr));
        isoPathTips->setText(QCoreApplication::translate("MainWindow", "ISO\346\226\207\344\273\266\357\274\232", nullptr));
        qemuDiskTips->setText(QCoreApplication::translate("MainWindow", "\347\243\201\347\233\230\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\265\217\350\247\210", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\265\217\350\247\210", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(easyTab), QCoreApplication::translate("MainWindow", "\347\256\200\346\230\223", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "CPU\346\240\270\345\277\203\346\225\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "VNC \347\253\257\345\217\243\357\274\232", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\205\250\345\261\217\346\230\276\347\244\272", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "virt", nullptr));

        comboBox_5->setItemText(0, QCoreApplication::translate("MainWindow", "host", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "\345\274\225\345\257\274\351\241\272\345\272\217\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "CPU\347\272\277\347\250\213\346\225\260\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\234\272\345\231\250\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "CPU\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "CPU\346\225\260\351\207\217\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\345\206\205\345\255\230\345\244\247\345\260\217\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(advancedTab), QCoreApplication::translate("MainWindow", "\351\253\230\347\272\247", nullptr));
        advancedModeCheckbox->setText(QCoreApplication::translate("MainWindow", "\345\220\257\347\224\250\351\253\230\347\272\247\351\200\211\351\241\271", nullptr));
        runQemu->setText(QCoreApplication::translate("MainWindow", "\350\277\220\350\241\214 Qemu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
