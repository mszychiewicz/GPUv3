#pragma once
#include <string>
#include <iostream>
#include <QStringList>

using std::string;
using namespace std;
///Class containing info about card GPU
class GraphicsProcessingUnit
{
public:
	QStringList getGpu2();
	///Default constructor
	GraphicsProcessingUnit();
	///Default destructor
	~GraphicsProcessingUnit();
	///Output stream operator 
	friend ostream& operator<< (ostream &s, GraphicsProcessingUnit &gpu);
	///Input stream operator
	friend istream& operator>> (istream &o, GraphicsProcessingUnit &gpu);
private:
	string codeName;///< Specifies code name of the GPU
	int numberOfCores;///< Specifies number of cores that the GPU has
	int fabrication;///< Specifies fabrication technology of the GPU in nm
	int coreClock;///< Specifies core clock of the GPU
};

