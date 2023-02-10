#ifndef ITER
#define ITER

#include "iostream"

template <typename T> void iter(T arr[], int lenght, void (*func)(T &x))
{
	int i = 0;

	while (i < lenght)
	{
		func(arr[i]);
		i++;
	}
}

#endif