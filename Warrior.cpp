#include "stdafx.h"
#include "Warrior.h"
#include <iostream>

Warrior::Warrior(std::string name):Unit(name)
{
	strength = 10;
	health = 420;
	agility = 3;
	criticaldamage = 1;
	spelldamage = 0;
}

void Warrior::attack(Unit *enemy) {
	Unit::attack(enemy);
	int a = get_damage();
	std::cout << a << " damage" << "\n";
	enemy->take_damage(a);
}