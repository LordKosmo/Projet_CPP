#include "Buff.h"
#include "string"


Buff::Buff() : Iskill("undefined") 
{

}


Buff::Buff(std::string newName, std::string newStat, int newValue) : Iskill(newName)
{
	stat = newStat;
	value = newValue;
}

Buff::~Buff()
{
}

std::string Buff::getStat()
{
	return stat;
}

void Buff::setStat(std::string newStat)
{
	stat = newStat;
}

int Buff::getValue()
{
	return value;
}

void Buff::setValue(int newValue)
{
	value = value;

}

std::string Buff::getType()
{
	return "Buff";
}
