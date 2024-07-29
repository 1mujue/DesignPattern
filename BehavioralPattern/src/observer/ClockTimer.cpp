#include "observer/ClockTimer.h"

ClockTimer::ClockTimer() { ; }

int ClockTimer::getHour() { return 1; }
int ClockTimer::getMinute() { return 2; }
int ClockTimer::getSecond() { return 3; }

void ClockTimer::tick() {
	notify();
}