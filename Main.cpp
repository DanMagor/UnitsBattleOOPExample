// Battle.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Warrior.h"
#include "Rogue.h"
#include <iostream>
#include "Menu.h"
int main()
{
	Warrior warrior("Alex");
	Warrior warrior2("Sara");
	Rogue rogue("Phantom");
	std::cout << warrior.get_name()<<"\n";
	std::cout << rogue.get_name()<<"\n";
	rogue.attack(warrior);
	warrior.damage(warrior);
	Menu menu;
	menu.start();
	system("pause");
    return 0;
}

