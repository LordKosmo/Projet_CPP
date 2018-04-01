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
	int getResistance();
private:
	std::string name;
	int strength;
	int speed;
	int defense;
	int resistance;
	int range;
	int movement;
};

std::iostream& operator<<(std::iostream& file, playable_character& c);
#endif