#pragma once
#include "observer/subjects/Subject.h"
#include <atltime.h>

class ClockTimer :public Subject {
public:
	ClockTimer();

	virtual int getHour();
	virtual int getMinute();
	virtual int getSecond();

	void tick();

private:
	CTime m_time;
};