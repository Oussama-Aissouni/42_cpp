#ifndef BRAIN
#define BRAIN
#include "iostream"
class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &fixed);
	Brain & operator=(const Brain &rhs);
	~Brain();
};

#endif