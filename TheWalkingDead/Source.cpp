#include <iostream>
#include <string>
#include <ctime>


enum class Weapon { FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX };

class Zombie;

class Player {
public:

	Player();
	Weapon weapon;
	float precision;
	int life;

	void attack(Zombie &);
	bool isAlive() {
		return life > 0;
	}
};

Player::Player() {
	weapon = static_cast <Weapon>(rand() % static_cast<int>(Weapon::MAX));
	precision = (rand() % 10) / 10.0f;
	life = rand() % 101;
};

class Zombie {
public:

	Zombie();
	int distanceToPlayer;
	float speed;
	float damage;
	int life;

	void attack(Player &);
	bool isAlive() {
		return life > 0;
	}
};

Zombie::Zombie() {

	distanceToPlayer = rand() % 180;
	speed = (rand() % 200) / 10.0f;
	damage = (rand() % 200) / 10.0f;
	life = rand() % 101;
}

void Player::attack(Zombie &z) {

	int daño;

	daño = static_cast <int>(weapon);

	z.life = z.life - daño * precision;

};

void Zombie::attack(Player &p) {

	if (distanceToPlayer <= 0) {

		p.life = p.life - damage;
	}

	else {
		distanceToPlayer = distanceToPlayer - 1;
	}

}


void main() {

	const int MAX_ZOMBIES = 10;
	srand(time(nullptr));
	Player player;
	static Zombie arr[MAX_ZOMBIES];
	bool ZombiesAreAlive = true;


	do {

		std::cout << player.life << std::endl;

		ZombiesAreAlive = false;


		for (int i = 0; i < MAX_ZOMBIES; i++) {

			if (arr[i].isAlive == true) {
				player.attack(arr[i]);
				arr[i].attack(player);
				ZombiesAreAlive = true;
			}

			std::cout << arr[i].speed << ' ' << arr[i].life << ' ' << arr[i].isAlive << ' ' << arr[i].distanceToPlayer << ' ' << arr[i].damage << ' ' << arr[i].attack << std::endl;
		}

	} while (player.isAlive == true && ZombiesAreAlive == true);

	if (player.isAlive == false) {

		std::cout << "Te han matado" << std::endl;
	}

	else {

		std::cout << "Continue..." << std::endl;

	}
}