#ifndef H_GAMEVIEW
#define H_GAMEVIEW
#include <iostream>
#include "playable_character.h"
#include "grid.h"
class gameView
{
public:
	gameView();
	~gameView();
	void printGrid(grid& g);
	void printCell(cell& c);

};

std::ostream& operator<<(std::ostream& file, playable_character& c);

#endif;