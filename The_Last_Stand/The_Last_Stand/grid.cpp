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
	switch (a) {
	case TOP:
	{
		for (int i = 0; i < SIZE; ++i) {
			for (int j = 0; j < SIZE; ++j) {
				if (&map[i][j].getChara() == &c) {
					if (i > 0) {
						map[i][j].resetChara();
						map[i - 1][j].putChara(c);
						break;
					}
				}
			}
		}
		break;
	}
	case RIGHT:
	{
		for (int i = 0; i < SIZE; ++i) {
			for (int j = 0; j < SIZE; ++j) {
				if (&map[i][j].getChara() == &c) {
					if (j < SIZE - 1) {
						map[i][j].resetChara();
						map[i][j + 1].putChara(c);
						break;
					}
				}
			}
		}
		break;
	}
	case BOT:
	{
		for (int i = 0; i < SIZE; ++i) {
			for (int j = 0; j < SIZE; ++j) {
				if (&map[i][j].getChara() == &c) {
					if (i < SIZE - 1) {
						map[i][j].resetChara();
						map[i + 1][j].putChara(c);
						i = SIZE;
						break;
					}
				}
			}
		}
		break;
	}
	case LEFT:
	{
		for (int i = 0; i < SIZE; ++i) {
			for (int j = 0; j < SIZE; ++j) {
				if (&map[i][j].getChara() == &c) {
					if (j > 0) {
						map[i][j].resetChara();
						map[i][j - 1].putChara(c);
						break;
					}
				}
			}
		}
		break;
	}
	}
}
