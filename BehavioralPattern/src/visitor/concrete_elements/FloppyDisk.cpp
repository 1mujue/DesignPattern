#include "visitor/concrete_elements/FloppyDisk.h"
#include "visitor/visitors/EquipmentVisitor.h"

FloppyDisk::FloppyDisk(const char* name)
	: Equipment(name) {
	;
}
FloppyDisk::~FloppyDisk() { ; }

double FloppyDisk::getPower() {
	logMessage("get power in Floppy Disk...");
	return 2.0;
}
double FloppyDisk::getNetPrice() {
	logMessage("get net price in Floppy Disk...");
	return 2.0;
}
double FloppyDisk::getDiscountPrice() {
	logMessage("get discount price in Floppy Disk...");
	return 1.9;
}

void FloppyDisk::accept(EquipmentVisitor* ev) {
	logMessage("accept in Floppy Disk...");
	ev->visitFloppyDisk(this);
}