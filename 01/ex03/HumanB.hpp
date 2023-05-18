#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();

	private:
		std::string name;
		Weapon *weapon;

	public:
		void attack();
		void setWeapon(Weapon &weapon);
};
#endif
