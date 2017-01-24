#include "stdafx.h"
#include "Menu.h"
#include <iostream>

Menu::Menu() {
	
}

void Menu::start() {
	std::cout << "\t\t\t========================= \n\n \t\t\t WELCOME TO THE BATTLE! \n \n \t\t\t========================= \n\n";
	std::cout << "\t\t\t CHOOSE FIRST HERO: \n \n";
	std::cout << "\t1.Warrior \t 2.Rogue \t 3.Mague \n";
	int key;
	std::cin >> key;
	while (key > 3 || key < 1) {
		std::cout << "Please input correct number(1,2,3). \n\n";
		std::cin >> key;
	}
	switch (key)
	{
		case 1: std::cout << "\t\t\tYou choose warrior\n\n"; break;
		case 2: std::cout << "\t\t\tYou choose rogue\n\n"; break;
		case 3: std::cout << "\t\t\tYou choose mage\n\n"; break;
	default:
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
	case 1: std::cout << "\t\t\tYou choose warrior\n\n"; break;
	case 2: std::cout << "\t\t\tYou choose rogue\n\n"; break;
	case 3: std::cout << "\t\t\tYou choose mage\n\n"; break;
	default:
		break;
	}

}


void Menu::battle(int hero1, int hero2) {

}