#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "robotomy default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target_) : Form("RobotomyRequestForm", 72, 45) , target(target_)
{
	std::cout << "robotomy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &fixed) : Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "robotomy copy constructor called" << std::endl;
	*this = fixed;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	std::cout << "robotomy assignement operator called" << std::endl;
	if (this != &rhs)
		this->target = rhs.target;
	return *this;
}
	
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "robotomy destructor called" << std::endl;
}

void	RobotomyRequestForm::beSigned(Bureaucrat const &B)
{
	Form::beSigned(B);
}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	if (this->getSigned_() == false)
		throw FormNotSigned();
	else if (executor.getGrade() > this->getexecGrade())
		throw RobotomyFailedException();
	std::cout << "drilling sounds ..."<< std::endl << this->target << " has been robotomized successfully 50% of the time" << std::endl;
}
