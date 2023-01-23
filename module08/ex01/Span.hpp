#ifndef SPAN
#define SPAN

#include "iostream"
#include "algorithm"
#include "vector"

class Span
{
private:
	std::vector<int> v; 
	Span();
public:
	Span(unsigned int N);
	Span(const Span& fixed);
	Span & operator=(const Span& rhs);
	~Span();
	int shortestSpan();
	int longestSpan();
	void addNumber(int num);
	void addNumber(int start, int end);

	class Customexception : public std::exception
	{
		public :
			Customexception(){}
			~Customexception() throw(){}
			const char *what() const throw()
			{
				return "no values";
			}
	};
};


#endif