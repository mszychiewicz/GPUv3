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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Specification
{
public:
    QPushButton *OkButton;
    QGraphicsView *graphicsView;
    QGroupBox *gpuBox;
    QLabel *Nop_8;
    QLineEdit *codenameEdit;
    QLabel *Nop_10;
    QLineEdit *numberOfCoresEdit;
    QLabel *Nop_11;
    QLineEdit *fabricationEdit;
    QLabel *Nop_12;
    QLineEdit *coreClockEdit;
    QGroupBox *vmBox;
    QLabel *Nop_13;
    QLabel *Nop_14;
    QLabel *Nop_15;
    QLineEdit *typeEdit;
    QLineEdit *memoryClockRateEdit;
    QLineEdit *bandwidthEdit;
    QGroupBox *oi1Box;
    QLabel *Nop_16;
    QLabel *Nop_17;
    QLineEdit *standard1Edit;
    QLineEdit *type1Edit;
    QGroupBox *addBox;
    QLineEdit *waterCooledEdit;
    QLabel *Nop_5;
    QLabel *Nop_4;
    QLineEdit *customPaintEdit;
    QLineEdit *numberOfFansEdit;
    QLabel *Nop_7;
    QLabel *Nop_6;
    QLineEdit *ledBacklightEdit;
    QGroupBox *infoBox;
    QLabel *Nop_2;
    QLineEdit *numberEdit;
    QLabel *Brand;
    QLineEdit *numberOfPortsEdit;
    QLabel *Model;
    QLabel *Number;
    QLineEdit *modelEdit;
    QLineEdit *workingEdit;
    QLineEdit *brandEdit;
    QLabel *Nop;
    QLabel *Nop_3;
    QLineEdit *performanceEdit;
    QGroupBox *oi2Box;
    QLabel *Nop_19;
    QLabel *Nop_18;
    QLineEdit *standard2Edit;
    QLineEdit *type2Edit;

    void setupUi(QDialog *Specification)
    {
        if (Specification->objectName().isEmpty())
            Specification->setObjectName(QStringLiteral("Specification"));
        Specification->resize(568, 580);
        OkButton = new QPushButton(Specification);
        OkButton->setObjectName(QStringLiteral("OkButton"));
        OkButton->setGeometry(QRect(460, 530, 75, 23));
        graphicsView = new QGraphicsView(Specification);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setGeometry(QRect(150, 10, 401, 301));
        gpuBox = new QGroupBox(Specification);
        gpuBox->setObjectName(QStringLiteral("gpuBox"));
        gpuBox->setEnabled(true);
        gpuBox->setGeometry(QRect(150, 320, 131, 251));
        Nop_8 = new QLabel(gpuBox);
        Nop_8->setObjectName(QStringLiteral("Nop_8"));
        Nop_8->setGeometry(QRect(10, 20, 111, 16));
        codenameEdit = new QLineEdit(gpuBox);
        codenameEdit->setObjectName(QStringLiteral("codenameEdit"));
        codenameEdit->setEnabled(true);
        codenameEdit->setGeometry(QRect(10, 40, 113, 20));
        codenameEdit->setCursor(QCursor(Qt::ArrowCursor));
        codenameEdit->setMouseTracking(false);
        codenameEdit->setReadOnly(true);
        Nop_10 = new QLabel(gpuBox);
        Nop_10->setObjectName(QStringLiteral("Nop_10"));
        Nop_10->setGeometry(QRect(10, 70, 111, 16));
        numberOfCoresEdit = new QLineEdit(gpuBox);
        numberOfCoresEdit->setObjectName(QStringLiteral("numberOfCoresEdit"));
        numberOfCoresEdit->setEnabled(true);
        numberOfCoresEdit->setGeometry(QRect(10, 90, 113, 20));
        numberOfCoresEdit->setCursor(QCursor(Qt::ArrowCursor));
        numberOfCoresEdit->setMouseTracking(false);
        numberOfCoresEdit->setReadOnly(true);
        Nop_11 = new QLabel(gpuBox);
        Nop_11->setObjectName(QStringLiteral("Nop_11"));
        Nop_11->setGeometry(QRect(10, 120, 111, 16));
        fabricationEdit = new QLineEdit(gpuBox);
        fabricationEdit->setObjectName(QStringLiteral("fabricationEdit"));
        fabricationEdit->setEnabled(true);
        fabricationEdit->setGeometry(QRect(10, 140, 113, 20));
        fabricationEdit->setCursor(QCursor(Qt::ArrowCursor));
        fabricationEdit->setMouseTracking(false);
        fabricationEdit->setReadOnly(true);
        Nop_12 = new QLabel(gpuBox);
        Nop_12->setObjectName(QStringLiteral("Nop_12"));
        Nop_12->setGeometry(QRect(10, 170, 111, 16));
        coreClockEdit = new QLineEdit(gpuBox);
        coreClockEdit->setObjectName(QStringLiteral("coreClockEdit"));
        coreClockEdit->setEnabled(true);
        coreClockEdit->setGeometry(QRect(10, 190, 113, 20));
        coreClockEdit->setCursor(QCursor(Qt::ArrowCursor));
        coreClockEdit->setMouseTracking(false);
        coreClockEdit->setReadOnly(true);
        vmBox = new QGroupBox(Specification);
        vmBox->setObjectName(QStringLiteral("vmBox"));
        vmBox->setEnabled(true);
        vmBox->setGeometry(QRect(430, 320, 131, 181));
        Nop_13 = new QLabel(vmBox);
        Nop_13->setObjectName(QStringLiteral("Nop_13"));
        Nop_13->setGeometry(QRect(10, 20, 111, 16));
        Nop_14 = new QLabel(vmBox);
        Nop_14->setObjectName(QStringLiteral("Nop_14"));
        Nop_14->setGeometry(QRect(10, 70, 111, 16));
        Nop_15 = new QLabel(vmBox);
        Nop_15->setObjectName(QStringLiteral("Nop_15"));
        Nop_15->setGeometry(QRect(10, 120, 111, 16));
        typeEdit = new QLineEdit(vmBox);
        typeEdit->setObjectName(QStringLiteral("typeEdit"));
        typeEdit->setEnabled(true);
        typeEdit->setGeometry(QRect(10, 40, 113, 20));
        typeEdit->setCursor(QCursor(Qt::ArrowCursor));
        typeEdit->setMouseTracking(false);
        typeEdit->setReadOnly(true);
        memoryClockRateEdit = new QLineEdit(vmBox);
        memoryClockRateEdit->setObjectName(QStringLiteral("memoryClockRateEdit"));
        memoryClockRateEdit->setEnabled(true);
        memoryClockRateEdit->setGeometry(QRect(10, 90, 113, 20));
        memoryClockRateEdit->setCursor(QCursor(Qt::ArrowCursor));
        memoryClockRateEdit->setMouseTracking(false);
        memoryClockRateEdit->setReadOnly(true);
        bandwidthEdit = new QLineEdit(vmBox);
        bandwidthEdit->setObjectName(QStringLiteral("bandwidthEdit"));
        bandwidthEdit->setEnabled(true);
        bandwidthEdit->setGeometry(QRect(10, 140, 113, 20));
        bandwidthEdit->setCursor(QCursor(Qt::ArrowCursor));
        bandwidthEdit->setMouseTracking(false);
        bandwidthEdit->setReadOnly(true);
        oi1Box = new QGroupBox(Specification);
        oi1Box->setObjectName(QStringLiteral("oi1Box"));
        oi1Box->setEnabled(true);
        oi1Box->setGeometry(QRect(290, 320, 131, 121));
        Nop_16 = new QLabel(oi1Box);
        Nop_16->setObjectName(QStringLiteral("Nop_16"));
        Nop_16->setGeometry(QRect(10, 20, 111, 16));
        Nop_17 = new QLabel(oi1Box);
        Nop_17->setObjectName(QStringLiteral("Nop_17"));
        Nop_17->setGeometry(QRect(10, 70, 111, 16));
        standard1Edit = new QLineEdit(oi1Box);
        standard1Edit->setObjectName(QStringLiteral("standard1Edit"));
        standard1Edit->setEnabled(true);
        standard1Edit->setGeometry(QRect(10, 90, 113, 20));
        standard1Edit->setCursor(QCursor(Qt::ArrowCursor));
        standard1Edit->setMouseTracking(false);
        standard1Edit->setReadOnly(true);
        type1Edit = new QLineEdit(oi1Box);
        type1Edit->setObjectName(QStringLiteral("type1Edit"));
        type1Edit->setEnabled(true);
        type1Edit->setGeometry(QRect(10, 40, 113, 20));
        type1Edit->setCursor(QCursor(Qt::ArrowCursor));
        type1Edit->setMouseTracking(false);
        type1Edit->setReadOnly(true);
        addBox = new QGroupBox(Specification);
        addBox->setObjectName(QStringLiteral("addBox"));
        addBox->setEnabled(true);
        addBox->setGeometry(QRect(10, 350, 131, 221));
        waterCooledEdit = new QLineEdit(addBox);
        waterCooledEdit->setObjectName(QStringLiteral("waterCooledEdit"));
        waterCooledEdit->setEnabled(true);
        waterCooledEdit->setGeometry(QRect(10, 190, 113, 20));
        waterCooledEdit->setCursor(QCursor(Qt::ArrowCursor));
        waterCooledEdit->setMouseTracking(false);
        waterCooledEdit->setReadOnly(true);
        Nop_5 = new QLabel(addBox);
        Nop_5->setObjectName(QStringLiteral("Nop_5"));
        Nop_5->setGeometry(QRect(10, 70, 111, 16));
        Nop_4 = new QLabel(addBox);
        Nop_4->setObjectName(QStringLiteral("Nop_4"));
        Nop_4->setGeometry(QRect(10, 20, 111, 16));
        customPaintEdit = new QLineEdit(addBox);
        customPaintEdit->setObjectName(QStringLiteral("customPaintEdit"));
        customPaintEdit->setEnabled(true);
        customPaintEdit->setGeometry(QRect(10, 90, 113, 20));
        customPaintEdit->setCursor(QCursor(Qt::ArrowCursor));
        customPaintEdit->setMouseTracking(false);
        customPaintEdit->setReadOnly(true);
        numberOfFansEdit = new QLineEdit(addBox);
        numberOfFansEdit->setObjectName(QStringLiteral("numberOfFansEdit"));
        numberOfFansEdit->setEnabled(true);
        numberOfFansEdit->setGeometry(QRect(10, 40, 113, 20));
        numberOfFansEdit->setCursor(QCursor(Qt::ArrowCursor));
        numberOfFansEdit->setMouseTracking(false);
        numberOfFansEdit->setReadOnly(true);
        Nop_7 = new QLabel(addBox);
        Nop_7->setObjectName(QStringLiteral("Nop_7"));
        Nop_7->setGeometry(QRect(10, 170, 111, 16));
        Nop_6 = new QLabel(addBox);
        Nop_6->setObjectName(QStringLiteral("Nop_6"));
        Nop_6->setGeometry(QRect(10, 120, 111, 16));
        ledBacklightEdit = new QLineEdit(addBox);
        ledBacklightEdit->setObjectName(QStringLiteral("ledBacklightEdit"));
        ledBacklightEdit->setEnabled(true);
        ledBacklightEdit->setGeometry(QRect(10, 140, 113, 20));
        ledBacklightEdit->setCursor(QCursor(Qt::ArrowCursor));
        ledBacklightEdit->setMouseTracking(false);
        ledBacklightEdit->setReadOnly(true);
        infoBox = new QGroupBox(Specification);
        infoBox->setObjectName(QStringLiteral("infoBox"));
        infoBox->setGeometry(QRect(10, 10, 131, 331));
        Nop_2 = new QLabel(infoBox);
        Nop_2->setObjectName(QStringLiteral("Nop_2"));
        Nop_2->setEnabled(true);
        Nop_2->setGeometry(QRect(10, 220, 111, 16));
        numberEdit = new QLineEdit(infoBox);
        numberEdit->setObjectName(QStringLiteral("numberEdit"));
        numberEdit->setEnabled(true);
        numberEdit->setGeometry(QRect(10, 140, 113, 20));
        numberEdit->setCursor(QCursor(Qt::ArrowCursor));
        numberEdit->setMouseTracking(false);
        numberEdit->setReadOnly(true);
        Brand = new QLabel(infoBox);
        Brand->setObjectName(QStringLiteral("Brand"));
        Brand->setGeometry(QRect(10, 20, 47, 13));
        numberOfPortsEdit = new QLineEdit(infoBox);
        numberOfPortsEdit->setObjectName(QStringLiteral("numberOfPortsEdit"));
        numberOfPortsEdit->setEnabled(true);
        numberOfPortsEdit->setGeometry(QRect(10, 190, 113, 20));
        numberOfPortsEdit->setCursor(QCursor(Qt::ArrowCursor));
        numberOfPortsEdit->setMouseTracking(false);
        numberOfPortsEdit->setReadOnly(true);
        Model = new QLabel(infoBox);
        Model->setObjectName(QStringLiteral("Model"));
        Model->setGeometry(QRect(10, 70, 47, 13));
        Number = new QLabel(infoBox);
        Number->setObjectName(QStringLiteral("Number"));
        Number->setGeometry(QRect(10, 120, 47, 13));
        modelEdit = new QLineEdit(infoBox);
        modelEdit->setObjectName(QStringLiteral("modelEdit"));
        modelEdit->setEnabled(true);
        modelEdit->setGeometry(QRect(10, 90, 113, 20));
        modelEdit->setCursor(QCursor(Qt::ArrowCursor));
        modelEdit->setMouseTracking(false);
        modelEdit->setReadOnly(true);
        workingEdit = new QLineEdit(infoBox);
        workingEdit->setObjectName(QStringLiteral("workingEdit"));
        workingEdit->setEnabled(true);
        workingEdit->setGeometry(QRect(10, 240, 113, 20));
        workingEdit->setCursor(QCursor(Qt::ArrowCursor));
        workingEdit->setMouseTracking(false);
        workingEdit->setReadOnly(true);
        brandEdit = new QLineEdit(infoBox);
        brandEdit->setObjectName(QStringLiteral("brandEdit"));
        brandEdit->setEnabled(true);
        brandEdit->setGeometry(QRect(10, 40, 113, 20));
        brandEdit->setCursor(QCursor(Qt::ArrowCursor));
        brandEdit->setMouseTracking(false);
        brandEdit->setAcceptDrops(true);
        brandEdit->setAutoFillBackground(false);
        brandEdit->setFrame(true);
        brandEdit->setReadOnly(true);
        Nop = new QLabel(infoBox);
        Nop->setObjectName(QStringLiteral("Nop"));
        Nop->setGeometry(QRect(10, 170, 111, 16));
        Nop_3 = new QLabel(infoBox);
        Nop_3->setObjectName(QStringLiteral("Nop_3"));
        Nop_3->setEnabled(true);
        Nop_3->setGeometry(QRect(10, 270, 111, 16));
        performanceEdit = new QLineEdit(infoBox);
        performanceEdit->setObjectName(QStringLiteral("performanceEdit"));
        performanceEdit->setEnabled(true);
        performanceEdit->setGeometry(QRect(10, 290, 113, 20));
        performanceEdit->setCursor(QCursor(Qt::ArrowCursor));
        performanceEdit->setMouseTracking(false);
        performanceEdit->setReadOnly(true);
        oi2Box = new QGroupBox(Specification);
        oi2Box->setObjectName(QStringLiteral("oi2Box"));
        oi2Box->setEnabled(true);
        oi2Box->setGeometry(QRect(290, 450, 131, 121));
        Nop_19 = new QLabel(oi2Box);
        Nop_19->setObjectName(QStringLiteral("Nop_19"));
        Nop_19->setGeometry(QRect(10, 20, 111, 16));
        Nop_18 = new QLabel(oi2Box);
        Nop_18->setObjectName(QStringLiteral("Nop_18"));
        Nop_18->setGeometry(QRect(10, 70, 111, 16));
        standard2Edit = new QLineEdit(oi2Box);
        standard2Edit->setObjectName(QStringLiteral("standard2Edit"));
        standard2Edit->setEnabled(true);
        standard2Edit->setGeometry(QRect(10, 90, 113, 20));
        standard2Edit->setCursor(QCursor(Qt::ArrowCursor));
        standard2Edit->setMouseTracking(false);
        standard2Edit->setReadOnly(true);
        type2Edit = new QLineEdit(oi2Box);
        type2Edit->setObjectName(QStringLiteral("type2Edit"));
        type2Edit->setEnabled(true);
        type2Edit->setGeometry(QRect(10, 40, 113, 20));
        type2Edit->setCursor(QCursor(Qt::ArrowCursor));
        type2Edit->setMouseTracking(false);
        type2Edit->setReadOnly(true);
        Nop_19->raise();
        standard2Edit->raise();
        Nop_18->raise();
        type2Edit->raise();
        Nop_19->raise();
        Nop_18->raise();
        standard2Edit->raise();
        type2Edit->raise();

        retranslateUi(Specification);
        QObject::connect(OkButton, SIGNAL(clicked()), Specification, SLOT(accept()));

        QMetaObject::connectSlotsByName(Specification);
    } // setupUi

    void retranslateUi(QDialog *Specification)
    {
        Specification->setWindowTitle(QApplication::translate("Specification", "Specification", Q_NULLPTR));
        OkButton->setText(QApplication::translate("Specification", "OK", Q_NULLPTR));
        gpuBox->setTitle(QApplication::translate("Specification", "Graphics Processing Unit", Q_NULLPTR));
        Nop_8->setText(QApplication::translate("Specification", "Codename", Q_NULLPTR));
        Nop_10->setText(QApplication::translate("Specification", "Number of cores", Q_NULLPTR));
        Nop_11->setText(QApplication::translate("Specification", "Fabrication technology", Q_NULLPTR));
        Nop_12->setText(QApplication::translate("Specification", "Core clock", Q_NULLPTR));
        vmBox->setTitle(QApplication::translate("Specification", "Video Memory", Q_NULLPTR));
        Nop_13->setText(QApplication::translate("Specification", "Type", Q_NULLPTR));
        Nop_14->setText(QApplication::translate("Specification", "Memory clock rate", Q_NULLPTR));
        Nop_15->setText(QApplication::translate("Specification", "Bandwidth", Q_NULLPTR));
        oi1Box->setTitle(QApplication::translate("Specification", "Output interface No1", Q_NULLPTR));
        Nop_16->setText(QApplication::translate("Specification", "Type", Q_NULLPTR));
        Nop_17->setText(QApplication::translate("Specification", "Standard", Q_NULLPTR));
        addBox->setTitle(QApplication::translate("Specification", "Additional", Q_NULLPTR));
        Nop_5->setText(QApplication::translate("Specification", "Custom paint", Q_NULLPTR));
        Nop_4->setText(QApplication::translate("Specification", "Number of fans", Q_NULLPTR));
        Nop_7->setText(QApplication::translate("Specification", "Water Cooling", Q_NULLPTR));
        Nop_6->setText(QApplication::translate("Specification", "Led backlight", Q_NULLPTR));
        infoBox->setTitle(QApplication::translate("Specification", "Information", Q_NULLPTR));
        Nop_2->setText(QApplication::translate("Specification", "Status", Q_NULLPTR));
        Brand->setText(QApplication::translate("Specification", "Brand", Q_NULLPTR));
        Model->setText(QApplication::translate("Specification", "Model", Q_NULLPTR));
        Number->setText(QApplication::translate("Specification", "Number", Q_NULLPTR));
        Nop->setText(QApplication::translate("Specification", "Number of ports", Q_NULLPTR));
        Nop_3->setText(QApplication::translate("Specification", "Performance score", Q_NULLPTR));
        oi2Box->setTitle(QApplication::translate("Specification", "Output interface No2", Q_NULLPTR));
        Nop_19->setText(QApplication::translate("Specification", "Type", Q_NULLPTR));
        Nop_18->setText(QApplication::translate("Specification", "Standard", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Specification: public Ui_Specification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIFICATION_H
