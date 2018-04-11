#ifndef H_GAME
#define H_GAME
#include "grid.h"
#include <iostream>
#include <vector>
class game
{
public:
	game();
	~game();
	grid& getMap();
	void addPlayable(character & c);
	void addEnemy(character & c);
	void movingCharacter(character & c, int choice);
	void enemyPhase();
	void addChara(int line, int row, character & c);
	bool gameOver();

private:
	grid * map;
	std::vector<character*> playable;
	std::vector<character*> enemies;
};
#endif
