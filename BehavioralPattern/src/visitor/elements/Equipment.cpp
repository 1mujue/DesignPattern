#include "visitor/elements/Equipment.h"
#include "visitor/visitors/EquipmentVisitor.h"

Equipment::Equipment(const char* name)
	:m_name(name) {
	;
}
Equipment::~Equipment() { ; }

const char* Equipment::getName() {
	return m_name;
}

double Equipment::getPower() {
	logMessage("get power in Equipment...");
	return 0.0;
}
double Equipment::getNetPrice() {
	logMessage("get net price in Equipment...");
	return 0.0;
}
double Equipment::getDiscountPrice() {
	logMessage("get discout price in Equipment...");
	return 0.0;
}

void Equipment::accept(EquipmentVisitor* ev) {
	logMessage("accept in Equipment(do nothing)...");
}