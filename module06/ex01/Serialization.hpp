#ifndef SERIALIZE
#define SERIALIZE

#include "stdint.h"
#include "iostream"

typedef struct s_data
{
	int a;
	float b;
}	Data;


uintptr_t serialize(Data* ptr);
Data  *deserialize(uintptr_t raw);

#endif