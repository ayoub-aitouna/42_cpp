#ifndef AFORM_HPP
#define AFORM_HPP
# include <exception>
# include <string>
# include <iostream>

class Bureaucrat;
class AForm
{
  public:
	AForm();
	AForm(const AForm &lhs);
	AForm(std::string name, int requredGradeToSign, int requiredGradeToExecute);
	AForm &operator=(const AForm &lhs);
	virtual ~AForm();

  private:
	const std::string name;
	bool singed;
	const int requredGradeToSign;
	const int requiredGradeToExecute;

	public:
		std::string		getName() const;
		bool			getSigned() const;
		int				getRequredGradeToSign() const;
		int				getRequiredGradeToExecute() const;
		bool			beSigned(Bureaucrat& bureaucrat);
		void			check_permisions(Bureaucrat const & executor) const;
		virtual void	execute(Bureaucrat const & executor) const = 0;
  
  public:
	class GradeTooHighException : public std::exception
	{
	  public:
		const char *what() const throw()
		{
			return "too high grade";
		}
	};
	class UnSignedException : public std::exception
	{
	  public:
		const char *what() const throw()
		{
			return "the form need to be singed first";
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
std::ostream &operator<<(std::ostream& os, const AForm& value);
#endif
