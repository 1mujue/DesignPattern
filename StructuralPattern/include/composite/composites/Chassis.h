#pragma once
#include "CompositeEquipment.h"

class Chassis : public CompositeEquipment {
public:
	Chassis(const char*);
	virtual ~Chassis();

	virtual double getPower();
	virtual double netPrice();
	virtual double discountPrice();

	virtual void add(Equipment*);
	virtual void remove(Equipment*);
	virtual Iterator<Equipment*>* createIterator();

	void chassis();
};