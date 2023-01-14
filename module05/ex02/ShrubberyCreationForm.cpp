#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target_) : Form("ShrubberyCreationForm", 145, 137) , target(target_)
{
	std::cout << "constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &fixed) : Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "copy constructor called" << std::endl;
	*this = fixed;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	std::cout << "assignement operator called" << std::endl;
	if (this != &rhs)
		this->target = rhs.target;
	return *this;
}
	
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	
}
