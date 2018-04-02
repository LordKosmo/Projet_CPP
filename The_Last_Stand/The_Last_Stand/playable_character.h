#ifndef H_CHARACTER
#define H_CHARACTER
#include <string>
#include <iostream>
#include "grid.h"
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
	void movingRight(grid& map);
private:
	std::string name;
	int strength;
	int speed;
	int defense;
	int resistance;
	int range;
	int movement;
};

std::ostream& operator<<(std::ostream& file, playable_character& c);
#endif