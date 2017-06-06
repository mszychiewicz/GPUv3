#include "Specification.h"

#define SOUND_PIC "Resources\\SoundCard.jpg"
#define GRAPHICS_PIC "Resources\\GraphicsCard.jpg"
#define GAMING_PIC "Resources\\GamingGraphicsCard.jpg"


Specification::Specification(Card* card, QWidget * parent) : QDialog(parent) 
{
	ui.setupUi(this);
	this->setFixedSize(570, 580);
	this->card = card;
	scene = new QGraphicsScene();
	image = new QPixmap();
	add = ui.addBox->findChildren<QLineEdit*>();
	gpu = ui.gpuBox->findChildren<QLineEdit*>();
	oi1 = ui.oi1Box->findChildren<QLineEdit*>();
	oi2 = ui.oi2Box->findChildren<QLineEdit*>();
	//vm = ui.vmBox->findChildren<QLineEdit*>();
	loadSpecs();
}

Specification::~Specification() {
	
}

void Specification::loadSpecs() 
{
	ui.graphicsView->setScene(scene);

	if(card->getClassName() == "SoundCard")
	{
		if (image->load(SOUND_PIC))
		{
			scene->addPixmap(*image);
		}

		ui.performanceEdit->setEnabled(false);
		ui.gpuBox->setEnabled(false);
		ui.oi1Box->setEnabled(false);
		ui.oi2Box->setEnabled(false);
		ui.addBox->setEnabled(false);
		ui.vmBox->setEnabled(false);

		ui.brandEdit->setText(QString::fromStdString(card->getBrand()));
		ui.modelEdit->setText(QString::fromStdString(card->getModel()));
		ui.numberEdit->setText(QString::fromStdString(card->getNumber()));
		ui.numberOfPortsEdit->setText(QString::fromStdString(card->getNumberOfPorts()));
		ui.workingEdit->setText(QString::fromStdString(card->getWorkingOrPerformanceScore()));
	}

	if (card->getClassName() == "GraphicsCard")
	{
		if (image->load(GRAPHICS_PIC))
		{
			scene->addPixmap(*image);
		}

		ui.workingEdit->setEnabled(false);
		ui.addBox->setEnabled(false);

		//for (int i = 0; i < 3; i++) {
		//	gpu[i]->setText(card.getgpu()); //aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
		//}

		ui.brandEdit->setText(QString::fromStdString(card->getBrand()));
		ui.modelEdit->setText(QString::fromStdString(card->getModel()));
		ui.numberEdit->setText(QString::fromStdString(card->getNumber()));
		ui.numberOfPortsEdit->setText(QString::fromStdString(card->getNumberOfPorts()));
		ui.performanceEdit->setText(QString::fromStdString(card->getWorkingOrPerformanceScore()));
		
	}

	if (card->getClassName() == "GamingGraphicsCard")
	{
		if (image->load(GAMING_PIC))
		{
			scene->addPixmap(*image);
		}

		ui.workingEdit->setEnabled(false);

		ui.brandEdit->setText(QString::fromStdString(card->getBrand()));
		ui.modelEdit->setText(QString::fromStdString(card->getModel()));
		ui.numberEdit->setText(QString::fromStdString(card->getNumber()));
		ui.numberOfPortsEdit->setText(QString::fromStdString(card->getNumberOfPorts()));
		ui.performanceEdit->setText(QString::fromStdString(card->getWorkingOrPerformanceScore()));

	}
	/*ui.performanceScoreEdit->setText(QString::fromStdString(card->get()));
	ui.workingEdit->setText(QString::fromStdString(card->get()));

	ui.customPaintEdit->setText(QString::fromStdString(card->get()));
	ui.ledBacklightEdit->setText(QString::fromStdString(card->get()));
	ui.numberOfFansEdit->setText(QString::fromStdString(card->get()));
	ui.waterCooledEdit->setText(QString::fromStdString(card->get()));

	ui.codenameEdit->setText(QString::fromStdString(card->get()));
	ui.numberOfCoresEdit->setText(QString::fromStdString(card->get()));
	ui.fabricationEdit->setText(QString::fromStdString(card->get()));
	ui.coreClockEdit->setText(QString::fromStdString(card->get()));
		
	ui.type1Edit->setText(QString::fromStdString(card->get()));
	ui.standard1Edit->setText(QString::fromStdString(card->get()));

	ui.type2Edit->setText(QString::fromStdString(card->get()));
	ui.standard2Edit->setText(QString::fromStdString(card->get()));
	
	ui.typeEdit->setText(QString::fromStdString(card->get()));
	ui.bandwidthEdit->setText(QString::fromStdString(card->get()));
	ui.memoryClockRateEdit->setText(QString::fromStdString(card->get()));*/
}