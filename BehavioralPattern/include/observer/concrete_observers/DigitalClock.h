#pragma once
#include "observer/observers/Observer.h"
#include "observer/concrete_subjects/ClockTimer.h"

class DigitalClock : public Observer {
public:
	DigitalClock(ClockTimer*);
	virtual ~DigitalClock();

	virtual void update(Subject*);
private:
	ClockTimer* m_clockTimer;
};