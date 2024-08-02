#pragma once
#include "iterator/iterators/Iterator.h"
#include "iterator/concrete_aggregates/List.h"

template<typename Item>
class ListIterator : public Iterator<Item> {
public:
	ListIterator(const List<Item>*);

	virtual void first();
	virtual void next();
	virtual bool isDone() const;
	virtual Item currentItem() const;
private:
	const List<Item>* m_list;
	long m_index;
};