#pragma once
#include <string>
class Unit
{
public:
	Unit(std::string);
	virtual int get_health();
	virtual void attack(Unit);
	std::string get_name();
	int get_strength();
	void set_strength(int);
private:
	std::string name;
	
protected:
	int strength;


};


