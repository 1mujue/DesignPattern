#include "visitor/object_structures/object_structures.h"
#include "visitor/visitors/EquipmentVisitor.h"
#include "visitor/concrete_visitors/PricingVisitor.h"
#include "visitor/elements/Equipment.h"
#include "visitor/concrete_elements/Chassis.h"
#include "visitor/concrete_elements/FloppyDisk.h"

ObjectStructure::ObjectStructure()
	:m_list(new std::list<Equipment*>()) {
	;
}

ObjectStructure::ObjectStructure() {
	delete m_list;
}

void ObjectStructure::addEquipment(Equipment* e) {
	logMessage("add equipment in object structure...");
	m_list->push_back(e);
}
void ObjectStructure::removeEquipment(Equipment* e) {
	logMessage("remove equipment in object structure...");
	m_list->remove(e);

}
void ObjectStructure::visitEquipment(EquipmentVisitor* ev) {
	logMessage("visit equipment in object structure...");
	for (auto it = m_list->begin(); it != m_list->end(); ++it) {
		(*it)->accept(ev);
	}
}