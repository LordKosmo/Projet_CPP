#ifndef H_SPELLS
#define H_SPELLS
#include "Iskill.h"
#include "playable_character.h"
#include "enemy.h"
class Spells : public Iskill

{
protected:
	int cooldown;
	bool available;
public:
	Spells(std::string n, int cd);
	Spells();
	
	virtual void use(playable_character c, enemy e) =0;
	void decCooldown();

	virtual ~Spells();
};


#endif

