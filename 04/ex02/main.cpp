#include <iostream>
#include <stdlib.h>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *creature[10];

    // copy Dog
    const Dog *tst = new Dog();
    const Dog *tst_2 = new Dog(*tst);
    std::cout << "tst Brain Add > " << tst->getBrain() << " tst_2 Brain Add > " << tst_2->getBrain() << std::endl;
    // Copy Cats
    const Cat *Cat_tst = new Cat();
    const Cat *Cat_tst_2 = new Cat(*Cat_tst);
    std::cout << "tst Brain Add > " << Cat_tst->getBrain() << " tst_2 Brain Add > " << Cat_tst_2->getBrain() << std::endl;

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            creature[i] = new Dog();
        else
            creature[i] = new Cat();
    }
    for (int i = 0; i < 10; i++)
    {
        creature[i]->makeSound();
    }
    for (int i = 0; i < 10; i++)
    {
        delete creature[i];
    }
    return 0;
}
