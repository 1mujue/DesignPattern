#include "composite/components/Equipment.h"

Equipment::Equipment(const char* name)
	: m_name(name) {
	;
}
Equipment::~Equipment() { ; }

const char* Equipment::getName() {
	return m_name;
}

double Equipment::getPower() { 
	return 0.0; 
}

double Equipment::netPrice() { 
	return 0.0;
}

double Equipment::discountPrice() { 
	return 0.0; 
}

void Equipment::add(Equipment*) { ; }
void Equipment::remove(Equipment*) { ; }
Iterator<Equipment*>* Equipment::createIterator() { return nullptr; }