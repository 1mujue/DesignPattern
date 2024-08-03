#pragma once
#include "visitor/elements/Equipment.h"

class FloppyDisk :public Equipment {
public:
	FloppyDisk(const char*);
	virtual ~FloppyDisk();

	virtual double getPower();
	virtual double getNetPrice();
	virtual double getDiscountPrice();

	virtual void accept(EquipmentVisitor*);
};