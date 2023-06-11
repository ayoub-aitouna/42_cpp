#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
public:
	AMateria(void);
	AMateria(std::string const &type);
	AMateria &operator=(const AMateria &);
	virtual ~AMateria();

protected:
	std::string Type;

public:
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};
#endif
