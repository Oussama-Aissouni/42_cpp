#ifndef PRESIDENTIAL
#define PRESIDENTIAL

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target_);
	PresidentialPardonForm(const PresidentialPardonForm &fixed);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	~PresidentialPardonForm();
	void	beSigned(Bureaucrat const &B);
	void	execute(Bureaucrat const & executor) const;
};

#endif