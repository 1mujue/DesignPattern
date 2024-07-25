#include "composite/Equipment.h"

Equipment::Equipment(const char* name)
	: m_name(name) {
	;
}
Equipment::~Equipment() { ; }

const char* Equipment::getName() {
	return m_name;
}

Watt Equipment::getPower() { return *(new Watt(1)); }
Currency Equipment::netPrice() { return *(new Currency(1.0)); }
Currency Equipment::discountPrice() { return *(new Currency(1.0)); }

void Equipment::add(Equipment*) { ; }
void Equipment::remove(Equipment*) { ; }
Iterator<Equipment*>* Equipment::createIterator() { return nullptr; }