#include "stdafx.h"
#include "Rogue.h"
#include <iostream>

Rogue::Rogue(std::string name) : Warrior(name)
{
	strength = 6;
	health = 380;
	agility = 9;
	criticaldamage = 3;
	spelldamage = 0;
}
	
void Rogue::attack(Unit *enemy) {
	Unit::attack(enemy);
	int a = get_damage();
	std::cout << a << " damage" << "\n";
	enemy->take_damage(a);
}