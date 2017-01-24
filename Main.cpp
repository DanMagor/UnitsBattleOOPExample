// Battle.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Warrior.h"
#include "Rogue.h"
#include "Mage.h"
#include <iostream>
#include "Menu.h"
int main()
{
	Warrior warrior("Alex");
	Warrior warrior2("Sara");
	Rogue rogue("Phantom");
	Mage mage("Antonidas");
	std::cout << warrior.get_name()<<"\n";
	std::cout << mage.get_name()<<"\n";
	mage.attack(&warrior);
	mage.damage(&warrior);
	//std::cout << warrior.get_health();
	Menu menu;
	menu.start();
	system("pause");
    return 0;
}

