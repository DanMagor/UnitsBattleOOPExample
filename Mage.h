#pragma once
#include "Unit.h"

class Mage : public Unit
{
public:
	Mage(std::string);
	void attack(Unit *enemy);
};
