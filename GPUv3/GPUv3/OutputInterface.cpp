#include "OutputInterface.h"
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

OutputInterface::OutputInterface()
{
	type = randomType();
	standard = 1 + (rand() % 5);
}

OutputInterface::~OutputInterface()
{
}

ostream& operator<< (ostream &s, OutputInterface &interface)
{
	cout << "Output Interface specification:" << endl;
	cout << "    Type: "; s << interface.type << endl;
	cout << "    Standard used: "; s << interface.standard << endl;
	return s;
}

istream& operator>> (istream &o, OutputInterface &interface)
{
	o.ignore();
	getline(o, interface.type);
	o >> interface.standard;
	return o;
}

string OutputInterface::randomType()
{
	switch (rand() % 4)
	{
	case 0:
		return "VGA";
	case 1:
		return "DVI";
	case 2:
		return "HDMI";
	case 3:
		return "DisplayPort";
	default:
		return "error";
	}
}

void OutputInterface::changeTypeToMiniJack()
{
	type = "Mini Jack";
}

void OutputInterface::changeTypeToJack()
{
	type = "Jack";
}

QStringList OutputInterface::getOi2()
{
	QStringList getoi2;
	getoi2 << QString::fromStdString(to_string(standard) + ".0");
	getoi2 << QString::fromStdString(type);
	return getoi2;
}