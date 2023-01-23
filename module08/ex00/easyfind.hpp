#ifndef EASYFIND
#define EASYFIND

#include <algorithm>
#include <vector>
#include <list>
#include <iostream>

class NotFoundException : public std::exception
{
	public:
		NotFoundException(){}
		~NotFoundException() throw() {}
		const char * what() const throw()
		{
			return "Not Found";
		}
};


template <typename T> void easyfind(T& a, int find)
{
	if (a.end() ==  std::find(a.begin(), a.end(), find))
		throw NotFoundException();
	else
		std::cout << "found" << std::endl;
}

#endif