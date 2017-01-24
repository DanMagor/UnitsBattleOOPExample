#pragma once
#include "Unit.h"

class Warrior: public Unit
{
public:
	Warrior(std::string);
	void attack(Unit enemy);
	
protected:
	int agility;
};



