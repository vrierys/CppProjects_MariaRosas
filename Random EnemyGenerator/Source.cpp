#include <iostream>
#include <string>
#include <ctime>

enum class EnemyType { ZOMBIE, VAMPIRE, GHOST, WITCH, MAX };

struct Enemy {
public:

	EnemyType type;
	std::string name;
	int health;
};

bool dechu(Enemy a, Enemy b) {

	return (a.type == b.type && a.name == b.name);

}

Enemy CreateRandomEnemy() {

	Enemy enemigo;

	enemigo.type = static_cast <EnemyType>(rand() % static_cast<int>(EnemyType::MAX));

	int name1 = rand() % 5;

	switch (name1) {
	case 0: enemigo.name = "Ramon";
		break;
	case 1: enemigo.name = "Marc";
		break;
	case 2: enemigo.name = "David";
		break;
	case 3: enemigo.name = "Albert";
		break;
	case 4: enemigo.name = "Alex";
		break;
	}
	enemigo.health = rand() % 101;


	return enemigo;

};


std::string GetEnemyTypeString(EnemyType a) {

	switch (a) {
	case EnemyType::ZOMBIE: return "Zombie";
		break;
	case EnemyType::VAMPIRE: return "Vampire";
		break;
	case EnemyType::GHOST: return "Ghost";
		break;
	case EnemyType::WITCH: return "Witch";
		break;
	}

}


void main() {

	srand(time(nullptr));

	const int MAX_ENEMIES = 5;

	static Enemy arr[MAX_ENEMIES];

	for (int i = 0; i < MAX_ENEMIES; i++) {

		arr[i] = CreateRandomEnemy();

		for (int j = 0; j < i; j++) {

			if (dechu(arr[i], arr[j]) == true) {
				i--;
			}
		}
	}

	for (int w = 0; w < 6; w++) {

		std::string chan = GetEnemyTypeString(arr[w].type);

		std::cout << chan << " " << arr[w].name << " " << arr[w].health << std::endl;

	}


}