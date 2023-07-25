#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm &lhs);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm &lhs);
    ~ShrubberyCreationForm();

public:
    void execute(Bureaucrat const &executor) const;
    class FileException : public std::exception
	{
	  public:
		const char *what() const throw()
		{
			return "error trying to open a file";
		}
	};
};
#endif