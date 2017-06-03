#include "GPUv3.h"

GPUv3::GPUv3(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	disableButtons();
	cardList = new QStringListModel();
	list = new QStringList();
	ui.listView->setEditTriggers(QAbstractItemView::AnyKeyPressed);
}

void GPUv3::addGraphicsCard()
{
	cards.push_back(new GraphicsCard());
	list->append("Graphics card");
	cardList->setStringList(*list);
	ui.listView->setModel(cardList);
	enableButtons();
}
void GPUv3::addGamingGraphicsCard()
{
	cards.push_back(new GamingGraphicsCard());
	list->append("Gaming graphics card");
	cardList->setStringList(*list);
	ui.listView->setModel(cardList);
	enableButtons();
}
void GPUv3::addSoundCard()
{
	cards.push_back(new SoundCard());
	list->append("Sound card");
	cardList->setStringList(*list);
	ui.listView->setModel(cardList);
	enableButtons();
}

void GPUv3::deleteCard()
{
	int index = ui.listView->currentIndex().row();

	if (index >= 0) {
		if (!cards.empty()) {
			cards.erase(cards.begin() + index);
			list->erase(list->begin() + index);
		}
		cardList->removeRows(index, 1);
	}
	disableButtons();
}

void GPUv3::specification()
{
	int index = ui.listView->currentIndex().row();

	if (!cards.empty() && index >= 0) {
		Specification *specs = new Specification(cards[index]);
		specs->exec();
	}
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