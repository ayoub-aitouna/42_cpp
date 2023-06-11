#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat &);
    Cat &operator=(const Cat &);
    virtual ~Cat();

public:
    void makeSound(void) const;
};

#endif
