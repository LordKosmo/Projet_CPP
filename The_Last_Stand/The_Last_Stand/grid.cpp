#include "grid.h"
#include <iostream>


grid::grid()
{
	map = new cell*[SIZE];
	for (int i = 0; i < SIZE; ++i) {
		map[i] = new cell[SIZE];
	}
}


grid::~grid()
{
	for (int i = 0; i < SIZE; ++i) {
		delete [] map[i];
	}
	delete[] map;
}

void grid::print()
{
	for (int i = 0; i < SIZE; ++i)   {
		for (int j = 0; j < SIZE; ++j) {
			map[i][j].print();
		}
		std::cout << std::endl;
	}
}

void grid::addChara(int i, int j, playable_character& chara)
{
	if(i >= 0 && i < SIZE && j >= 0 && j < SIZE)
	map[i][j].putChara(chara);
}

void grid::movingRight(playable_character & chara)
{
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE; ++j) {
			if (&chara == &map[i]->getChara()) {
				if (j < SIZE - 1) {
					map[i][j].resetChara();
					map[i][j + 1].putChara(chara);
				}
			}
		}
	}
}
