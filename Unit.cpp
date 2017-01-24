#include "stdafx.h"
#include "Unit.h"
#include <iostream>
#include <time.h>

Unit::Unit(std::string input_name)
{
	name = input_name;
}

std::string Unit::get_name()
{
	return name;
}

int Unit::get_strength()
{
	return strength;
}

void Unit::set_strength(int str)
{
	strength = str;

}

int Unit::get_health()
{
	return health;
}

int Unit::get_criticaldamage()
{
	int c = 1 + rand() % 6;
	if (c == 6) return criticaldamage;
	else return 1;
}

int Unit::get_spelldamage()
{
	int s = 1 + rand() % 6;
	if (s == 6) return spelldamage * 2.5;
	else return spelldamage;
}

int Unit::get_range()
{
	int r = rand() % 10;	
	return r;
}

int Unit::get_damage()
{
	srand(time(NULL));
	return (get_strength()*2.4 + get_range())* get_criticaldamage() + get_spelldamage();
}

void Unit::attack(Unit *enemy)
{
	std::cout << name << "  attack  " << enemy->get_name()<<"\n";
	std::cout << name << " deal ";
}

void Unit::take_damage(int a)
{
	if (health < a)	health = 0;
	else health = health - a;
}


void Unit::damage(Unit *character)
{
	std::cout << name << " has " << character->get_health() << " HP\n";
}

