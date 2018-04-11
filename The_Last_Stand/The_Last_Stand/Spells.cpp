#include "Spells.h"



Spells::Spells(std::string n, int cd ) : Iskill(n)
{
	cooldown = cd;
	available = false;
}


Spells::Spells()
{
}



void Spells::decCooldown()
{
	if(cooldown != 0)
		cooldown--;
}

Spells::~Spells()
{
}
