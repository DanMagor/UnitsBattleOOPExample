#include "stdafx.h"
#include "Warrior.h"
#include <iostream>

Warrior::Warrior(std::string name):Unit(name)
{
	strength = 10;
}

void Warrior::attack(Unit enemy) {
	Unit::attack(enemy);
	std::cout << get_strength()*2.4 <<" damage";
}