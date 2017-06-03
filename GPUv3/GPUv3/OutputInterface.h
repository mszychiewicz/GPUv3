#pragma once
#include <string>
#include <iostream>

using std::string;
using namespace std;
///Class containing info about card output interface
class OutputInterface
{
private:
	string type;///< Specifies output interface type
	int standard;///< Specifies standard in which the output interface was made
public:
	///Default constructor
	OutputInterface();
	///Default destructor
	~OutputInterface();
	///Output stream operator 
	friend ostream& operator<< (ostream &s, OutputInterface &interface);
	///Input stream operator
	friend istream& operator>> (istream &o, OutputInterface &interface);
	///Function returning random output interface type
	string randomType();
	///Function changing output interface type to Mini Jack
	void changeTypeToMiniJack();
	///Function changing output interface type to Jack
	void changeTypeToJack();
};