#pragma once
#include "Equipment.h"

class FloppyDisk : public Equipment {
public:
	FloppyDisk(const char*);
	virtual ~FloppyDisk();

	virtual Watt getPower();
	virtual Currency netPrice();
	virtual Currency discountPrice();
};