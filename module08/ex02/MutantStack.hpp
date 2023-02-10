#ifndef MUTANT
#define MUTANT

#include <iostream>
#include <stack>
#include <list>

template <typename T, class container = std::deque<T> > class MutantStack : public std::stack<T>
{
	public :
		MutantStack(){}
		MutantStack(const MutantStack &fixed){*this = fixed;}
		MutantStack & operator=(const MutantStack &fixed)
		{
			if (this != &fixed)
			{}
			return *this;
		}
		~MutantStack(){}
		typedef typename container::iterator iterator;
		iterator begin() {
			return this->c.begin();
		}
		iterator end() {
			return this->c.end();
		}
};
#endif