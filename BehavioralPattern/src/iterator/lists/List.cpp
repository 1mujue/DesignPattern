#include "iterator/lists/List.h"

template<typename Item>
List<Item>::List(long capacity) {
	this->p_capacity = capacity;
	this->p_array = new Item[this->p_capacity];
}

template<typename Item>
Iterator<Item>* List<Item>::createIterator() const {

}

template<typename Item>
long List<Item>::count() const {
	return this->p_capacity;
}

template<typename Item>
Item& List<Item>::get(long index) const {
	return this->p_array[index];
}