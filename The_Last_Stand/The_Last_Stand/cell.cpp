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

void cell::print() {
	if(chara==nullptr)
		std::cout << "[" << type << "]";
	else
		std::cout << "[" << chara->getName()[0] << "]";
}

void cell::putChara(playable_character& c) {
	chara = &c;
}