#include "composite/FloppyDisk.h"

FloppyDisk::FloppyDisk(const char* name)
	: Equipment(name) {
	;
}
FloppyDisk::~FloppyDisk() { ; }

Watt FloppyDisk::getPower() {
	return 1;
}
Currency FloppyDisk::netPrice() {
	return 1.0;
}
Currency FloppyDisk::discountPrice() {
	return 0.9;
}