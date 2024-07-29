#pragma once
#include "Traverser.h"
#include "iterator/lists/List.h"

template<typename Item>
class ListTraverser : public Traverser<Item>{
public:
	ListTraverser(List<Item>*);
	bool traverse();
protected:
	virtual bool processItem(const Item&);
};