#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
	this->name = name;
}

Bureaucrat::Bureaucrat(const Bureaucrat &lhs)
{
	*this = lhs;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &lhs)
{
	if (this != &lhs)
	{
		this->name = lhs.getName();
		this->grade = lhs.getGrade();
	}
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::increment()
{
	this->grade -= 1;
	if (this->grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrement()
{
	this->grade += 1;
	if (this->grade > 150)
		throw GradeTooLowException();
}
void Bureaucrat::signForm(Form &form)
{
	if (form.beSigned(*this))
		std::cout << this->name << " signed " << form.getName() << std::endl;
	else
		std::cout << this->name << " couldn't sign " << form.getName() << " because Bureaucrat is has low rank" << std::endl;
}
std::ostream &operator<<(std::ostream &os, const Bureaucrat &value)
{
	os << value.getName() << ", bureaucrat grade " << value.getGrade() << ".";
	return (os);
}

Bureaucrat::~Bureaucrat()
{
}