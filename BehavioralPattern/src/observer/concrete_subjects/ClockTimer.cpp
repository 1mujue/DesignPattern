#include "observer/concrete_subjects/ClockTimer.h"

ClockTimer::ClockTimer() { ; }

int ClockTimer::getHour() {
	return m_time.GetHour();
}
int ClockTimer::getMinute() {
	return m_time.GetMinute();
}
int ClockTimer::getSecond() { 
	return m_time.GetSecond();
}

void ClockTimer::tick() {
	logMessage("tick in clock timer...");
	notify();
}