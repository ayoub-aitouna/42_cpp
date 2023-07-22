#include "Form.hpp"
#include "Bureaucrat.hpp"

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

	try
	{
		Bureaucrat m_bure("b1", 150);
		Form m_form("piece threty", 160, 1);
		m_bure.signForm(m_form);

		std::cout << m_bure << std::endl;
		std::cout << m_form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}