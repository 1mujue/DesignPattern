#pragma once
#include "iterator/iterators/Traverser.h"
#include "iterator/concrete_aggregates/List.h"

template<typename Item>
class ListTraverser : public Traverser<Item>{
public:
	ListTraverser(List<Item>*);
	virtual bool traverse();
protected:
	virtual bool processItem(const Item&);
};