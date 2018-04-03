#include <iostream>
#include <fstream>
#include <string>
#include "cell.h"
#include "playable_character.h"
#include "grid.h"
#define SIZE 10

using namespace std;

int main() {
	grid g;
	playable_character c("Kerrigan");
	cout << "Welcome to our game :" << endl;
	cout << "This is our first character: " << endl;
	cout << c << endl;
	g.addChara(0, 0, c);
	cout << "This is the grid: " << endl;
	g.print();
	c.movingRight(g);
	cout << "This is the grid: " << endl;
	g.print();
	system("pause");
	return 0;
}