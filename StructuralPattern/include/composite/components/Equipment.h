#pragma once
#include "tool/Iterator.h"

class Equipment {
public:
	virtual ~Equipment();

	const char* getName();

	virtual double getPower();
	virtual double netPrice();
	virtual double discountPrice();

	virtual void add(Equipment*);
	virtual void remove(Equipment*);
	virtual Iterator<Equipment*>* createIterator();
protected:
	Equipment(const char*);
private:
	const char* m_name;
};