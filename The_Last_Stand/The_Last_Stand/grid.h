#ifndef H_GRID
#define H_GRID
#include "cell.h"
#define SIZE 10
class grid
{
public:
	grid();
	~grid();
	void print();
	void addChara(int, int, playable_character&);
	void movingRight(playable_character&);
private:
	cell ** map;
};
#endif
