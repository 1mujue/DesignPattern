#include "observer/concrete_observers/DigitalClock.h"

DigitalClock::DigitalClock(ClockTimer* clockTimer)
	:m_clockTimer(clockTimer) {
	m_clockTimer->attach(this);
}
DigitalClock::~DigitalClock() { 
	m_clockTimer->detach(this);
}

void DigitalClock::update(Subject* subject) {
	if (subject == m_clockTimer) {
		//do something...k,
		logMessage("Digital clock has observed the change in clock timer...");
	}
}