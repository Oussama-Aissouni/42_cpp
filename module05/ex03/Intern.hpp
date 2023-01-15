#ifndef INTERN
#define INTERN

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &fixed);
	Intern & operator=(const Intern &rhs);
	~Intern();
	Form* makeForm(std::string name_, std::string target_);

	class FormNotFound : public std::exception
	{
	public:
		FormNotFound(){};
		~FormNotFound() throw() {};
		const char *what() const throw()
		{
			return "form not found";
		}
	};
};

#endif