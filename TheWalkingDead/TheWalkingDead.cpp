// TheWalkingDead.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>

enum class Weapon{ FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX};

class Zombie;

class Player {
public:
	Player();
	Weapon weapon;
	float precision;
	int life;

	void attack(Zombie &);
	bool isAlive();
};

Player::Player() : weapon(static_cast<Weapon>(rand() % 7)), precision ((rand() % 11)/10.0f), life (rand() % 101)
{};

class Zombie {
public: 

	Zombie();
	int distanceToPlayer;
	float speed;
	float damage;
	int life;

	void attack(Player &);
	bool isAlive();
};

Zombie::Zombie() : distanceToPlayer((rand() % 201) + 20), speed((rand() % 21) / 1.0f), damage((rand() % 21) / 1.0f), life(rand() % 101)
{};

void main()
{
	const int NUM_ZOMBIES = 10;

	srand(time(nullptr));

	Player player;
	int zombies[NUM_ZOMBIES];
}
