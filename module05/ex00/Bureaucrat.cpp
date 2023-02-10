#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
	std::cout << "Bureaucrat Constructor called" << std::endl;
	if (g > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (g < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat &fixed) : name(fixed.name)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
	*this = fixed;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << "Bureaucrat Assignement operator called" << std::endl;
	if (this != &rhs)
		this->grade = rhs.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

std::string Bureaucrat::getName()
{
	return this->name;
}

int	Bureaucrat::getGrade()
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
