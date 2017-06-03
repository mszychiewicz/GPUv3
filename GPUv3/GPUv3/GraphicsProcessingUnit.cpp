#include "GraphicsprocessingUnit.h"
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

GraphicsProcessingUnit::GraphicsProcessingUnit()
{
	codeName = "NV" + to_string(1 + (rand() % 9));
	numberOfCores = (1 + (rand() % 10)) * 1000;
	fabrication = 220 + (rand() % 30) * 10;			//size of single thread in nm
	coreClock = 100 + (rand() % 101);
}


GraphicsProcessingUnit::~GraphicsProcessingUnit()
{
}

ostream& operator<< (ostream &s, GraphicsProcessingUnit &gpu)
{
	cout << "GPU specification:" << endl;
	cout << "    Code name: "; s << gpu.codeName << endl;
	cout << "    Number of cores: "; s << gpu.numberOfCores << endl;
	cout << "    Fabrication technology (nm): "; s << gpu.fabrication << endl;
	cout << "    Core clock (MHz): "; s << gpu.coreClock << endl;
	return s;
}

istream& operator >> (istream &o, GraphicsProcessingUnit &gpu)
{
	o.ignore();
	getline(o, gpu.codeName);
	o >> gpu.numberOfCores;
	o >> gpu.fabrication;
	o >> gpu.coreClock;
	return o;
}