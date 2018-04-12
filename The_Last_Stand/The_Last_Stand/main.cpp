#include <iostream>
#include <fstream>
#include <string>
#include "cell.h"
#include "character.h"
#include "playable_character.h"
#include "grid.h"
#include "gameView.h"
#include "enemy.h"
#include "Buff.h"
#include"Spells.h"
#define SIZE 10

using namespace std;

int main() {
	//grid g;
	game g;

	gameView game;

	Buff Force10("Muscle","Strength",10000);
	Buff Increvable("Increvable", "HP", 30000);
	Spells s("TimeControl",6);
	playable_character c("Kerrigan",Berserk,5);
	c.setSkill(&Force10);
	c.setSkill(&s);
	//playable_character f("Fenix",4);
	enemy f("Fenix");
	f.setSkill(&Increvable);
	//playable_character m("Zerging",3);
	enemy m("Zergling");
	enemy e1("Peon1");
	enemy e2("Péon2");
	g.addPlayable(c);
	g.addEnemy(f);
	g.addEnemy(m);
	g.addEnemy(e1);
	g.addEnemy(e2);


	cout << "Welcome to our game :" << endl;
	cout << "This is our first character: " << endl;
	cout << c << endl;
	g.addChara(0, 0, c);
	g.addChara(0, 1, f);
	g.addChara(0, 5, m);
	g.addChara(9, 9, e1);
	g.addChara(9, 0, e2);
	cout << "This is the grid: " << endl;
	game.printGame(g);
	bool exit = false;
	int choice = 0;
	while (!exit && !g.gameOver()) { //c.getHP() > 0
		cout << "Choose a direction: 0 = TOP, 1 = RIGHT, 2 = BOT, 3 = LEFT, 4 = QUIT" << endl;
		cin >> choice;
		if (choice == 4) {
			exit = true;
		}
		else {
			g.movingCharacter(c, choice);
			/*g.movingEnemy(f);
			g.movingEnemy(m);
			g.movingEnemy(e2);
			game.printGrid(g);*/
			g.enemyPhase();
			g.spawning();
			game.printGame(g);
			cout << c << endl;

			if(f.getHP() > 0)
				cout << f << endl;
			if(m.getHP() > 0)
				cout << m << endl;
		}
		//g.movingEnemy(e1);
	}
	if (c.getHP() == 0) {
		cout << "You lose" << endl;
	}
	else {
		cout << "You win this, for now..." << endl;
	}
	system("pause");
	return 0;
}