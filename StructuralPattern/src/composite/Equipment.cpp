#include "composite/Equipment.h"

Equipment::Equipment(const char* name)
	: m_name(name) {
	;
}
Equipment::~Equipment() { ; }

const char* Equipment::getName() {
	return m_name;
}

Watt Equipment::getPower() { ; }
Currency Equipment::netPrice() { ; }
Currency Equipment::discountPrice() { ; }

void Equipment::add(Equipment*) { ; }
void Equipment::remove(Equipment*) { ; }
Iterator<Equipment*>* Equipment::createIterator() { ; }