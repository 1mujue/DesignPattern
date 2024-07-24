#pragma once
#include "entity/electric/Watt.h"
#include "entity/electric/Currency.h"
#include "tool/Iterator.h"

class Equipment {
protected:
	Equipment(const char*);
private:
	const char* m_name;
public:
	virtual ~Equipment();

	const char* getName();

	virtual Watt getPower();
	virtual Currency netPrice();
	virtual Currency discountPrice();

	virtual void add(Equipment*);
	virtual void remove(Equipment*);
	virtual Iterator<Equipment*>* createIterator();
};