#ifndef H_CELL
#define H_CELL
#include <string>
#include <iostream>
#include "playable_character.h"
class cell
{
public:
	cell();
	~cell();
	void print();
	void putChara(playable_character& c);
	playable_character getChara();
	void resetChara();
private:
	int bonus;
	std::string type;
	playable_character* chara;
};

#endif
