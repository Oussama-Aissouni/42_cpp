#ifndef BUREAUCRAT
#define BUREAUCRAT

#include "iostream"
#include "Form.hpp"

class Form;

class Bureaucrat
{

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(){};
		~GradeTooHighException() throw() {};
		const char *what() const throw()
		{
			return "grade too high";
		}
	};
	
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(){};
		~GradeTooLowException() throw() {};
		const char *what() const throw()
		{
			return "grade too low";
		}
	};

private:
	const	std::string name;
	int		grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &fixed);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	~Bureaucrat();
	std::string	getName();
	int			getGrade();
	void		incrementGrade();
	void		decrementGrade();
	void		signForm(Form &F);
};

std::ostream& operator<<(std::ostream &output, Bureaucrat &B);

#endif

