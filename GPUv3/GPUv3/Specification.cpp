#include "Specification.h"


Specification::Specification(Card* card, QWidget * parent) : QDialog(parent) 
{
	ui.setupUi(this);
	this->card = card;
	loadSpecs();
	//scene = new QGraphicsScene();
	image = new QPixmap();
}

Specification::~Specification() {
	
}

void Specification::loadSpecs() 
{
	ui.brandEdit->setText(QString::fromStdString(card->getBrand()));
	ui.modelEdit->setText(QString::fromStdString(card->getModel()));
	ui.numberEdit->setText(QString::fromStdString(card->getNumber()));
	ui.nopEdit->setText(QString::fromStdString(card->getNop()));
}