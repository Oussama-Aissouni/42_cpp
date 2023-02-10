#include "Base.hpp"

Base* generate(void)
{
	srand(time(nullptr));
	int random = rand() % 3;

	if (random == 0)
		return (new A());
	else if (random == 1)
		return (new B());
	return (new C());
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "p : A" << std::endl;
	if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "p : B" << std::endl;
	if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "p : C" << std::endl;
	
}

void identify(Base& p)
{
	Base P;

	try
	{
		P = dynamic_cast<A&>(p);
		std::cout << "p : A" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
	}
	try
	{
		P = dynamic_cast<B&>(p);
		std::cout << "p : B" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
	}
	try
	{
		P = dynamic_cast<C&>(p);
		std::cout << "p : C" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
	}
}

int main()
{
	Base *ptr;

	ptr = generate();
	identify(*ptr);
	identify(ptr);
	return 0;
}