#pragma once
#include "AbstractList.h"

template<typename Item>
class List : public AbstractList<Item>{
public:
	List(long = DEFAULT_LIST_CAPACITY);

	virtual Iterator<Item>* createIterator() const;
	long count() const;
	Item& get(long) const;
};