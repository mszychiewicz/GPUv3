#include "VideoMemory.h"
#include <stdlib.h>
#include <string>
#include <iostream>
#include <ctime>

using namespace std;

VideoMemory::VideoMemory()
{
	type = "DDR5";
	memoryClockRate = 1666;
	bandwidth = 1500;
}

VideoMemory::~VideoMemory()
{
}

ostream& operator<< (ostream &s, VideoMemory &memory)
{
	cout << "Video Memory specification:" << endl;
	cout << "    Type of memory: "; s << memory.type << endl;
	cout << "    Memory clock rate (MHz): "; s << memory.memoryClockRate << endl;
	cout << "    Bandwidth (GB/s): "; s << memory.bandwidth << endl;
	return s;
}

istream& operator >> (istream &o, VideoMemory &memory)
{
	o.ignore();
	getline(o, memory.type);
	o >> memory.memoryClockRate;
	o >> memory.bandwidth;
	return o;
}