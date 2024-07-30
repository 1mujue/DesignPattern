#include "composite/leafs/FloppyDisk.h"
#include "tool/log.h"

FloppyDisk::FloppyDisk(const char* name)
	: Equipment(name) {
	;
}
FloppyDisk::~FloppyDisk() { ; }

double FloppyDisk::getPower() {
	return 1.0;
}
double FloppyDisk::netPrice() {
	return 1.0;
}
double FloppyDisk::discountPrice() {
	return 0.9;
}

void FloppyDisk::floppyDisk() {
	logMessage("in floppy disk...");
}