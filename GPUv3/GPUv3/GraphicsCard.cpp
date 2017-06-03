#include "GraphicsCard.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int GraphicsCard::numberOfCards = 0;

GraphicsCard::GraphicsCard()
{

	brand = "GeForce";
	number = 1200 + (10 * (1 + (rand() % 9))); //random number from 1210 to 1290
	model = "GTX " + to_string(number);
	performanceScore = 13 * number;
	numberOfPorts = 2;
	interface.reserve(numberOfPorts);
	for (int i = 0; i < numberOfPorts; i++)
		interface.push_back(OutputInterface());
	numberOfCards++;
}


GraphicsCard::GraphicsCard(string customBrand, string customModel, int numberOfPorts = 2)
{

	brand = customBrand;
	model = customModel;
	interface.reserve(numberOfPorts);
	for (int i = 0; i < numberOfPorts; i++)
		interface.push_back(OutputInterface());
	numberOfCards++;
}


GraphicsCard::GraphicsCard(const GraphicsCard &card)
{	

	brand = card.brand;
	number = card.number;
	model = card.model;
	performanceScore = card.performanceScore;
	numberOfPorts = card.numberOfPorts;
	interface.reserve(card.numberOfPorts);
	for (int i = 0; i < numberOfPorts; i++)
		interface.push_back(card.interface[i]);
	memory = card.memory;
	gpu = card.gpu;
	numberOfCards++;
}


GraphicsCard::~GraphicsCard()
{	
	numberOfCards--;
}


void GraphicsCard::change()
{
	performanceScore += 1000;
}

void GraphicsCard::showNumberOfCards()
{
	cout << "Number of graphics cards = " << numberOfCards << endl << endl;
}

void GraphicsCard::state()
{
	cout << "Graphics card is working" << endl;
}

void GraphicsCard::specification()
{
	cout << *this << endl;
}

void GraphicsCard::saveToFile()
{
	fstream file;
	file.open("GraphicsCard.txt", ios::out | ios::trunc);
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

void GraphicsCard::loadFromFile() 
{
	fstream file;
	file.open("GraphicsCard.txt", ios::in);
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

bool GraphicsCard:: operator == (const GraphicsCard &card)
{
	if (card.brand == brand && card.model == model)
		return true;
	else
		return false;
}

bool GraphicsCard:: operator && (const GraphicsCard &card)
{
	if (performanceScore > 13 * 1250 && card.performanceScore > 13 * 1250)
		return true;
	else
		return false;
}

bool GraphicsCard:: operator < (const GraphicsCard &card)
{
	if (performanceScore < card.performanceScore)
		return true;
	else
		return false;
}

bool GraphicsCard:: operator > (const GraphicsCard &card)
{
	if (performanceScore > card.performanceScore)
		return true;
	else
		return false;
}

GraphicsCard& GraphicsCard:: operator + (int a)
{
	performanceScore += a;
	return *this;
}

GraphicsCard& GraphicsCard:: operator - (int a)
{
	performanceScore -= a;
	return *this;
}

GraphicsCard:: operator int()
{
	return numberOfPorts;
}

GraphicsCard:: operator string()
{
	return brand + " " + model;
}

OutputInterface GraphicsCard:: operator [](int a)
{
	return interface[a];
}

ostream& operator<< (ostream &s, GraphicsCard &card)
{
	cout << endl;
	cout << "Brand:"; s << card.brand << endl;
	cout << "Model:"; s << card.model << endl;
	cout << "Performance score: "; s << card.performanceScore << endl;
	s << card.gpu;
	s << card.memory;
	for (int i = 0; i < card.numberOfPorts; i++)
		s << card.interface[i];
	cout << endl;
	return s;
}

istream& operator>> (istream &o, GraphicsCard &card)
{
	getline(o, card.brand);
	getline(o, card.model);
	o >> card.performanceScore;
	o >> card.gpu;
	o >> card.memory;
	for (int i = 0; i < card.interface.size(); i++)
		o >> card.interface[i];
	return o;
}
