#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name(""), singed(false), requredGradeToSign(1), requiredGradeToExecute(1)
{
}

AForm::AForm(const AForm &lhs) : requredGradeToSign(1), requiredGradeToExecute(1)
{
	*this = lhs;
}

AForm::AForm(std::string name, int requredGradeToSign, int requiredGradeToExecute) : name(name), singed(false), requredGradeToSign(requredGradeToSign), requiredGradeToExecute(requiredGradeToExecute)
{
	if (requiredGradeToExecute < 1 || requredGradeToSign < 1)
		throw AForm::GradeTooHighException();
	if (requiredGradeToExecute > 150 || requredGradeToSign > 150)
		throw AForm::GradeTooLowException();
}

AForm &AForm::operator=(const AForm &lhs)
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

std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getSigned() const
{
	return (this->singed);
}

int AForm::getRequredGradeToSign() const
{
	return (this->requredGradeToSign);
}

int AForm::getRequiredGradeToExecute() const
{
	return (this->requiredGradeToExecute);
}

bool AForm::beSigned(Bureaucrat &bureaucrat)
{
	return (this->singed = bureaucrat.getGrade() <= this->requredGradeToSign);
}

std::ostream &operator<<(std::ostream& os, const AForm& value)
{
	os	<< value.getName() << ", " << (value.getSigned() ? "" : "not ") 
			<< "singed, required Grade to Sign is " << value.getRequredGradeToSign()
			<< "  required Grade to Execute is " << value.getRequiredGradeToExecute()
			<< std::endl;
	return (os);
}


AForm::~AForm()
{
}
