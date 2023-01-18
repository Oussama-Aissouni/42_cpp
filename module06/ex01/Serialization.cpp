#include "Serialization.hpp"

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t> (ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data *A;

	A = (Data*)malloc(sizeof(Data));
	A->a = 5;
	A->b = 4;
	std::cout << &A << std::endl;
	deserialize(serialize(A));
	std::cout << &A << std::endl;
	// std::cout << A->a << std::endl;

	return 0;
}