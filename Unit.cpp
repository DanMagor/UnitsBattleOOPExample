#include "stdafx.h"
#include "Unit.h"
#include <iostream>

Unit::Unit(std::string input_name)
{
	name = input_name;
}

int Unit::get_health()
{
	return health + strength*10;
}

void Unit::attack(Unit enemy)
{
	std::cout << name << "  attack  " << enemy.get_name()<<"\n";
	std::cout << name << " deal "; 
	
}

void Unit::damage(Unit character)
{
	std::cout << name << " has " << character.get_health() << " HP\n";
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


