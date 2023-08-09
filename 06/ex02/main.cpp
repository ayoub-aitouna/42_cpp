#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

size_t get_random_index(int max)
{
    return (rand() % max);
}

Base *generate(void)
{

    Base *result;
    size_t index;

    Base *list[] = {new A(), new B(), new C()};
    index = get_random_index(3);
    result = list[index];
    for (size_t i = 0; i < 3; i++)
    {
        if (i != index)
            delete list[i];
    }
    return (result);
}

void identify(Base *p)
{
    int type;
    std::string types[] = {"NON", "A", "B", "C"};
    type = 0;
    if (dynamic_cast<A *>(p) != NULL)
        type = 1;
    else if (dynamic_cast<B *>(p) != NULL)
        type = 2;
    else if (dynamic_cast<C *>(p) != NULL)
        type = 3;
    std::cout << "p is instance of type : " << types[type] << std::endl;
}

void identify(Base &p)
{
    try
    {
        dynamic_cast<A &>(p);
        std::cout << "p is instance of type : A" << std::endl;
        return;
    }
    catch (const std::exception &e)
    {
    }

    try
    {
        dynamic_cast<B &>(p);
        std::cout << "p is instance of type : B" << std::endl;
        return;
    }
    catch (const std::exception &e)
    {
    }

    try
    {
        dynamic_cast<C &>(p);
        std::cout << "p is instance of type : C" << std::endl;
        return;
    }
    catch (const std::exception &e)
    {
    }
    std::cout << "p has UnKnow  type : " << std::endl;
}

int main(void)
{
    srand((unsigned)time(NULL));
    identify(*generate());
    identify(*generate());
    identify(*generate());
    identify(*generate());
    identify(*generate());

    identify(generate());
    identify(generate());
    identify(generate());
    identify(generate());
    identify(generate());
    return (1);
}