#pragma once
#include "iterator/iterators/Iterator.h"
#include "iterator/aggregates/AbstractList.h"
#include "tool/log.h"

template<typename Item>
class Traverser {
protected:
	Traverser(AbstractList<Item>*);
	virtual bool processItem(const Item&) = 0;
	virtual bool traverse() = 0;
protected:
	Iterator<Item> p_it;
};