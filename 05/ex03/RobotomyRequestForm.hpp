#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm &lhs);
    RobotomyRequestForm &operator=(RobotomyRequestForm &lhs);
    ~RobotomyRequestForm();

private:
    static int RobotomyRequestList;

public:
    void execute(Bureaucrat const &executor) const;
};
#endif