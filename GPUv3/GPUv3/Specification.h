#pragma once
#include <QtWidgets/QDialog>
#include <QTextStream>
#include "ui_Specification.h"
#include "Card.h"
#include <QString>
#include <QTextStream>
#include <QVBoxLayout>

class Specification : public QDialog//, public Ui::Dialog
{
	Q_OBJECT

public:
	Specification(Card* card, QWidget * parent = Q_NULLPTR);
	~Specification();

private:
	Ui::Specification ui;
	Card* card;
	QGraphicsScene* scene;
	QPixmap* image;
	void loadSpecs();

};
