#include "playable_character.h"

playable_character::playable_character()
{

}

playable_character::playable_character(std::string n) {
	//playable_character();
	name = n;
	strength = 6;
	speed = 4;
	defense = 1;
	resistance = 0;
	range = 1;
	movement = 1;
	hp = 10;
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

int playable_character::getHP() {
	return hp;
}

void playable_character::attacking(playable_character & c)
{
	c.hp = strength - c.resistance;
}

