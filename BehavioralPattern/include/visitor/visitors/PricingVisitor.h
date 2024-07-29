#pragma once
#include "EquipmentVisitor.h"

class PricingVisitor : public EquipmentVisitor{
public:
	PricingVisitor();

	Inventory getTotalPrice();

	virtual void visitFloppyDisk(FloppyDisk*);
	virtual void visitCard(Card*);
	virtual void visitChassis(Chassis*);
	virtual void visitBus(Bus*);

private:
	double m_totalPrice;
};