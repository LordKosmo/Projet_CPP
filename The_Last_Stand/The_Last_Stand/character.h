#ifndef H_CHARACTER
#define H_CHARACTER
#include <string>
#include <iostream>
class character
{
public:
	character();
	character(std::string name);
	~character();
	std::string getName();
	int getStrength();
	int getSpeed();
	int getDefense();
	int getRange();
	int getMovement();
	int getHP();
	int getResistance();
	void attacking(character & c);
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