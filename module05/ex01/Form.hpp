#ifndef FORM
#define FORM

#include "iostream"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
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
	bool				signed_;
	const std::string	name;
	const int			sign_grade;
	const int			exec_grade;
	Form();
public:
	Form(std::string name, int sg, int eg);
	Form(const Form &fixed);
	Form & operator=(const Form &rhs);
	~Form();
	std::string	getName() const;
	bool		getSigned_() const;
	int			getSignGrade() const;
	int			getexecGrade() const;
	void		beSigned(const Bureaucrat &B);
};

std::ostream & operator<<(std::ostream &output, Form &F);

#endif