#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"
#include <string>
#include <exception>
class Intern
{
	public:
		Intern();
		Intern(const Intern &lhs);
		Intern &operator=(const Intern &lhs);

	public:
		AForm *makeForm(std::string FormName, std::string FormTarget);
		class InvalideFormExceeption : public std::exception{
			public:
				const char* what() const throw()
				{
					return "Invalide Form";
				}
		};
};
#endif
