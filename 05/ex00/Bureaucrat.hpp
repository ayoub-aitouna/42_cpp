#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat
{
  public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &lhs);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &lhs);

  private:
	std::string name;
	int grade;

  public:
	int getGrade() const;
	std::string getName() const;
	void increment();
	void decrement();
	class GradeTooHighException : public std::exception
	{
	  public:
		const char *what() const throw()
		{
			return "the grade is too HIGHT";
		}
	};
	class GradeTooLowException : public std::exception
	{
	  public:
		const char *what() const throw()
		{
			return "the grade is too LOW";
		}
	};
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &value);
#endif