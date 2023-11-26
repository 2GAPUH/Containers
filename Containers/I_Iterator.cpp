#include "I_Iterator.h"



I_Iterator::I_Iterator(Array* p, int pos)
{
	this->p = p;
	this->pos = pos;
	type = Types::ARRAY;
}

I_Iterator::I_Iterator(Queue* p, int pos)
{
	this->p = p;
	this->pos = pos;
	type = Types::QUEUE;
}

void I_Iterator::next()
{
	pos++;
}

void I_Iterator::prev()
{
	pos--;
}

void* I_Iterator::get()
{
	switch (type)
	{
		case Types::ARRAY:
			return ((Array*)p)->getData(pos);
			break;

		case Types::QUEUE:
			return ((Queue*)p)->getData(pos);
			break;

		case Types::EMPTY:
			return nullptr;
			break;
	}
}

bool I_Iterator::isEqual(I_Iterator* tmp)
{
	return (p == tmp->p && pos == tmp->pos);
}


