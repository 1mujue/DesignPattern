#include "composite/leafs/Bus.h"
#include "tool/log.h"

Bus::Bus(const char* name)
	:Equipment(name) {
	;
}
Bus::~Bus() { ; }

double Bus::getPower() {
	return 1.5;
}

double Bus::netPrice() {
	return 2.0;
}

double Bus::discountPrice() {
	return 1.8;
}

void Bus::bus() {
	logMessage("in bus...");
}