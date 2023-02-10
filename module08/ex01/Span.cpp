#include "Span.hpp"

Span::Span() : size(0) , elem_num(0)
{
	// std::cout << "default constructor called" << std::endl;
}

Span::Span(unsigned int _size) : elem_num(0)
{
	// std::cout << "parameter constructor called" << std::endl;
	v.reserve(_size);
	this->size = _size;
}

Span::Span(const Span& fixed)
{
	// std::cout << "copy constructor called" << std::endl;
	*this  = fixed;
}

Span& Span::operator=(const Span& rhs)
{
	// std::cout << "copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->size = rhs.size;
		this->elem_num = rhs.elem_num;
		this->v = rhs.v;
	}
	return *this;
}

Span::~Span()
{
	// std::cout << "destructor called" << std::endl;
}

void Span::addNumber(int num)
{
	if (elem_num >= size)
		throw std::length_error("7dek tem");
	this->v.push_back(num);
	this->elem_num += 1;
}

int Span::shortestSpan()
{
	if (elem_num == 0 || size == 1)
		throw Customexception();
	unsigned int i = 0;
	int span = -1;
	std::sort(v.begin(), v.end());
	while (i < elem_num - 1)
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
	if (elem_num == 0 || size == 1)
		throw Customexception();
	std::sort(v.begin(), v.end());
	return (v[elem_num - 1] - v[0]);
}

void Span::addNumber(int start, int end)
{
	if (start > end)
		throw std::length_error("mn nytek");
	for (int i = start; i <= end; i++)
	{
		if (elem_num >= size)
			throw std::length_error("7dek tem");
		this->v.push_back(i);
		this->elem_num += 1;
	}
}