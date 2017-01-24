#include "stdafx.h"
#include "Mage.h"
#include <iostream>

Mage::Mage(std::string name) :Unit(name)
{
	strength = 4;
	health = 320;
	criticaldamage = 1;
	spelldamage = 15;
}

void Mage::attack(Unit *enemy) {
	Unit::attack(enemy);
	int a = get_damage();
	std::cout << a << " damage" << "\n";
	enemy->take_damage(a);
}