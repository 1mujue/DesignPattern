#pragma once
#include "state/states/TCPState.h"

class TCPClosed : public TCPState {
public:
	static TCPState* getInstance();

	virtual void acitveOpen(TCPConnection*);
	virtual void passiveOpen(TCPConnection*);
private:
	TCPClosed();
};