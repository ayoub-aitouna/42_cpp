#ifndef BASE_HPP
#define BASE_HPP
#include <cstdlib>
#include <iostream>
class Base
{
public:
    Base();
    Base(Base& lhs);
    Base& operator=(const Base& lhs);
    virtual ~Base();

private:
};

#endif
