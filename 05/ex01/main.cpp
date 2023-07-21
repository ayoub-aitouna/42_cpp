#include "Form.hpp"

int main()
{
	try
	{
		std::cout << "too low  Test" << std::endl;
		Form b1("b1", 10, 60);
		std::cout << b1 << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "too HIGH  Test" << std::endl;
		Form b2("b2", 1, 1);
		std::cout << b2 << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}