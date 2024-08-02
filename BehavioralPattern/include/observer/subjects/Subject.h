#pragma once
#include "connection/OS.h"
#include "tool/log.h"
#include <list>

class Subject {
public:
	virtual ~Subject();

	virtual void attach(Observer*);
	virtual void detach(Observer*);
	virtual void notify();
protected:
	Subject();
private:
	std::list<Observer*> m_observers;
};