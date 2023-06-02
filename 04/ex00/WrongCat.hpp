#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    /* data */
public:
    WrongCat(/* args */);
    ~WrongCat();
    void makeSound(void) const;
};

#endif