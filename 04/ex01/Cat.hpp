#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat &);
    Cat &operator=(const Cat &);
    virtual ~Cat();

private:
    Brain *brain;

public:
    void makeSound(void) const;
    Brain *getBrain(void) const;
};

#endif