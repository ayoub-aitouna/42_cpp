#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <stack>

class RPN
{
public:
    RPN();
    RPN(std::string expresion);
    RPN(RPN &lhs);
    RPN &operator=(const RPN &lhs);
    int stack_top();
    ~RPN();

private:
    std::stack<int> m_stack;

public:
};

#endif
