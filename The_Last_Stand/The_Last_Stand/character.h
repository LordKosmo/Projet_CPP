#ifndef H_CHARACTER
#define H_CHARACTER
#include <string>
#include <iostream>
#include "Iskill.h"
#include "Buff.h"
class character
{

public:
	enum Type {
		Tank,
		Berserk,
		Ninja,
		Bowman,
		Normal,
	};
	character();
	character(std::string name);
	character(std::string name,Type t);
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
	void setSkill(Iskill *skill);
	void applyType();
	void applyBuff(Buff * b);


private:
	std::string name;
	int strength;
	int speed;
	int defense;
	int resistance;
	int range;
	int movement;
	int hp;
	Iskill Skill;
	Type type;
};

#endif