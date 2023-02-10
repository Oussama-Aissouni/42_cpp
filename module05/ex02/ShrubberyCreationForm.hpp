#ifndef SHRUBBERY
#define SHRUBBERY

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target_);
	ShrubberyCreationForm(const ShrubberyCreationForm &fixed);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
	~ShrubberyCreationForm();
	void	beSigned(Bureaucrat const &B);
	void	execute(Bureaucrat const & executor) const;
};

#endif