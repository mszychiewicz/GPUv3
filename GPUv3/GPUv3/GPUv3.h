#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GPUv3.h"
#include "Card.h"
#include "GamingGraphicsCard.h"
#include "GraphicsCard.h"
#include "SoundCard.h"

class GPUv3 : public QMainWindow
{
	Q_OBJECT

public:
	GPUv3(QWidget *parent = Q_NULLPTR);
public slots:
	void addGraphicsCard();
	void addGamingGraphicsCard();
	void addSoundCard();
	void deleteCard();
	void specification();
	void enableButtons();
	void disableButtons();
private:
	Ui::GPUv3Class ui;
	vector<Card*> cards;
};
