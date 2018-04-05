#ifndef H_GRID
#define H_GRID
#include "cell.h"
#define SIZE 10
enum { TOP = 0, RIGHT = 1, BOT = 2, LEFT = 3 };
class grid
{
public:
	grid();
	~grid();
	cell& getCell(int, int);
	void addChara(int, int, playable_character&);
	void moving(playable_character&, int a);
	
private:
	cell * * map;
};
bool verifBounds(int a, int i, int j);
#endif
