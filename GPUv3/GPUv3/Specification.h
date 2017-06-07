#pragma once
#include <QtWidgets/QDialog>
#include "ui_Specification.h"
#include "Card.h"
#include "GraphicsCard.h"
#include "GamingGraphicsCard.h"
#include "SoundCard.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QVBoxLayout>
#include <QMessageBox>

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
	QList<QLineEdit*> add;
	QList<QLineEdit*> gpu;
	QList<QLineEdit*> oi1;
	QList<QLineEdit*> oi2;
	QList<QLineEdit*> vm;
	void loadSpecs();
	void showSpecs(QList<QString>, int, QList<QLineEdit*>);

};
