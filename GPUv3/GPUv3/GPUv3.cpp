#include "GPUv3.h"

GPUv3::GPUv3(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	disableButtons();
}

void GPUv3::addGraphicsCard()
{
	cards.push_back(new GraphicsCard());
	enableButtons();
}
void GPUv3::addGamingGraphicsCard()
{
	cards.push_back(new GamingGraphicsCard());
	enableButtons();
}
void GPUv3::addSoundCard()
{
	cards.push_back(new SoundCard());
	enableButtons();
}

void GPUv3::deleteCard()
{
	disableButtons();
}

void GPUv3::specification()
{

}

void GPUv3::enableButtons()
{
	ui.pushButton_3->setEnabled(true);
	ui.pushButton_4->setEnabled(true);
}

void GPUv3::disableButtons()
{
	if (cards.empty())
	{
		ui.pushButton_3->setEnabled(false);
		ui.pushButton_4->setEnabled(false);
	}
}