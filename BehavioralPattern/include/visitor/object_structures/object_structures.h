#pragma once
#include "connection/EEV.h"
#include <list>

class ObjectStructure {
public:
	ObjectStructure();
	virtual ~ObjectStructure();

	void addEquipment(Equipment*);
	void removeEquipment(Equipment*);
	void visitEquipment(EquipmentVisitor*);
private:
	std::list<Equipment*>* m_list;
};