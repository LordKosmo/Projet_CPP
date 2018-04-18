#include "Spells.h"



Spells::Spells(std::string n, int cd) : Iskill(n)
{
	cooldown = cd;
	available = true;
}


Spells::Spells()
{
}



int Spells::use(character *c, character *e)
{
	
	if (!available) {
		return 0;

	}
	available = false;
	if (cooldown == 0) {
		available = true;
	}
	switch (SpeelBook[name]) {
	case fireball:
		c->strength + 10;
		break;

	case TimeControl:
		c->speed += e->speed;
		e->speed = 0;
		return 0;
		break;
	case Sayajin:
		if (c->hp < 10) {
			c->hp += 20;
			c->strength += 20;
			std::cout << "SUPER SAYAJIN"<<std::endl;
		}
		break;
	case Training:
		c->strength += 1;
		c->defense += 2;
		std::cout << "The greatest sayan" << std::endl;
		break;
	case Lifesteal:
		c->hp += (c->strength - e->defense)/2;
		break;
	default:
		return 0;
	}
	return 0;
}

void Spells::decCooldown()
{
	if (cooldown != 0)
		cooldown--;
}

Spells::~Spells()
{
}
