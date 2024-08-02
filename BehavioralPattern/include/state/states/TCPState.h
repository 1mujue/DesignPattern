#pragma once
#include "connection/TCP.h"

class TCPState {
public:
	virtual void transmit(TCPConnection*, TCPOctetStream*);
	virtual void activeOpen(TCPConnection*);
	virtual void passiveOpen(TCPConnection*);
	virtual void close(TCPConnection*);
	virtual void synchronize(TCPConnection*);
	virtual void acknowledge(TCPConnection*);
	virtual void send(TCPConnection*);
protected:
	void changeState(TCPConnection*, TCPState*);
};