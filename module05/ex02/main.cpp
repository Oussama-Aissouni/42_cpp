#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat a("Bureaucrat1", 137);
		Bureaucrat b("Bureaucrat2", 45);
		Bureaucrat c("Bureaucrat3", 5);
		ShrubberyCreationForm form("home");
		RobotomyRequestForm form1("robot1");
		PresidentialPardonForm form2("person");

		form.beSigned(a);
		form1.beSigned(b);
		form2.beSigned(c);

		a.executeForm(form);
		b.executeForm(form1);
		c.executeForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
