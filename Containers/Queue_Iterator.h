#pragma once
#include "Queue.h"
#include "I_Iterator.h"


class Queue_Iterator : I_Iterator
{
private:
	Queue* p = nullptr;
	int pos = 0;

public:
	Queue_Iterator(Queue* p);

	void next() override;
	void prev() override;
	void* get() override;
	bool isEqual(I_Iterator* tmp) override;
};

