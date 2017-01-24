#pragma once
#include <string>
class Unit
{
public:
	Unit(std::string); //конструктор
	virtual int get_health();
	virtual void attack(Unit*); //полиморфизм
	virtual void damage(Unit);
	virtual int get_damage();
	virtual int get_criticaldamage();
	virtual int get_spelldamage();
	void take_damage(int);
	std::string get_name();
	int get_strength();
	void set_strength(int);
private:
	std::string name;
protected:
	int strength;
	int health;
	int criticaldamage;
	int spelldamage;
};


