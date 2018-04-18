#include "enemy.h"
#include"string"


enemy::enemy(std::string n)
{
	name = n;
	strength = 1;
	speed = 1;
	defense = 1;
	resistance = 1;
	range = 1;
	movement = 1;
	hp = 10;
	type = Normal;
	applyType();

}

enemy:: enemy() {


}


enemy::~enemy()
{
}
