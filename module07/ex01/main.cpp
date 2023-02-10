#include "iter.hpp"

template <typename T> void func (T &x)
{
	std::cout << x << std::endl;
}

int main( void )
{
	int arr[] = {0,1,2,3,4};
	std::string arr1[] = {"hello", "salam" , "hola"};

	iter(arr, 5, func);
	iter(arr1, 3, func);
	return 0;
}