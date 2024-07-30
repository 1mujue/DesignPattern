#include "composite/composites/CompositeEquipment.h"

CompositeEquipment::CompositeEquipment(const char* name)
	: Equipment(name) {
	;
}

CompositeEquipment::~CompositeEquipment() { ; }

double CompositeEquipment::getPower() {
	return 2.0;
}
double CompositeEquipment::netPrice() {
	Iterator<Equipment*>* it = createIterator();
	double total = 0;
	for (it->first(); !it->isDone(); it->next()) {
		total += it->getCurrentElement()->netPrice();
	}
	delete it;
	return total;
}
double CompositeEquipment::discountPrice() {
	Iterator<Equipment*>* it = createIterator();
	double total = 0;
	for (it->first(); !it->isDone(); it->next()) {
		total += it->getCurrentElement()->discountPrice();
	}
	delete it;
	return total;
}

void CompositeEquipment::add(Equipment* eq) {
	m_equipment.push_back(eq);
}
void CompositeEquipment::remove(Equipment* eq) {
	m_equipment.remove(eq);
}
Iterator<Equipment*>* CompositeEquipment::createIterator() {
	return nullptr;
}