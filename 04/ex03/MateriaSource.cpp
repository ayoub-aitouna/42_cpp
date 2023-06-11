#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(MateriaSource &copy)
{
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
    if (this != &copy)
    {
        this->known_materia = copy.known_materia;
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *Material)
{
    this->known_materia[Material->getType()] = Material;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    return (this->known_materia[type]);
}

MateriaSource::~MateriaSource()
{
}
