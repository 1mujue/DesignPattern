#pragma once
#include "tool/SingleValue.h"
class Watt : public SingleValue<int>{
public:
	Watt();
	Watt(int);
};