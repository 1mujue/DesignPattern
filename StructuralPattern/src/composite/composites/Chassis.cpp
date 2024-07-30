#include "composite/composites/Chassis.h"
#include "tool/log.h"

Chassis::Chassis(const char* name)
	:CompositeEquipment(name) {
	;
}
Chassis::~Chassis() { ; }

double Chassis::getPower() {
	return CompositeEquipment::getPower();
}
double Chassis::netPrice() {
	return CompositeEquipment::netPrice();
}
double Chassis::discountPrice() {
	return CompositeEquipment::discountPrice();
}

void Chassis::add(Equipment* eq) {
	CompositeEquipment::add(eq);
}
void Chassis::remove(Equipment* eq) {
	CompositeEquipment::remove(eq);
}
Iterator<Equipment*>* Chassis::createIterator() {
	return CompositeEquipment::createIterator();
}

void Chassis::chassis() {
	logMessage("in chassis...");
}