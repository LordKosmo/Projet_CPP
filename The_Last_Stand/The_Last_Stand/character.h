#ifndef H_CHARACTER
#define H_CHARACTER
#include <string>
#include <iostream>
#include "Iskill.h"
#include "Buff.h"
#include <map>
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
	std::map<std::string, characteristics> statCode =
	{
	{ "Strength", Strength },
	{ "Speed", Speed },
	{ "Defense", Defense },
	{ "Resistance", Resistance },
	{ "Range", Range },
	{ "movement", Movement },
	{ "HP", Hp }
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
	friend class Buff;

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
enum characteristics {
	Strength,
	Speed,
	Defense,
	Resistance,
	Range,
	Movement,
	Hp,
};


#endif