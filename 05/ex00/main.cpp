#include "Bureaucrat.hpp"

int main()
{
	try
	{
		std::cout << "too low  Test" << std::endl;
		Bureaucrat b1("b1", 150);
		std::cout << b1 << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "too HIGH  Test" << std::endl;
		Bureaucrat b2("b2", 0);
		std::cout << b2 << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "Increminting Test" << std::endl;
		Bureaucrat IB("IB", 150);
		for (size_t i = 0; i < 149; i++)
			IB.increment();
		std::cout << IB << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "Decrementing Test" << std::endl;
		Bureaucrat DB("DB", 1);
		for (size_t i = 0; i < 160; i++)
			DB.decrement();
		std::cout << DB << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}