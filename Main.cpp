// Battle.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Warrior.h"
#include <iostream>

int main()
{
	Warrior warrior("Alex");
	Warrior warrior2("Sara");
	std::cout << warrior.get_name()<<"\n";
	std::cout << warrior2.get_name()<<"\n";
	warrior.attack(warrior2);
	system("pause");
    return 0;
}

