#include "Queue.h"
#include "I_Iterator.h"

void Queue::push(double data)
{
	Data* tmp = new Data;
	tmp->data = data;
	tmp->next = nullptr;

	if (empty())
	{
		head = tmp;
		tail = tmp;
	}
	else
	{
		tail->next = tmp;
		tail = tmp;
	}

	qSize++;
}

void Queue::pop()
{
	if (!empty())
	{
		if (head != tail)
		{
			Data* tmp = head->next;
			delete head;
			head = tmp;
		}
		else
		{
			delete head;
			head = nullptr;
			tail = nullptr;
			qSize = 0;
		}

	}
}

bool Queue::empty()
{
	return !head;
}

int Queue::size()
{
	return qSize;
}

I_Iterator* Queue::begin()
{
	return new I_Iterator(this, 0);
}

I_Iterator* Queue::end()
{
	return new I_Iterator(this, qSize);
}

double* Queue::getData(int index)
{
	if (index >= qSize || index < 0)
		return nullptr;

	Data* tmp = head;
	for (int i = 0; i < qSize; i++, tmp = tmp->next)
		if (index == i)
			return &(tmp->data);
}

