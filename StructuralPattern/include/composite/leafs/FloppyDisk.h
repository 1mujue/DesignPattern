#pragma once
#include "composite/components/Equipment.h"

class FloppyDisk : public Equipment {
public:
	FloppyDisk(const char*);
	virtual ~FloppyDisk();

	virtual double getPower();
	virtual double netPrice();
	virtual double discountPrice();

	void floppyDisk();
};