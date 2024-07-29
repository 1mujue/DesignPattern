#pragma once
#include "connection/TCP.h"

class TCPConnection {
public:
	TCPConnection();

	void activeOpen();
	void passiveOpen();
	void close();
	void send();
	void acknowledge();
	void synchronize();

	void processOctet(TCPOctetStream*);
private:
	friend class TCPState;
	void changeState(TCPState*);
private:
	TCPState* m_state;
};