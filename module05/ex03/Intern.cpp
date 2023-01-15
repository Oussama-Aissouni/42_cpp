#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "intern constructor called" << std::endl;
}

Intern::Intern(const Intern &fixed)
{
	std::cout << "intern copy constructor called" << std::endl;
	*this = fixed;
}

Intern & Intern::operator=(const Intern &rhs)
{
	std::cout << "intern copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
	}
	return *this;
}

Intern::~Intern()
{
	std::cout << "intern destructor called" << std::endl;
}

Form * createShrubbery(std::string target_)
{
	Form * rrf = new ShrubberyCreationForm(target_);
	return rrf;
}

Form * createRobotomy(std::string target_)
{
	Form * rrf = new RobotomyRequestForm(target_);
	return rrf;
}

Form * createPresidential(std::string target_)
{
	Form * rrf = new PresidentialPardonForm(target_);
	return rrf;
}

Form * Intern::makeForm(std::string name_, std::string target_)
{
	std::string	requests[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int	pos = -1;
	int	i = 0;
	while (i < 3)
	{
		if (name_ == requests[i])
		{
			pos = i;
			break;
		}
		i++;
	}
	if (pos == -1)
		throw FormNotFound();
	
	Form* rrf;
	Form* (*func_ptr[])(std::string) = {&createShrubbery,&createRobotomy,&createPresidential};

	rrf = (*func_ptr[pos])(target_);
	return (rrf);
}

