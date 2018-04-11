#include "character.h"
#include "Buff.h"
#include "Iskill.h"
character::character()
{
	strength = 6;
	speed = 4;
	defense = 1;
	resistance = 0;
	range = 1;
	movement = 1;
	hp = 10;
	type = Normal;
	applyType();
}

character::character(std::string n) {
	name = n;
	strength = 6;
	speed = 4;
	defense = 1;
	resistance = 0;
	range = 1;
	movement = 1;
	hp = 10;
	type = Normal;
	applyType();
}

character::character(std::string n, Type t)
{
	name = n;
	strength = 6;
	speed = 4;
	defense = 1;
	resistance = 0;
	range = 1;
	movement = 1;
	hp = 10;
	type = t;
	applyType();
}





character::~character()
{
}

std::string character::getName()
{
	return name;
}

int character::getStrength()
{
	return strength;
}

int character::getSpeed()
{
	return speed;
}

int character::getDefense()
{
	return defense;
}

int character::getRange() {
	return range;
}

int character::getMovement() {
	return movement;
}

int character::getHP() {
	return hp;
}

int character::getResistance()
{
	return resistance;
}

void character::attacking(character & c) {
	c.hp -= strength - c.defense;
}

void character::setSkill(Iskill* skill)
{
	Skill = *skill;
	if (Buff *b = dynamic_cast<Buff*>(skill)) {
		b->use(*this);
		//applyBuff(b);
	}
}

void character::applyType()
{
	switch (type) {
		case Normal:
			break;
		case Tank:
			hp += 10;
			defense += 10;
			movement -= 1;
			break;
		case Ninja:
			speed += 10;
			movement += 1;
			break;
		case Berserk:
			strength += 15;
			hp += 5;
			break;
		case Bowman:
			speed += 10;
			range += 1;
			break;
		}
}


void character::applyBuff(Buff *b)
{

	characteristics actualstat = statCode[b->getStat()];

	switch (actualstat) {
	case characteristics::strength:
		strength += b->getValue();
		break;
	case characteristics::speed:
		speed += b->getValue();
		break;
	case characteristics::defense:
		defense += b->getValue();
		break;
	case characteristics::resistance:
		resistance += b->getValue();
		break;
	case characteristics::range:
		range += b->getValue();
		break;
	case characteristics::movement:
		movement += b->getValue();
		break;
	case characteristics::hp:
		hp += b->getValue();
		break;
	default:
		std::cout << "Buff invalide";
	}

}

