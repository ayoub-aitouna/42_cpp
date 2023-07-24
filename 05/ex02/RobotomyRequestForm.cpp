
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("<target>", 25, 5) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 25, 5) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &lhs)
{
    *this = lhs;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &lhs)
{
    if (this != &lhs)
        AForm::operator=(lhs);
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    check_permisions(executor);
}