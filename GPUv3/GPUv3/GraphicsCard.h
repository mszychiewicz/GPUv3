#pragma once
#include "Card.h"
#include "GraphicsProcessingUnit.h"
#include "OutputInterface.h"
#include "VideoMemory.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;
///Class inheriting after Card
class GraphicsCard :
	public Card
{
public:
	///Default constructor
	GraphicsCard();
	///Custom constructor reqireing card bran, model and number of ports
	GraphicsCard(string brand, string model, int numberOfPorts);
	///Copying construcor
	GraphicsCard(const GraphicsCard &card);
	///Default destructor
	~GraphicsCard();
	///Function adding 1000 points to card performance score
	void change();
	///Function showing number of currently constructed cards
	void showNumberOfCards();
	///Inherited function informing about card status
	void state();
	///Inherited function showing card specification
	void specification();
	///Inherited function saving card info to file
	void saveToFile();
	///Inherited function loading card info from file
	void loadFromFile();
	///Output stream operator 
	friend ostream& operator<< (ostream &s, GraphicsCard &card);
	///Input stream operator
	friend istream& operator>> (istream &o, GraphicsCard &card);
	///Operator comparing brand and model of two cards
	bool operator == (const GraphicsCard &card);
	///Operator checking if performance score of both cards is above 16250 points
	bool operator && (const GraphicsCard &card);
	///Operator checking if performance score of card is smaller than other card performance score
	bool operator < (const GraphicsCard &card);
	///Operator checking if performance score of card is larger than other card performance score
	bool operator > (const GraphicsCard &card);
	///Operator adding insterted number of points to card performance score
	GraphicsCard& operator + (int);
	///Operator subtracting insterted number of points from card performance score
	GraphicsCard& operator - (int);
	///Operator returning number of ports the card has
	operator int();
	///Operator returning full card name
	operator string();
	///Operator returning specific output interface adress from array 
	OutputInterface operator [](int);
	string getBrand();
	string getModel();
	string getNumber();
	string getNop();
protected:
	int performanceScore;///< Specifies performance score of the card
	VideoMemory memory;///< Object containing info about card video memory
	vector <OutputInterface> interface;///< Vector containing objects specifying card output interfaces
	GraphicsProcessingUnit gpu;///< Object containing info about card GPU
	static int numberOfCards;///< Specifies number of created cards
};

