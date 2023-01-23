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
	unsigned int i = 0;
	int span = -1;
	std::sort(v.begin(), v.end());
	std::cout << v.size() << std::endl;
	while (i < v.size() - 1)
	{
		if (v[i] - v[i + 1] >= span)
			span = v[i] - v[i + 1];
		i++;
	}
	return span;
}

// int Span::longestSpan()
// {

// }

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