// Random EnemyGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include  <ctime>
#include <iostream>
#include <string>
using namespace std;


enum class EnemyType { ZOMBIE, VAMPIRE, GHOST, WEREWOLF, MAX };

struct Enemy {

	EnemyType type;
	string name;
	int health;

	string getEnemyTypeString() {

		switch (type) {
		case EnemyType::ZOMBIE: return "zombie";
		case EnemyType::VAMPIRE: return "vampire";
		case EnemyType::GHOST: return "ghost";
		case EnemyType::WEREWOLF: return "werewolf";
		default: return "";
		}
	}

};

bool operator==(const Enemy &a, const Enemy &b) {

	return a.name == b.name && a.type == b.type;
}

static Enemy CreateRandomEnemy() {

	static const int MAX_LIFE{ 500 };
	static const string NAMES[]{
		"Gertrudiz",
		"Pancracia",
		"Anacleto",
		"Hipolito",
		"Eustaquio",
		"Fulgencia"
	};

	return Enemy{
		static_cast<EnemyType>(rand() % static_cast<int>(EnemyType::MAX)),
		NAMES[rand() % (sizeof NAMES / sizeof string)],
		rand() % MAX_LIFE
	};
}

int main()
{

	srand(static_cast<unsigned>(time(nullptr)));
	const int MAX_ENEMIES{ 5 };
	Enemy enemies[MAX_ENEMIES];
	{
		int i{ 0 };
		while (i < MAX_ENEMIES) {

			enemies[i] = CreateRandomEnemy();
			int j{ i - 1 };
			while (j >= 0) {

				if (enemies[i] == enemies[j]) {
					--i;
					break;
				}
				j--;
			}
			i++;
		}
	}

	cout << "List of enemies:\n";
	for (auto &enemy : enemies) {
		cout << enemy.name << "is a" << enemy.getEnemyTypeString() << "whose life is" << enemy.health << endl;
	}

	return 0;
}
