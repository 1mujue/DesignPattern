#include "iterator/concrete_iterators/ListIterator.h"

template<typename Item>
ListIterator<Item>::ListIterator(const List<Item>* list)
	:m_list(list), m_index(0) {
	;
}

template<typename Item>
void ListIterator<Item>::first() {
	m_index = 0;
}

template<typename Item>
void ListIterator<Item>::next() {
	m_index++;
}

template<typename Item>
bool ListIterator<Item>::isDone() const {
	return m_index >= m_list->count();
}

template<typename Item>
Item ListIterator<Item>::currentItem() const {
	if (isDone()) {
		throw "IteratorOutOfBounds";
	}
	return m_list->get(m_index);
}