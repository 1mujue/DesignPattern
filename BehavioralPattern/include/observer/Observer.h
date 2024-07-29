#pragma once
#include "connection/OS.h"

class Observer {
public:
	virtual ~Observer();
	virtual void update(Subject*) = 0;
protected:
	Observer();
};