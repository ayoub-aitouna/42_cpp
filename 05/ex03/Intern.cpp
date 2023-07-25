#include "Intern.hpp"
#include "AForm.hpp"
#include <string>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &lhs)
{
	*this = lhs;
}

Intern &Intern::operator=(const Intern &lhs)
{
	(void)lhs;
	return (*this);
}

int IndexOf(std::string list[], int size, std::string item)
{
	for (int i = 0; i < size; i++)
	{
		if (list[i] == item)
			return i;
	}
	return -1;
}

AForm *Intern::makeForm(std::string FormName, std::string Target)
{
	std::string AvailableFormNames[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm *AvailableForm[] = {new RobotomyRequestForm(Target), new PresidentialPardonForm(Target), new ShrubberyCreationForm(Target)};
	AForm *SelectedForm = NULL;
	int index = IndexOf(AvailableFormNames,
						3, FormName);
	if (index == -1)
		throw Intern::InvalideFormExceeption();
	SelectedForm = AvailableForm[index];
	for (int i = 0; i < 3; i++)
	{
		if (i != index)
			delete AvailableForm[i];
	}
	std::cout << "Intern creates " << *SelectedForm << std::endl;
	return SelectedForm;
}
