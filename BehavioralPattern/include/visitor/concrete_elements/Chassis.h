#pragma once
#include "visitor/elements/Equipment.h"
#include <list>

class Chassis :public Equipment {
public:
	Chassis(const char*);
	virtual ~Chassis();

	virtual double getPower();
	virtual double getNetPrice();
	virtual double getDiscountPrice();

	virtual void accept(EquipmentVisitor*);

	void addEquipment(Equipment*);
	void removeEquipment(Equipment*);
private:
	std::list<Equipment*>* m_list;
};