#pragma once
#include "GraphicsCard.h"
#include <QStringList>

using namespace std;
///Class inheriting after GraphicsCard
class GamingGraphicsCard :
	public GraphicsCard
{
public:
	///Default constructor
	GamingGraphicsCard();
	///Default destructor
	~GamingGraphicsCard();
	///Inherited function informing about card status
	void state();
	///Inherited function showing card specification
	void specification();
	///Inherited function saving card info to file
	void saveToFile();
	///Inherited function loading card info from file
	void loadFromFile();
	///Output stream operator 
	friend ostream& operator<< (ostream &s, GamingGraphicsCard &card);
	///Input stream operator
	friend istream& operator>> (istream &o, GamingGraphicsCard &card);

	QStringList getAdd();
private:
	int numberOfFans;///< Specifies number of fans the card has
	string customPaint;///< Specifies color of the card custom paint
	string ledBacklight;///< Specifies color of the card LED backlight
	bool waterCooled;///<Bool specyfying if the card is water cooled
	
};

