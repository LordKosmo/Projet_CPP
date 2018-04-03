#include "playable_character.h"

playable_character::playable_character()
{
}

playable_character::playable_character(std::string n) {
	name = n;
	strength = 6;
	speed = 4;
	defense = 2;
	resistance = 0;
	range = 1;
	movement = 2;
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

int playable_character::getRange() {
	return range;
}

int playable_character::getMovement() {
	return movement;
}

void playable_character::movingRight(grid& map)
{
	map.movingRight(*this);
}

std::ostream & operator<<(std::ostream& file, playable_character & c)
{
	file << c.getName() << std::endl;
	file << "Str: " << c.getStrength() << std::endl;
	file << "Spd: " << c.getSpeed() << std::endl;
	file << "Def: " << c.getDefense() << std::endl;
	file << "Res: " << c.getResistance() << std::endl;
	file << "Rge: " << c.getRange() << std::endl;
	file << "Mvm: " << c.getMovement() << std::endl;
	return file;
}
