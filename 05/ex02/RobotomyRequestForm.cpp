
#include "RobotomyRequestForm.hpp"

int RobotomyRequestForm::RobotomyRequestList = 0;

RobotomyRequestForm::RobotomyRequestForm() : AForm("<target>", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45) {}

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
    std::cout << executor.getName() << " " << ((++RobotomyRequestList % 2) ? "has been robotomized successfully" : " robotomy failed") << std::endl;
}