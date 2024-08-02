#pragma once
#include "iterator/iterators/Iterator.h"

template<typename Item>
class AbstractList {
public:
	AbstractList();
	virtual ~AbstractList();

	virtual long count() const = 0;
	virtual Item& get(long) const = 0;
	virtual Item& first() const = 0;
	virtual Item& Last() const = 0;
	virtual bool include(const Item&) const = 0;

	virtual Iterator<Item>* createIterator() const = 0;
protected:
	long p_capacity;
	static const long DEFAULT_LIST_CAPACITY = 10;
	Item* p_array;
};