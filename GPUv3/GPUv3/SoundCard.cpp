#include "SoundCard.h"

using namespace std;

SoundCard::SoundCard()
{
	brand = "ASUS";
	number = 2;
	model = "Xonar Essence STX " + to_string(number);
	working = true;
	numberOfPorts = 2;
	interface.reserve(2);
	for(int i = 0; i < numberOfPorts; i++)
		interface.push_back(OutputInterface());
	interface[0].changeTypeToMiniJack();
	interface[1].changeTypeToJack();
}


SoundCard::~SoundCard()
{
}

void SoundCard::specification()
{
	cout << *this << endl;
}

void SoundCard::state()
{
	cout << "Sound card is working" << endl;
}

void SoundCard::saveToFile()
{
	fstream file;
	file.open("SoundCard.txt", ios::out | ios::trunc);
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

void SoundCard::loadFromFile()
{
	fstream file;
	file.open("SoundCard.txt", ios::in);
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

ostream& operator<< (ostream &s, SoundCard &card)
{
	cout << endl;
	cout << "Brand:"; s << card.brand << endl;
	cout << "Model:"; s << card.model << endl;
	if (card.working)
		cout << "Card is ready to be used" << endl;
	else
		cout << "Card is broken" << endl;
	for (int i = 0; i < card.numberOfPorts; i++)
		s << card.interface[i];
	cout << endl;
	return s;
}

istream& operator>> (istream &o, SoundCard &card)
{
	getline(o, card.brand);
	getline(o, card.model);
	for (int i = 0; i < card.interface.size(); i++)
		o >> card.interface[i];
	return o;
}