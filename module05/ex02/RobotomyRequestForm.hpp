#ifndef ROBOTOMY
#define ROBOTOMY

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target_);
		RobotomyRequestForm(const RobotomyRequestForm &fixed);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
		~RobotomyRequestForm();
		void	beSigned(Bureaucrat const &B);
		void	execute(Bureaucrat const & executor) const;
};

#endif