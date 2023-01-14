#ifndef SHRUBBERY
#define SHRUBBERY

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target_);
	ShrubberyCreationForm(const ShrubberyCreationForm &fixed);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
	~ShrubberyCreationForm();
	void	execute(Bureaucrat const & executor) const;
};

#endif