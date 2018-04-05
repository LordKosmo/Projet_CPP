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
	grid g;
	gameView game;
	playable_character c("Kerrigan");
	playable_character f("Fenix");
	playable_character m("Mengsk");
	cout << "Welcome to our game :" << endl;
	cout << "This is our first character: " << endl;
	cout << c << endl;
	g.addChara(0, 0, c);
	g.addChara(0, 1, f);
	g.addChara(0, 5, m);
	cout << "This is the grid: " << endl;
	game.printGrid(g);
	bool exit = false;
	int choice = 0;
	while (!exit && c.getHP() > 0) {
		cout << "Choose a direction: 0 = TOP, 1 = RIGHT, 2 = BOT, 3 = LEFT, 4 = QUIT" << endl;
		cin >> choice;
		if (choice == 4) {
			exit = true;
		}
		else {
			g.moving(c, choice);
			game.printGrid(g);
			cout << c << endl;
			if(f.getHP() > 0)
				cout << f << endl;
			if(m.getHP() > 0)
				cout << m << endl;
		}
	}
	if (c.getHP() == 0) {
		cout << "You lose" << endl;
	}
	system("pause");
	return 0;
}