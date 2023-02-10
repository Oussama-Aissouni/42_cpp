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
	Data *B;

	A = new Data;
	A->a = 5;
	A->b = 4.1;
	B = deserialize(serialize(A));
 	std::cout << B->a << std::endl;
	std::cout << B->b << std::endl;
	delete A;
	return 0;
}