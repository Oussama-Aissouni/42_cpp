#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> v;
		std::list<int> l;
		for (int i = 0; i < 5; i++)
		{
			v.push_back(i);
			l.push_back(i);
		}
		easyfind(v, 4);
		easyfind(l, -8);
		return 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
