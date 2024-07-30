#pragma once
#include "composite/components/Equipment.h"

class Bus : public Equipment {
public:
	Bus(const char*);
	virtual ~Bus();

	virtual double getPower();
	virtual double netPrice();
	virtual double discountPrice();

	void bus();
};