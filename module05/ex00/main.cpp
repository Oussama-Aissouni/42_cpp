#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("ads", 3);
		Bureaucrat b("ads", 150);
		// Bureaucrat c("ads", 151);
		// Bureaucrat d("ads", 0);

		std::cout << b;
		std::cout << a;
		b.incrementGrade();
		a.incrementGrade();
		std::cout << b;
		std::cout << a;
		b.decrementGrade();
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
