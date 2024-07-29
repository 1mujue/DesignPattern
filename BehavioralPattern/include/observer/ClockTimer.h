#pragma once
#include "Subject.h"

class ClockTimer :public Subject {
public:
	ClockTimer();

	virtual int getHour();
	virtual int getMinute();
	virtual int getSecond();

	void tick();
};