#ifndef A_HPP
#define A_HPP

#include "Base.hpp"

class A : public Base
{
public:
    A();
    A(A &lhs);
    A &operator=(const A &lhs);
    ~A();

private:
    int id;
};

#endif
