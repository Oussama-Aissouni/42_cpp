#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &fixed)
{
	std::cout << "Brain copy constructor called" << std::endl;
	int i;
	i = 0;
	while (i < 100)
	{
		this->ideas[i] = fixed.ideas[i];
		i++;
	}
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain copy assignment called" << std::endl;
	if (this != &rhs)
	{
		int i;
		i = 0;
		while (i < 100)
		{
			this->ideas[i] = rhs.ideas[i];
			i++;
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}