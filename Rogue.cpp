#include "stdafx.h"
#include "Rogue.h"
#include <iostream>
#include <time.h>

Rogue::Rogue(std::string name) :Warrior(name)
{
	health = 320;
	strength = 6;
	agility = 9;
	critical = 3;
}
	
int Rogue::get_critical()
{
	srand(time(NULL));
	int c = 1 + rand() % 6;
	if (c == 6) return critical;
	else return 1;
}

void Rogue::attack(Unit enemy) {
	Unit::attack(enemy);
	std::cout << get_strength()*2.4 * get_critical() << " damage" << "\n";

}