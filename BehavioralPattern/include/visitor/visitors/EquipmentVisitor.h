#pragma once
#include "connection/EEV.h"
#include "tool/log.h"

class EquipmentVisitor {
public:
	virtual ~EquipmentVisitor();

	virtual void visitFloppyDisk(FloppyDisk*);
	virtual void visitChassis(Chassis*);

protected:
	EquipmentVisitor();
};