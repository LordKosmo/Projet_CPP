#ifndef H_CHARACTER
#define H_CHARACTER
#include <string>
#include <iostream>
#include "cell.h"
class playable_character
{
public:
	playable_character();
	playable_character(std::string name);
	~playable_character();
	std::string getName();
	int getStrength();
	int getSpeed();
	int getDefense();
	int getResistance();
	int getRange();
	int getMovement();
	int getHP();
	void attacking(playable_character &);
private:
	std::string name;
	int strength;
	int speed;
	int defense;
	int resistance;
	int range;
	int movement;
	int hp;
};

#endif