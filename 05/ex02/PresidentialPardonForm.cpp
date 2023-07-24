
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("<target>", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5){ }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &lhs)
{
    *this = lhs;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &lhs)
{
    if(this != &lhs)
        AForm::operator=(lhs);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
       check_permisions(executor);
       
}