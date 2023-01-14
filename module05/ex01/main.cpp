#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat a("bureacrat1", 1);
		Bureaucrat b("bureacrat2", 150);
		Form f("form1", 70, 70);
		// Form f1("form2", 170, 0);
		a.signForm(f);
		f.beSigned(a);
		a.signForm(f);
		b.signForm(f);
		// f.beSigned(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
