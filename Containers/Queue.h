#pragma once
#include "I_Iterable.h"

class Queue : public I_Iterable
{
private:
	struct Data
	{
		double data;
		Data* next;
	};

	Data* head = nullptr;
	Data* tail = nullptr;
	int qSize = 0;

public:
	void push(double data);
	void pop();

	bool empty() override;
	int size() override;
	I_Iterator* begin() override;
	I_Iterator* end() override;

	double* getData(int index);
};

