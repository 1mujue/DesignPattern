#include "visitor/visitors/EquipmentVisitor.h"

EquipmentVisitor::EquipmentVisitor() { ; }
EquipmentVisitor::~EquipmentVisitor() { ; }

void EquipmentVisitor::visitFloppyDisk(FloppyDisk*) {
	logMessage("visit Floppy Disk in Equipment Visitor...");
}
void EquipmentVisitor::visitChassis(Chassis*) {
	logMessage("visit Chassis Disk in Equipment Visitor...");
}

