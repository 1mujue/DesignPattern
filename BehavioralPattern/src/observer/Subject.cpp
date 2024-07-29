#include "observer/Subject.h"
#include "observer/Observer.h"

Subject::~Subject() { ; }

void Subject::attach(Observer* o) {
	m_observers.push_back(o);
}
void Subject::detach(Observer* o) {
	m_observers.remove(o);
}
void Subject::notify() {
	for (Observer*& o : m_observers) {
		o->update(this);
	}
}