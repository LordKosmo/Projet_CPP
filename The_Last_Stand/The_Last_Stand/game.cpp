#include "game.h"



game::game()
{
	map = new grid();
}


game::~game()
{
	delete map;
}

grid & game::getMap()
{
	return *map;
}

void game::addPlayable(character & c)
{
	playable.push_back(&c);
}

void game::addEnemy(character & c)
{
	enemies.push_back(&c);
}

void game::movingCharacter(character & c, int choice)
{
	map->moving(c, choice);
}

void game::enemyPhase()
{
	for (int i = 0; i < enemies.size(); ++i) {
		map->movingEnemy(*enemies[i]);
	}
}

void game::addChara(int line, int row, character & c)
{
	map->addChara(line, row, c);
}

bool game::gameOver()
{
	bool playableDead = true;
	bool enemiesDead = true;
	for (int i = 0; i < playable.size(); ++i) {
		if (playable[i]->getHP() > 0) {
			playableDead = false;
		}
	}
	for (int i = 0; i < enemies.size(); ++i) {
		if (enemies[i]->getHP() > 0) {
			enemiesDead = false;
		}
	}
	return playableDead || enemiesDead;
}
