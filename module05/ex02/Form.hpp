#ifndef FORM
#define FORM

#include "iostream"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	

private:
	bool				signed_;
	const std::string	name;
	const int			sign_grade;
	const int			exec_grade;
public:
	Form();
	Form(std::string name, int sg, int eg);
	Form(const Form &fixed);
	Form & operator=(const Form &rhs);
	~Form();
	std::string		getName();
	bool			getSigned_();
	int				getSignGrade();
	int				getexecGrade();
	virtual void	beSigned(Bureaucrat &B) = 0;
	virtual void	execute(Bureaucrat const & executor) const;
	
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
};

std::ostream & operator<<(std::ostream &output, Form &F);

#endif