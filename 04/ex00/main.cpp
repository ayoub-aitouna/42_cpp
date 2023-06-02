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
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << y->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    y->makeSound();
    meta->makeSound();
    wrongmeta->makeSound();
    return 0;
}
