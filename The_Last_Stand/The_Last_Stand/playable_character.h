#ifndef H_CHARACTER
#define H_CHARACTER
#include <string>
#include <iostream>
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
	int getRange();
	int getMovement();
	int getHP();
	int getResistance();
	void attacking(playable_character & c);
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