#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor has been Called" << std::endl;
}
Brain::Brain(const Brain &copy)
{
    std::cout << "Brain Copy constructor has been Called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "Brain Copy operator has been Called" << std::endl;
    if (this != &copy)
    {
        for (size_t i = 0; i < 100; i++)
            this->ideas[i] = copy.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor has been Called" << std::endl;
}
