#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "shrubbery default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target_) : Form("ShrubberyCreationForm", 145, 137) , target(target_)
{
	std::cout << "shrubbery constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &fixed) : Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "shrubbery copy constructor called" << std::endl;
	*this = fixed;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	std::cout << "shrubbery assignement operator called" << std::endl;
	if (this != &rhs)
		this->target = rhs.target;
	return *this;
}
	
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "shrubbery destructor called" << std::endl;
}

void	ShrubberyCreationForm::beSigned(Bureaucrat const &B)
{
	Form::beSigned(B);
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	if (this->getSigned_() == false)
		throw FormNotSigned();
	else if (executor.getGrade() > this->getexecGrade())
		throw GradeTooLowException();

	std::string file_name = this->target + "_shrubbery" ;
	std::ofstream file (file_name);
	file << "      /\\      \n     /\\*\\     \n    /\\O\\*\\    \n   /*/\\/\\/\\   \n  /\\O\\/\\*\\/\\  \n /\\*\\/\\*\\/\\/\\ \n/\\O\\/\\/*/\\/O/\\\n      ||      \n      ||      \n      ||      \n" << std::endl;
}
