#include "Array.hpp"

int main( void )
{
	try
	{
		Array<std::string> arr(10);
		for (size_t i = 0; i < arr.size(); i++)
			arr[i] = "elem";
		for (size_t i = 0; i < arr.size(); i++)
			std::cout << arr[i] << std::endl;
		
		Array<int> arr1(4);
		{
			Array<int> arr(5);

			for (size_t i = 0; i < arr1.size(); i++)
				arr1[i] = i;
			arr = arr1;
			for (size_t i = 0; i < arr1.size(); i++)
			{
				std::cout << arr1[i] << std::endl;
				std::cout << arr[i] << std::endl;
			}
		}

		Array<int> arr2;
		arr2[0] = 0;
		arr2[1] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}