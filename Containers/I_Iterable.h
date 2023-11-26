#pragma once

class I_Iterator;

class I_Iterable
{
	virtual I_Iterator* begin() = 0;
	virtual I_Iterator* end() = 0;
	virtual bool empty() = 0;
	virtual int size() = 0;
};