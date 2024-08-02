#include "iterator/concrete_iterators/IteratorPtr.h"

template<typename Item>
IteratorPtr<Item>::IteratorPtr(Iterator<Item>* it)
	:m_it(it) {
	;
}

template<typename Item>
IteratorPtr<Item>::~IteratorPtr() {
	delete m_it;
}

template<typename Item>
Iterator<Item>& IteratorPtr<Item>::operator*() {
	return *m_it;
}

template<typename Item>
Iterator<Item>* IteratorPtr<Item>::operator->() {
	return m_it;
}