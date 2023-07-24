#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm &lhs);
    RobotomyRequestForm &operator=(RobotomyRequestForm &lhs);
    ~RobotomyRequestForm();

public:
    void execute(Bureaucrat const &executor) const;
};
#endif