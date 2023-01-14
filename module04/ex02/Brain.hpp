#ifndef BRAIN
#define BRAIN
#include "iostream"
class Brain
{
public:
	std::string ideas[100];
	Brain();
	Brain(const Brain &fixed);
	Brain & operator=(const Brain &rhs);
	~Brain();
};

#endif