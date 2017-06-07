#pragma once
#include<string>
#include<iostream>
#include<sstream>
#include<fstream>
#include <QStringList>

using namespace std;
///Abstract class
class Card
{
protected:
	string className;
	int number; ///< Specifies card number
	int numberOfPorts; ///< Specifies number of ports on the card
	string brand; ///< Specifies brand of the card
	string model; ///< Specifies model of the card
public:
	///Default constructor
	Card();
	///Virtual destructor
	virtual ~Card();
	///Abstract and virtual function informing about card status
	virtual void state() = 0;
	///Abstract and virtual function showing card specification
	virtual void specification() = 0;
	///Abstract and virtual function savings card data to file
	virtual void saveToFile() = 0;
	///Abstract and virtual function loading card data from file
	virtual void loadFromFile() = 0;
	string getClassName();
	string getBrand();
	string getModel();
	string getNumber();
	string getNumberOfPorts();
	virtual string getWorkingOrPerformanceScore() = 0;
	virtual QStringList getAdd() = 0;
	virtual QStringList getGpu() = 0;
	virtual QStringList getOi(int) = 0;
	virtual QStringList getVm() = 0;
};

