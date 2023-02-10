#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(100);

		sp.addNumber(6);
		sp.addNumber(1);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(12);
		sp.addNumber(50, 50);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		return 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
