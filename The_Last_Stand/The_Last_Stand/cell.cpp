#include "cell.h"
#include <iostream>


cell::cell()
{
	bonus = 0;
	type = " ";
	chara = nullptr;
}


cell::~cell()
{
}

std::string cell::getType()
{
	return type;
}

void cell::putChara(playable_character& c) {
	chara = &c;
}

playable_character & cell::getChara()
{
	return *chara;
}

void cell::resetChara()
{
	chara = nullptr;
}
