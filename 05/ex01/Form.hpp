#ifndef FORM_HPP
#define FORM_HPP
# include <exception>
# include <string>
# include <iostream>

class Bureaucrat;
class Form
{
  public:
	Form();
	Form(const Form &lhs);
	Form(std::string name, int requredGradeToSign, int requiredGradeToExecute);
	Form &operator=(const Form &lhs);
	~Form();

  private:
	const std::string name;
	bool singed;
	const int requredGradeToSign;
	const int requiredGradeToExecute;

	public:
		std::string getName() const;
		bool getSigned() const;
		int getRequredGradeToSign() const;
		int getRequiredGradeToExecute() const;
		bool beSigned(Bureaucrat& bureaucrat);
		
  public:
	class GradeTooHighException : public std::exception
	{
	  public:
		const char *what() const throw()
		{
			return "too high grade";
		}
	};
	class GradeTooLowException : public std::exception
	{
	  public:
		const char *what() const throw()
		{
			return "too low grade";
		}
	};
};
std::ostream &operator<<(std::ostream& os, const Form& value);
#endif