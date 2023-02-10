#include "Form.hpp"

Form::Form() : name(NULL), sign_grade(150), exec_grade(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string n, int sg, int eg) : name(n), sign_grade(sg), exec_grade(eg)
{
	std::cout << "Form constructor called" << std::endl;
	if (sg > 150 || eg > 150)
		throw Form::GradeTooLowException();
	else if (sg < 1 || sg < 1)
		throw Form::GradeTooHighException();
	this->signed_ = false;
}

Form::Form(const Form &fixed) : name(fixed.name), sign_grade(fixed.sign_grade), exec_grade(fixed.exec_grade)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = fixed;
}

Form & Form::operator=(const Form &rhs)
{
	std::cout << "Form copy assignement called" << std::endl;
	if (this != &rhs)
		this->signed_ = rhs.signed_;
	return *this;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName() const
{
	return this->name;
}

bool	Form::getSigned_() const
{
	return this->signed_;
}

int		Form::getSignGrade() const
{
	return this->sign_grade;
}

int		Form::getexecGrade() const
{
	return this->exec_grade;
}

std::ostream & operator<<(std::ostream &output, Form &F)
{
	output << "form's name " << F.getName() << "signed " << F.getSigned_() << "sign grade " << F.getSignGrade() << "execute grade " << F.getexecGrade() << std::endl;
	return output;
}

void	Form::beSigned(const Bureaucrat &B)
{
	if (B.getGrade() <= this->getSignGrade())
		this->signed_ = true;
	else
		throw Form::GradeTooLowException();
}

