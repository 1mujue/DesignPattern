#include "composite/CompositeEquipment.h"

CompositeEquipment::CompositeEquipment(const char* name)
	: Equipment(name) {
	;
}

CompositeEquipment::~CompositeEquipment() { ; }

Watt CompositeEquipment::getPower() {
	return 2;
}
Currency CompositeEquipment::netPrice() {
	Iterator<Equipment*>* it = createIterator();
	Currency total = 0;
	for (it->first(); !it->isDone(); it->next()) {
		total.setValue(total.getValue() + it->getCurrentElement()->netPrice().getValue());
	}
	delete it;
	return total;
}
Currency CompositeEquipment::discountPrice() {
	Currency total = netPrice();
	total.setValue(total.getValue() * 0.9);
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