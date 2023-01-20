#ifndef ITER
#define ITER

#include "iostream"

template <typename T> void iter(T arr[], int lenght, void (*func)(const T &x))
{
	int i = 0;

	while (i < lenght)
	{
		func(arr[i]);
		i++;
	}
}

template <typename T> void print(const T &x)
{
	std::cout << x << std::endl;
	return ;
}

#endif