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
		delete[] map[i];
	}
	delete[] map;
}

cell & grid::getCell(int i, int j)
{
	return map[i][j];
}

void grid::addChara(int i, int j, playable_character& chara)
{
	if (i >= 0 && i < SIZE && j >= 0 && j < SIZE)
		map[i][j].putChara(chara);
}

void grid::moving(playable_character & c, int a)
{
	int k = 0;
	int d = 0;
	switch (a) {

	case TOP:
		k = -1;
		break;
	case RIGHT:
		d = 1;
		break;
	case BOT:
		k = 1;
		break;
	case LEFT:
		d = -1;
		break;
	}
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE; ++j) {
			if (&map[i][j].getChara() == &c) {
				if (verifBounds(a, i, j)) {
					if (&map[i + k][j + d].getChara() == nullptr) {
						map[i][j].resetChara();
						map[i + k][j + d].putChara(c);
						i = SIZE;
					}
					else {
						map[i][j].getChara().attacking(map[i + k][j + d].getChara());
						if (map[i + k][j + d].getChara().getHP() <= 0) {
							map[i + k][j + d].resetChara();
						}
						else {
							map[i + k][j + d].getChara().attacking(map[i][j].getChara());
						}
					}
					break;
				}
			}
		}

	}


}
bool verifBounds(int a, int i, int j) {
	switch (a) {
	case TOP:
		if (i > 0) {
			return true;
		}
		break;
	case RIGHT:
		if (j < SIZE - 1) {
			return true;
		}
		break;
	case BOT:
		if (i < SIZE - 1) {
			return true;
		}
		break;
	case LEFT:
		if (j > 0) {
			return true;
		}
		break;

	}
	return false;
}
