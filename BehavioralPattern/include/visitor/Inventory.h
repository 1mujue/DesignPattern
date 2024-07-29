#pragma once
#include "connection/EEV.h"

class Inventory {
public:
	Inventory();

	void accumulate(Equipment*);
};