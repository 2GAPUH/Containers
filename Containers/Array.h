#pragma once
#include "I_Iterable.h"

class Array: I_Iterable
{
private: 
	int arrSize = 0;
	double* data = nullptr;

public:
	void push(double tmp);
	void pop();

	bool empty() override;
	int size() override;
	I_Iterator* begin() override;
	I_Iterator* end() override;

	double* getData(int pos);
};

