#pragma once
#include "iterator/aggregates/AbstractList.h"

template<typename Item>
class List : public AbstractList<Item>{
public:
	List(long = DEFAULT_LIST_CAPACITY);
	List(const List&);
	~List();
	List& operator=(const List&);

	virtual Iterator<Item>* createIterator() const;
	virtual long count() const;
	virtual Item& get(long) const;
	virtual Item& first() const;
	virtual Item& Last() const;
	virtual bool include(const Item&) const;

	//void append(const Item&);

	//void remove(const Item&);
	//void removeLast();
	//void removeFirst();
	//void removeAll();

	//Item& top() const;
	//void push(const Item&);
	//Item& pop();
};