/********************************************************************************
** Form generated from reading UI file 'GPUv3.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPUV3_H
#define UI_GPUV3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GPUv3Class
{
public:
    QWidget *centralWidget;
    QListView *listView;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GPUv3Class)
    {
        if (GPUv3Class->objectName().isEmpty())
            GPUv3Class->setObjectName(QStringLiteral("GPUv3Class"));
        GPUv3Class->setEnabled(true);
        GPUv3Class->resize(512, 318);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GPUv3Class->sizePolicy().hasHeightForWidth());
        GPUv3Class->setSizePolicy(sizePolicy);
        GPUv3Class->setAnimated(true);
        centralWidget = new QWidget(GPUv3Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(200, 20, 301, 261));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 140, 181, 31));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 180, 181, 31));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 20, 181, 31));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 60, 181, 31));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 100, 181, 31));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 250, 181, 31));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        GPUv3Class->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(GPUv3Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GPUv3Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GPUv3Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GPUv3Class->setStatusBar(statusBar);

        retranslateUi(GPUv3Class);
        QObject::connect(pushButton_3, SIGNAL(clicked()), GPUv3Class, SLOT(specification()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), GPUv3Class, SLOT(deleteCard()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), GPUv3Class, SLOT(addGamingGraphicsCard()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), GPUv3Class, SLOT(addSoundCard()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), GPUv3Class, SLOT(addGraphicsCard()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), GPUv3Class, SLOT(close()));

        QMetaObject::connectSlotsByName(GPUv3Class);
    } // setupUi

    void retranslateUi(QMainWindow *GPUv3Class)
    {
        GPUv3Class->setWindowTitle(QApplication::translate("GPUv3Class", "GPUv3", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("GPUv3Class", "Show specification", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("GPUv3Class", "Delete card", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("GPUv3Class", "Add graphics card", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("GPUv3Class", "Add gaming graphics card", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("GPUv3Class", "Add sound card", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("GPUv3Class", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GPUv3Class: public Ui_GPUv3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPUV3_H
