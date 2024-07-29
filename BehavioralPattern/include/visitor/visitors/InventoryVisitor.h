#pragma once
#include "EquipmentVisitor.h"

class InventoryVisitor :public EquipmentVisitor {
public:
	InventoryVisitor();

	Inventory getTotalInventory();

	virtual void visitFloppyDisk(FloppyDisk*);
	virtual void visitCard(Card*);
	virtual void visitChassis(Chassis*);
	virtual void visitBus(Bus*);

private:
	Inventory m_totalInventory;
};