#include <iostream>
#include <fstream>
#include <string>
#include "cell.h"
#include "playable_character.h"
#include "grid.h"
#include "gameView.h"
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
	gameView game;
	playable_character c("Kerrigan");
	cout << "Welcome to our game :" << endl;
	cout << "This is our first character: " << endl;
	cout << c << endl;
	g.addChara(0, 0, c);
	//h[0][0].putChara(c);
	cout << "This is the grid: " << endl;
	/*for (int i = 0; i < SIZE; ++i) {
	for (int j = 0; j < SIZE; ++j) {
	h[i][j].print();
	}
	cout << endl;
	}*/
	game.printGrid(g);
	bool exit = false;
	int choice = 0;
	while (!exit) {
		cout << "Choose a direction: 0 = TOP, 1 = RIGHT, 2 = BOT, 3 = LEFT, 4 = QUIT" << endl;
		cin >> choice;
		if (choice == 4) {
			exit = true;
		}
		else {
			g.moving(c, choice);
			game.printGrid(g);
		}
	}/*
	 g.moving(c, BOT);
	 g.moving(c, 1);
	 cout << endl;
	 game.printGrid(g);*/
	system("pause");
	return 0;
}