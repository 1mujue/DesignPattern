#pragma once
#include "state/states/TCPState.h"

class TCPEstablished : public TCPState {
public:
	static TCPState* getInstance();

	virtual void transmit(TCPConnection*, TCPOctetStream*);
	virtual void close(TCPConnection*);
private:
	TCPEstablished();
};