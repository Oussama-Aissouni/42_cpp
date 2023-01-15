#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "president default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target_) : Form("PresidentialPardonForm", 25, 5) , target(target_)
{
	std::cout << "president constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &fixed) : Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "president copy constructor called" << std::endl;
	*this = fixed;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	std::cout << "president assignement operator called" << std::endl;
	if (this != &rhs)
		this->target = rhs.target;
	return *this;
}
	
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "president destructor called" << std::endl;
}

void	PresidentialPardonForm::beSigned(Bureaucrat const &B)
{
	Form::beSigned(B);
}

void PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	if (this->getSigned_() == false)
		throw FormNotSigned();
	else if (executor.getGrade() > this->getexecGrade())
		throw GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
