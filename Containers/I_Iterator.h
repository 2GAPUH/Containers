#pragma once
#include "Array.h"
#include "Queue.h"

enum class Types{ARRAY, QUEUE, EMPTY};
class I_Iterator
{
private:
	void* p = nullptr;
	int pos = 0;
	Types type = Types::EMPTY;

public:
	I_Iterator(Array* p, int pos);
	I_Iterator(Queue* p,int pos);

	void next();
	void prev();
	void* get();
	bool isEqual(I_Iterator* tmp);
};