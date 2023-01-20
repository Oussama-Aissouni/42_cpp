#include "Array.hpp"

int main( void )
{
	try
	{
		// int *a = new int();
		// std::cout << *a << std::endl;
		// Array<int> *arr = new Array<int>(5);
		// Array<int> *arr1 = new Array<int>(7);
		// for (int i = 0; i < arr->size(); i++)
		// {
		// 	std::cout << &arr[i] << std::endl;
		// }
		// Array<int> arr(4);
		// for (int i = 0; i < arr.size(); i++)
		// 	arr[i] = i;
		// for (int i = 0; i < arr.size(); i++)
		// 	std::cout << arr[i] << std::endl;

		// Array<int> arr1(4);

		// arr1 = arr;
		// for (int i = 0; i < arr1.size(); i++)
		// 	std::cout << arr1[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}