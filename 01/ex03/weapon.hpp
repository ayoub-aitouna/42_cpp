#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon
{
public:
	Weapon(std::string type);
	~Weapon();
	Weapon();

private:
	std::string type;

public:
	std::string getType();
	void setType(std::string);
};
#endif
