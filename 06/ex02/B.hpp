#ifndef B_HPP
#define B_HPP
#include "Base.hpp"
class B : public Base
{
public:
    B();
    B(B &lhs);
    B &operator=(const B &lhs);
    ~B();

private:
    
};

#endif
