#include <iostream>
#include "Array.h"
#include "Queue.h"
#include "I_Iterator.h"


int main()
{
	Array a; 
	Queue b;

	a.push(1.2); a.push(2.3); a.push(13.7); a.push(0.5);
	b.push(1.2); b.push(2.3); b.push(13.7); b.push(0.5);

	for (I_Iterator* i = a.begin(); !i->isEqual(a.end()); i->next())
		std::cout << *(double*)i->get() << " ";
	std::cout << std::endl;

	for (I_Iterator* i = b.begin(); !i->isEqual(b.end()); i->next())
		std::cout << *(double*)i->get() << " ";
	std::cout << std::endl;

	return 0;
}