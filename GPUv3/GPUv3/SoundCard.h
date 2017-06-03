#pragma once
#include "Card.h"
#include "OutputInterface.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;
///Class inheriting after Card
class SoundCard :
	public Card
{
public:
	///Default constructor
	SoundCard();
	///Default destructor
	~SoundCard();
	///Inherited function showing card specification
	void specification();
	///Inherited function informing about card status
	void state();
	///Inherited function saving card info to file
	void saveToFile();
	///Inherited function loading card info from file
	void loadFromFile();
	///Output stream operator 
	friend ostream& operator<< (ostream &s, SoundCard &card);
	///Input stream operator
	friend istream& operator>> (istream &o, SoundCard &card);
private:
	vector <OutputInterface> interface;///< Vector containing objects specifying card output interfaces
	bool working;///< Bool indicating if the sound card works
};

