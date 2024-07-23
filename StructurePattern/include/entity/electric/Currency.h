#pragma once
#include "tool/SingleValue.h"
class Currency : public SingleValue<double>{
public:
	Currency();
	Currency(double);
};