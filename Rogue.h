#pragma once
#include "Warrior.h"

class Rogue : public Warrior
{
public:
	Rogue(std::string);
	void attack(Unit *enemy);
};
