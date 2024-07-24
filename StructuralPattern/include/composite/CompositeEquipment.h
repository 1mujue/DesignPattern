#pragma once
#include "Equipment.h"
#include <list>

class CompositeEquipment : public Equipment {
private:
	std::list<Equipment*> m_equipment;
protected:
	CompositeEquipment(const char*);
public:
	virtual ~CompositeEquipment();

	virtual Watt getPower();
	virtual Currency netPrice();
	virtual Currency discountPrice();

	virtual void add(Equipment*);
	virtual void remove(Equipment*);
	virtual Iterator<Equipment*>* createIterator();
};