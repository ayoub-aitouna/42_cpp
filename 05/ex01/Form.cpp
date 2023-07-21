#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name(""), singed(false), requredGradeToSign(1), requiredGradeToExecute(1)
{
}

Form::Form(const Form &lhs) : requredGradeToSign(1), requiredGradeToExecute(1)
{
	*this = lhs;
}

Form::Form(std::string name, int requredGradeToSign, int requiredGradeToExecute) : name(name), singed(false), requredGradeToSign(requredGradeToSign), requiredGradeToExecute(requiredGradeToExecute)
{
	if (requiredGradeToExecute < 1 || requredGradeToSign < 1)
		throw Form::GradeTooHighException();
	if (requiredGradeToExecute > 150 || requredGradeToSign > 150)
		throw Form::GradeTooLowException();
}

Form &Form::operator=(const Form &lhs)
{
	if (this != &lhs)
	{
		*((std::string *)&this->name) = lhs.getName();
		this->singed = lhs.getSigned();
		*((int *)&this->requiredGradeToExecute) = lhs.getRequiredGradeToExecute();
		*((int *)&this->requredGradeToSign) = lhs.getRequredGradeToSign();
	}
	return (*this);
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSigned() const
{
	return (this->singed);
}

int Form::getRequredGradeToSign() const
{
	return (this->requredGradeToSign);
}

int Form::getRequiredGradeToExecute() const
{
	return (this->requiredGradeToExecute);
}

bool Form::beSigned(Bureaucrat &bureaucrat)
{
	return (this->singed = bureaucrat.getGrade() < this->requredGradeToSign);
}

std::ostream &operator<<(std::ostream& os, const Form& value)
{
	os	<< value.getName() << ", " << (value.getSigned() ? "" : "not ") 
			<< "singed, required Grade to Sign is " << value.getRequredGradeToSign()
			<< "  required Grade to Execute is " << value.getRequiredGradeToExecute()
			<< std::endl;
	return (os);
}


Form::~Form()
{
}
