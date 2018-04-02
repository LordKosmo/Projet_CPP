#include <iostream>
#include <fstream>
#include <string>
#include "cell.h"
#include "playable_character.h"
#include "grid.h"
#define SIZE 10

using namespace std;

int main() {
	//cell h[SIZE][SIZE];
	/*
	*h = new cell[SIZE];
	for (int i = 0; i < SIZE; ++i) {
		h[i] = new cell();
	}*/
	grid g;
	playable_character c("Kerrigan");
	cout << "Welcome to our game :" << endl;
	cout << "This is our first character: " << endl;
	//cout << c.getName() << endl;
	cout << c << endl;
	g.addChara(0, 0, c);
	//h[0][0].putChara(c);
	cout << "This is the grid: " << endl;
	/*
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE; ++j) {
			h[i][j].print();
		}
		cout << endl;
	}*/
	g.print();
	system("pause");
	return 0;
}