#pragma once
#include "composite/components/Equipment.h"
#include <list>

class CompositeEquipment : public Equipment {
public:
	virtual ~CompositeEquipment();

	virtual double getPower();
	virtual double netPrice();
	virtual double discountPrice();

	virtual void add(Equipment*);
	virtual void remove(Equipment*);
	virtual Iterator<Equipment*>* createIterator();
protected:
	CompositeEquipment(const char*);
private:
	std::list<Equipment*> m_equipment;
};