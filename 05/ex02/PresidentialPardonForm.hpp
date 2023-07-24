#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
# include "Bureaucrat.hpp"
class PresidentialPardonForm : public AForm
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm &lhs);
    PresidentialPardonForm &operator=(PresidentialPardonForm &lhs);
    ~PresidentialPardonForm();

public:
    void execute(Bureaucrat const &executor) const;
};
#endif