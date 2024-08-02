#include "observer/subjects/Subject.h"
#include "observer/observers/Observer.h"

Subject::Subject() { ; }
Subject::~Subject() { ; }

void Subject::attach(Observer* o) {
	m_observers.push_back(o);
}
void Subject::detach(Observer* o) {
	m_observers.remove(o);
}

//the most easy way to notify observers.
void Subject::notify() {
	logMessage("notify in subject...");
	for (Observer*& o : m_observers) {
		o->update(this);
	}
}