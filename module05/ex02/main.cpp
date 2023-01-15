#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Bureaucrat a("Bureaucrat1", 137);
		Bureaucrat b("Bureaucrat2", 45);
		ShrubberyCreationForm form("home");
		// RobotomyRequestForm form1("robot1");

		// form1.beSigned(b);
		// form1.execute(b);
		form.beSigned(a);
		// form.execute(a);
		a.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
