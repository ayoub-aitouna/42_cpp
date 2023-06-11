#ifndef MATERIALSOURCE_H
#define MATERIALSOURCE_H

#include "IMateriaSource.hpp"
#include <map>
class MateriaSource : public IMateriaSource
{
public:
    MateriaSource();
    MateriaSource(MateriaSource &);
    MateriaSource &operator=(const MateriaSource &);
    ~MateriaSource();

private:
    std::map<std::string, AMateria *> known_materia;

public:
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
};
#endif