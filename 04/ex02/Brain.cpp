#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor has been Called" << std::endl;
}
Brain::Brain(const Brain &brain)
{
    for (size_t i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
    std::cout << "Brain Copy constructor has been Called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor has been Called" << std::endl;
}
