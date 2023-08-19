#ifndef C_HPP
#define C_HPP
#include "Base.hpp"

class C : public Base
{
public:
    C();
    C(C &lhs);
    C &operator=(const C &lhs);
    ~C();

private:
   
};

#endif
