#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const WrongAnimal *wrongmeta = new WrongAnimal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *y = new WrongCat();
    std::cout << "j: " << j->getType() << std::endl;
    std::cout << "i: " << i->getType() << std::endl;
    std::cout << "y: " << y->getType() << std::endl;
    std::cout << "meta : " << meta->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    y->makeSound();
    meta->makeSound();
    wrongmeta->makeSound();
    return 0;
}
