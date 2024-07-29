#pragma once
#include "connection/EEV.h"

class EquipmentVisitor {
public:
	virtual ~EquipmentVisitor();

	virtual void visitFloppyDisk(FloppyDisk*);
	virtual void visitCard(Card*);
	virtual void visitChassis(Chassis*);
	virtual void visitBus(Bus*);

protected:
	EquipmentVisitor();
};