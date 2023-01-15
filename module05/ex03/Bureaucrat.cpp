#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : grade(150)
{
	std::cout << "default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
	std::cout << "Constructor called" << std::endl;
	if (g > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (g < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat &fixed) : name(fixed.name)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		this->grade = rhs.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int	Bureaucrat::getGrade() const
{
	return this->grade;
}

void	Bureaucrat::incrementGrade() 
{
	if (this->grade - 1 == 0)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade -= 1;
}

void	Bureaucrat::decrementGrade()
{
	if (this->grade + 1 == 151)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade += 1;
}

std::ostream& operator<<(std::ostream &output, Bureaucrat &B)
{
	output << B.getName() << ", bureaucrat grade " << B.getGrade() << ".\n";
	return output;
}

void Bureaucrat::signForm(Form &F)
{
	if (F.getSigned_() == true && this->getGrade() <= F.getSignGrade())
		std::cout << this->getName() << " signed " << F.getName() << std::endl;
	else if (F.getSigned_() == false && this->getGrade() <= F.getSignGrade())
		std::cout << this->getName() << " can't sign " << F.getName() << " because it's unsignable" << std::endl;
	else
		std::cout << this->getName() << " can't sign " << F.getName() << " because unproper grade" << std::endl;
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
