#include "playable_character.h"
#include "string"



playable_character::playable_character(std::string n, int newrarity) : character(n)
{
	
	rarity = newrarity;

}


playable_character::~playable_character()
{
}
