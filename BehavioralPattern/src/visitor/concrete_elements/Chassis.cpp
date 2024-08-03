#include "visitor/concrete_elements/Chassis.h"
#include "visitor/visitors/EquipmentVisitor.h"

Chassis::Chassis(const char* name)
	: Equipment(name), m_list(new std::list<Equipment*>()) {
	;
}
Chassis::~Chassis() { ; }

double Chassis::getPower() {
	logMessage("get power in Chassis...");
	double res = 0.0;
	for (auto it = m_list->begin(); it != m_list->end(); ++it) {
		res += (*it)->getPower();
	}
	return res;
}
double Chassis::getNetPrice() {
	logMessage("get net price in Chassis...");
	double res = 0.0;
	for (auto it = m_list->begin(); it != m_list->end(); ++it) {
		res += (*it)->getNetPrice();
	}
	return res;
}
double Chassis::getDiscountPrice() {
	logMessage("get discount price in Chassis...");
	double res = 0.0;
	for (auto it = m_list->begin(); it != m_list->end(); ++it) {
		res += (*it)->getDiscountPrice();
	}
	return res;
}

void Chassis::accept(EquipmentVisitor* ev) {
	logMessage("accept in Chassis...");
	ev->visitChassis(this);
}

void Chassis::addEquipment(Equipment* e) {
	logMessage("add equipment in Chassis...");
	m_list->push_back(e);
}

void Chassis::removeEquipment(Equipment* e) {
	logMessage("remove equipment in Chassis...");
	m_list->remove(e);
}