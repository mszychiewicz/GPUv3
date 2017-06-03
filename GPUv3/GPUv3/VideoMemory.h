#pragma once
#include <string>

using std::string;
using namespace std;
///Class containing info about card video memory
class VideoMemory
{
private:
	string type;///<Specifies memory type
	int memoryClockRate;///<Specifies memory clock rate
	int bandwidth;///<Specifies memory badwidth
public:
	///Default constructor
	VideoMemory();
	///Default destructor
	~VideoMemory();
	///Output stream operator 
	friend ostream& operator<< (ostream &s, VideoMemory &memory);
	///Input stream operator
	friend istream& operator>> (istream &o, VideoMemory &memory);
};

