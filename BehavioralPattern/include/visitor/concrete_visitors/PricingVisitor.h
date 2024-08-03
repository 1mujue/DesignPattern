#pragma once
#include "visitor/visitors/EquipmentVisitor.h"

class PricingVisitor : public EquipmentVisitor{
public:
	PricingVisitor();
	virtual ~PricingVisitor();

	double getTotalPrice();

	virtual void visitFloppyDisk(FloppyDisk*);
	virtual void visitChassis(Chassis*);
private:
	double m_totalPrice;
};