#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "weapon.hpp"

class HumanA{
	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA();
	private:
		std::string name;
		Weapon weapon;
	public:
		void attack();
		void setWeapon(Weapon weapon);
};
#endif
