#pragma once
#include "iterator/iterators/Iterator.h"
#include "iterator/lists/AbstractList.h"

template<typename Item>
class Traverser {
public:
	virtual bool isDone() = 0;
protected:
	Traverser(AbstractList<Item>*);
	virtual bool processItem(const Item&) = 0;
protected:
	Iterator<Item> p_it;
};