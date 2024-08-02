#pragma once
#include "state/states/TCPState.h"

class TCPListen : public TCPState {
public:
	static TCPState* getInstance();

	virtual void send(TCPConnection*);
private:
	TCPListen();
};