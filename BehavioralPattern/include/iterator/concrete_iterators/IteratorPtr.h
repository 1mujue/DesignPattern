#pragma once
#include "iterator/iterators/Iterator.h"

//Proxy!
template<typename Item>
class IteratorPtr {
public:
	IteratorPtr(Iterator<Item>* it);
	~IteratorPtr();

	Iterator<Item>* operator->();
	Iterator<Item>& operator*();
private:
	//forbidden copy and assignment of IteratorPtr.
	IteratorPtr(const IteratorPtr&);
	IteratorPtr& operator=(const IteratorPtr&);

private:
	Iterator<Item>* m_it;
};