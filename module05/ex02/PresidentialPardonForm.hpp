#ifndef PRESIDENTIAL
#define PRESIDENTIAL

#include "Form.hpp"
#include "cstdlib"

class PresidentialPardonForm : public Form
{
private:
	std::string target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string target_);
	PresidentialPardonForm(const PresidentialPardonForm &fixed);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	~PresidentialPardonForm();
	void	beSigned(Bureaucrat const &B);
	void	execute(Bureaucrat const & executor) const;
};

#endif