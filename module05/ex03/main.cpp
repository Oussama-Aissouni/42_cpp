#include "Intern.hpp"

int main()
{
	try
	{
		Intern someGuy;
		Bureaucrat a("bureaucrat", 1);
		Form *rrf;

		rrf = someGuy.makeForm("shrubbery creation", "christmas tree");
		rrf = someGuy.makeForm("robotomy request", "robot");
		rrf->beSigned(a);
		a.executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
