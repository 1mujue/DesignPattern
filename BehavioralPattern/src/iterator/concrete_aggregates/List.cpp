#include "iterator//concrete_aggregates/List.h"

template<typename Item>
List<Item>::List(long capacity) {
	this->p_capacity = capacity;
	this->p_array = new Item[capacity];
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

template<typename Item>
List<Item>::List(const List& other) {
	this->p_capacity = other.p_capacity;
	this->p_array = new Item[this->p_capacity];
	for (int i = 0; i < this->p_capacity; ++i) {
		this->p_array[i] = other.p_array[i];
	}
}

template<typename Item>
List<Item>::~List() { ; }

template<typename Item>
List<Item>& List<Item>::operator=(const List& other) {
	this->p_capacity = other.p_capacity;
	this->p_array = new Item[this->p_capacity];
	for (int i = 0; i < this->p_capacity; ++i) {
		this->p_array[i] = other.p_array[i];
	}
}

template<typename Item>
Item& List<Item>::first() const {
	return get(0);
}

template<typename Item>
Item& List<Item>::Last() const {
	return get(this->p_capacity - 1);
}

template<typename Item>
bool List<Item>::include(const Item& item) const {
	for (int i = 0; i < this->p_capacity; ++i) {
		if (this->p_array[i] == item) {
			return true;
		}
	}
}

//template<typename Item>
//void append(const Item& item) {
//
//}
//
//
//template<typename Item>
//void remove(const Item&);
//
//template<typename Item>
//void removeLast();
//
//template<typename Item>
//void removeFirst();
//
//template<typename Item>
//void removeAll();
//
//
//template<typename Item>
//Item& top() const;
//
//template<typename Item>
//void push(const Item&);
//
//template<typename Item>
//Item& pop();