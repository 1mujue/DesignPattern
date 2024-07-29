#pragma once
#include "iterator/iterators/Iterator.h"

template<typename Item>
class AbstractList {
public:
	virtual Iterator<Item>* createIterator() const = 0;
protected:
	long p_capacity;
	static const long DEFAULT_LIST_CAPACITY = 10;
	Item* p_array;
};