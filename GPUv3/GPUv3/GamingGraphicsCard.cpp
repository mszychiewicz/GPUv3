#include "GamingGraphicsCard.h"

GamingGraphicsCard::GamingGraphicsCard()
{
	brand = "Nvidia";
	number = 1380;
	model = "GTX " + to_string(number);
	performanceScore = 13 * number;
	numberOfFans = 3;
	customPaint = "Ruby Red";
	ledBacklight = "Red";
	sliCompatibility = true;
	waterCooled = true;
}


GamingGraphicsCard::~GamingGraphicsCard()
{
}

void GamingGraphicsCard::state()
{
	cout << "Gaming graphics card is working" << endl;
}

void GamingGraphicsCard::specification()
{
	cout << *this << endl;
}

void GamingGraphicsCard::saveToFile()
{
	fstream file;
	file.open("GamingGraphicsCard.txt", ios::out | ios::trunc);
	if (file.good() == true)
	{
		file << *this;
		file.close();
		system("cls");
		cout << "Succesfuly saved" << endl;
	}
	else
	{
		cout << "Not able to open file" << endl;
	}
}

void GamingGraphicsCard::loadFromFile()
{
	fstream file;
	file.open("GamingGraphicsCard.txt", ios::in);
	if (file.good() == true)
	{
		file >> *this;
		file.close();
		system("cls");
		cout << "Succesfuly opened file" << endl;
	}
	else
	{
		cout << "Not able to open file" << endl;
	}
}

ostream& operator<< (ostream &s, GamingGraphicsCard &card)
{
	cout << endl;
	cout << "Brand:"; s << card.brand << endl;
	cout << "Model:"; s << card.model << endl;
	cout << "Performance score: "; s << card.performanceScore << endl;
	cout << "Number of fans: "; s << card.numberOfFans << endl;
	cout << "Paintjob: "; s << card.customPaint << endl;
	cout << "SLI ";
	if(card.sliCompatibility)
		cout << "compatible" << endl;
	else 
		cout << "incompatible" << endl;
	cout << "LED backlight: "; s << card.ledBacklight << endl;
	cout << "Water cooled: ";
	if (card.waterCooled)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	s << card.gpu;
	s << card.memory;
	for (int i = 0; i < card.numberOfPorts; i++)
		s << card.interface[i];
	cout << endl;
	return s;
}

istream& operator >> (istream &o, GamingGraphicsCard &card)
{
	getline(o, card.brand);
	getline(o, card.model);
	o >> card.performanceScore;
	o >> card.numberOfFans;
	o.ignore();
	getline(o, card.customPaint);
	getline(o, card.ledBacklight);
	o >> card.gpu;
	o >> card.memory;
	for (int i = 0; i < card.interface.size(); i++)
		o >> card.interface[i];
	return o;
}

int numberOfFans;
string customPaint;
bool sliCompatibility;
string ledBacklight;
bool waterCooled;