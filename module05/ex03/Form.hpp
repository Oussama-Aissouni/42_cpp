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
	std::string		getName() const;
	bool			getSigned_() const;
	int				getSignGrade() const;
	int				getexecGrade() const;
	virtual void	beSigned(Bureaucrat const &B);
	virtual void	execute(Bureaucrat const & executor) const = 0;
	
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

	class FormNotSigned : public std::exception
	{
	public:
		FormNotSigned(){};
		~FormNotSigned() throw() {};
		const char *what() const throw()
		{
			return "form not signed";
		}
	};
};

std::ostream & operator<<(std::ostream &output, Form &F);

#endif