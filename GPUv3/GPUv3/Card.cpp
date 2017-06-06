#include "Card.h"

Card::Card()
{
}

Card::~Card()
{
}

string Card::getClassName()
{
	return className;
}

string Card::getBrand()
{
	return brand;
}

string Card::getModel()
{
	return model;
}

string Card::getNumber()
{
	return to_string(number);
}

string Card::getNumberOfPorts()
{
	return to_string(numberOfPorts);
}