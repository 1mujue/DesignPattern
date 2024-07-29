#pragma once
#include "Observer.h"
#include "ClockTimer.h"

class DigitalClock : public Observer {
public:
	DigitalClock(ClockTimer*);
	virtual ~DigitalClock();

	virtual void update(Subject*);
private:
	ClockTimer* m_clockTimer;
};