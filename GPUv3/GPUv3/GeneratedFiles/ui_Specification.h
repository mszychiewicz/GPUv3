/********************************************************************************
** Form generated from reading UI file 'Specification.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIFICATION_H
#define UI_SPECIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Specification
{
public:
    QLabel *Brand;
    QLineEdit *brandEdit;
    QLineEdit *modelEdit;
    QLineEdit *numberEdit;
    QLineEdit *nopEdit;
    QLabel *Model;
    QLabel *Number;
    QLabel *Nop;
    QPushButton *OkButton;

    void setupUi(QDialog *Specification)
    {
        if (Specification->objectName().isEmpty())
            Specification->setObjectName(QStringLiteral("Specification"));
        Specification->resize(400, 277);
        Brand = new QLabel(Specification);
        Brand->setObjectName(QStringLiteral("Brand"));
        Brand->setGeometry(QRect(10, 10, 47, 13));
        brandEdit = new QLineEdit(Specification);
        brandEdit->setObjectName(QStringLiteral("brandEdit"));
        brandEdit->setEnabled(false);
        brandEdit->setGeometry(QRect(10, 30, 113, 20));
        brandEdit->setAutoFillBackground(false);
        modelEdit = new QLineEdit(Specification);
        modelEdit->setObjectName(QStringLiteral("modelEdit"));
        modelEdit->setEnabled(false);
        modelEdit->setGeometry(QRect(10, 80, 113, 20));
        numberEdit = new QLineEdit(Specification);
        numberEdit->setObjectName(QStringLiteral("numberEdit"));
        numberEdit->setEnabled(false);
        numberEdit->setGeometry(QRect(10, 130, 113, 20));
        nopEdit = new QLineEdit(Specification);
        nopEdit->setObjectName(QStringLiteral("nopEdit"));
        nopEdit->setEnabled(false);
        nopEdit->setGeometry(QRect(10, 180, 113, 20));
        Model = new QLabel(Specification);
        Model->setObjectName(QStringLiteral("Model"));
        Model->setGeometry(QRect(10, 60, 47, 13));
        Number = new QLabel(Specification);
        Number->setObjectName(QStringLiteral("Number"));
        Number->setGeometry(QRect(10, 110, 47, 13));
        Nop = new QLabel(Specification);
        Nop->setObjectName(QStringLiteral("Nop"));
        Nop->setGeometry(QRect(10, 160, 111, 16));
        OkButton = new QPushButton(Specification);
        OkButton->setObjectName(QStringLiteral("OkButton"));
        OkButton->setGeometry(QRect(310, 240, 75, 23));

        retranslateUi(Specification);
        QObject::connect(OkButton, SIGNAL(clicked()), Specification, SLOT(accept()));

        QMetaObject::connectSlotsByName(Specification);
    } // setupUi

    void retranslateUi(QDialog *Specification)
    {
        Specification->setWindowTitle(QApplication::translate("Specification", "Specification", Q_NULLPTR));
        Brand->setText(QApplication::translate("Specification", "Brand", Q_NULLPTR));
        Model->setText(QApplication::translate("Specification", "Model", Q_NULLPTR));
        Number->setText(QApplication::translate("Specification", "Number", Q_NULLPTR));
        Nop->setText(QApplication::translate("Specification", "Number of ports", Q_NULLPTR));
        OkButton->setText(QApplication::translate("Specification", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Specification: public Ui_Specification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIFICATION_H
