#include "character.h"

character::character()
{

}

character::character(std::string n) {
	name = n;
	strength = 6;
	speed = 4;
	defense = 1;
	resistance = 0;
	range = 1;
	movement = 1;
	hp = 10;
}
  


character::~character()
{
}

std::string character::getName()
{
	return name;
}

int character::getStrength()
{
	return strength;
}

int character::getSpeed()
{
	return speed;
}

int character::getDefense()
{
	return defense;
}

int character::getRange() {
	return range;
}

int character::getMovement() {
	return movement;
}

int character::getHP() {
	return hp;
}

int character::getResistance()
{
	return resistance;
}

void character::attacking(character & c) {
	c.hp -= strength - c.defense;
}
