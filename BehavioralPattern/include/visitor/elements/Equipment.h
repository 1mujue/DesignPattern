#pragma once
#include "connection/EEV.h"
#include "tool/log.h"

class Equipment {
public:
	virtual ~Equipment();

	const char* getName();

	virtual double getPower();
	virtual double getNetPrice();
	virtual double getDiscountPrice();

	virtual void accept(EquipmentVisitor*);
protected:
	Equipment(const char*);
private:
	const char* m_name;
};