#include "Array.h"
#include "I_Iterator.h"
#include <iostream>

void Array::push(double tmp)
{
	if (data != nullptr)
		data = (double*)realloc(data, ++arrSize * sizeof(double));
	else
		data = new double[++arrSize];

	data[arrSize - 1] = tmp;
}

void Array::pop()
{
	if (!empty())
	{
		if (arrSize - 1 > 0)
		{
			data = (double*)realloc(data, --arrSize * sizeof(double));
		}
		else
		{
			delete data;
			data = nullptr;
			arrSize = 0;
		}
	}
}

bool Array::empty()
{
	return !data;
}

int Array::size()
{
	return arrSize;
}

I_Iterator* Array::begin()
{
	return new I_Iterator(this, 0);
}

I_Iterator* Array::end()
{
	return new I_Iterator(this, arrSize);
}

double* Array::getData(int index)
{
	if (index >= 0 && index < arrSize)
		return &(data[index]);
	return nullptr;
}




