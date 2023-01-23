#include "Span.hpp"

Span::Span()
{
	// std::cout << "default constructor called" << std::endl;
}

Span::Span(unsigned int N)
{
	// std::cout << "parameter constructor called" << std::endl;
	this->v.reserve(N);
}

// Span::Span(const Span& fixed)
// {
// 	// std::cout << "copy constructor called" << std::endl;
// }

// Span& Span::operator=(const Span& rhs)
// {
// 	// std::cout << "copy operator called" << std::endl;
// }

Span::~Span()
{
	// std::cout << "destructor called" << std::endl;
}

void Span::addNumber(int num)
{
	this->v.push_back(num);
}

int Span::shortestSpan()
{
	if (v.empty() || v.size() == 1)
		throw Customexception();
	unsigned int i = 0;
	int span = -1;
	std::sort(v.begin(), v.end());
	while (i < v.size() - 1)
	{
		if(span == -1)
		{
			span = v[i + 1] - v[i] ;
			continue;
		}
		if (v[i + 1] - v[i] <= span)
			span = v[i + 1] - v[i] ;
		i++;
	}
	return span;
}

int Span::longestSpan()
{
	if (v.empty() || v.size() == 1)
		throw Customexception();
	std::sort(v.begin(), v.end());
	return (v[v.size() - 1] - v[0]);
}

void Span::addNumber(int start, int end)
{
	if (start <= end)
	{
		std::cout << "mn nytek" << std::endl;
		return;
	}
	for (int i = start; i < end; i++)
	{
		this->v.push_back(i);
	}
}