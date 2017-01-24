#include "stdafx.h"
#include "Menu.h"
#include <iostream>
#include "Unit.h"
#include "Warrior.h"
#include "Rogue.h"
#include "Mage.h"
#include <string>
#include "windows.h"
Menu::Menu() {
	
}




void Menu::start() {
	std::cout << "\t\t\t========================= \n\n \t\t\t WELCOME TO THE BATTLE! \n \n \t\t\t========================= \n\n";
	std::cout << "\t\t\t CHOOSE FIRST HERO: \n \n";
	std::cout << "\t1.Warrior \t 2.Rogue \t 3.Mague \n";
	Unit* hero1;
	Unit* hero2;
	int key;
	std::cin >> key;
	while (key > 3 || key < 1) {
		std::cout << "Please input correct number(1,2,3). \n\n";
		std::cin >> key;
	}
	switch (key)
	{
	case 1: std::cout << "\t\t\tYou choose warrior\n\n"; hero1 = new Warrior("Warrior1"); break;
	case 2: std::cout << "\t\t\tYou choose rogue\n\n"; hero1 = new Rogue("Rogue1"); break;
	//case 3: std::cout << "\t\t\tYou choose mage\n\n"; hero1 = new Mage("Mage1"); break;
	default:
		hero1 = new Warrior("Warrior1");
		break;
	}


	std::cout << "\t\t\tCHOOSE SECOND HERO: \n \n";
	std::cout << "\t1.Warrior \t 2.Rogue \t 3.Mague \n";

	std::cin >> key;
	while (key > 3 || key < 1) {
		std::cout << "Please input correct number(1,2,3). \n\n";
		std::cin >> key;
	}
	switch (key)
	{
	case 1: std::cout << "\t\t\tYou choose warrior\n\n"; hero2 =new Warrior("Warrior2"); break;
	case 2: std::cout << "\t\t\tYou choose rogue\n\n"; hero2 = new Rogue("Rogue2"); break;
	//case 3: std::cout << "\t\t\tYou choose mage\n\n"; hero2 = new Mage("Mage2"); break;
	default:
		hero2 = new Warrior("Warrior2");
		break;
	}

	battle(hero1, hero2);
}

void Menu::battle(Unit *hero1, Unit *hero2)
{
	std::cout << "\n\n\t\t" << hero1->get_name() << "\tVS\t " << hero2->get_name() << "\n\n";
	std::cout << "\t\t\t FIGHT\t\t\t";
	Sleep(4000);
	system("CLS");
	std::cout<<hero1->get_health()<<hero2->get_health();
	while (hero1->get_health() > 0 || hero2->get_health() > 0) {
		
		hero1->attack(hero2);
		Sleep(1000);
		hero2->attack(hero1);
	}
}