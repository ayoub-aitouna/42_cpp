#include "RPN.hpp"

RPN::RPN()
{
}

int RPN::stack_top()
{
	int result = this->m_stack.top();
	this->m_stack.pop();
	return (result);
}

RPN::RPN(std::string expresion)
{
	for (size_t i = 0; i < expresion.size(); i++)
	{
		if (std::isdigit(expresion[i]))
			this->m_stack.push(expresion[i] - 48);
		else if (expresion[i] == '*')
		{
			if (this->m_stack.size() < 2)
				throw std::runtime_error("invalide operation");
			int n1 = stack_top();
			int n2 = stack_top();
			this->m_stack.push(n2 * n1);
		}
		else if (expresion[i] == '/')
		{
			if (this->m_stack.size() < 2)
				throw std::runtime_error("invalide operation");
			int n1 = stack_top();
			int n2 = stack_top();
			this->m_stack.push(n2 / n1);
		}
		else if (expresion[i] == '+')
		{
			if (this->m_stack.size() < 2)
				throw std::runtime_error("invalide operation");
			int n1 = stack_top();
			int n2 = stack_top();
			this->m_stack.push(n2 + n1);
		}
		else if (expresion[i] == '-')
		{
			if (this->m_stack.size() < 2)
				throw std::runtime_error("invalide operation");
			int n1 = stack_top();
			int n2 = stack_top();
			this->m_stack.push(n2 - n1);
		}
		else if (expresion[i] != ' ')
		{
			throw std::runtime_error("Error");
		}
	}
	if (this->m_stack.size() == 1)
		std::cout << this->m_stack.top() << std::endl;
}

RPN::RPN(RPN &lhs)
{
	*this = lhs;
}

RPN &RPN::operator=(const RPN &lhs)
{
	if (this != &lhs)
	{
		/* copy operator code*/
	}
	return (*this);
}

RPN::~RPN()
{
}
