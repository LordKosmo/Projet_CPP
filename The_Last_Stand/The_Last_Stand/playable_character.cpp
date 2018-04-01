#include "playable_character.h"

playable_character::playable_character()
{
	/*
	strength = 0;
	speed = 0;
	defense = 0;
	resistance = 0;
	range = 0;
	movement = 0;
	*/
}

playable_character::playable_character(std::string n) {
	//playable_character();
	name = n;
	strength = 0;
	speed = 0;
	defense = 0;
	resistance = 0;
	range = 0;
	movement = 0;
}


playable_character::~playable_character()
{
}

std::string playable_character::getName()
{
	return name;
}

int playable_character::getStrength()
{
	return strength;
}

int playable_character::getSpeed()
{
	return speed;
}

int playable_character::getDefense()
{
	return defense;
}

int playable_character::getResistance()
{
	return resistance;
}

std::ostream & operator<<(std::ostream& file, playable_character & c)
{
	file << c.getName() << std::endl;
	file << "Str: " << c.getStrength() << std::endl;
	file << "Spd: " << c.getSpeed() << std::endl;
	file << "Def: " << c.getDefense() << std::endl;
	file << "Res: " << c.getResistance() << std::endl;
	return file;
}
