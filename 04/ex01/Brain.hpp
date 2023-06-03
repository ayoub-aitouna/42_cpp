#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
public:
    Brain();
    Brain(const Brain &brain);
    ~Brain();

private:
    std::string ideas[100];
};
#endif