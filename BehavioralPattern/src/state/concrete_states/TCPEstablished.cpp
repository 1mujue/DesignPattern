#include "state/concrete_states/TCPEstablished.h"
#include "state/concrete_states/TCPListen.h"
#include "state/contexts/TCPConnection.h"

TCPState* TCPEstablished::getInstance() {
	static TCPEstablished* tcpEstablished = nullptr;
	if (tcpEstablished == nullptr) {
		tcpEstablished = new TCPEstablished();
	}
	return tcpEstablished;
}

void TCPEstablished::transmit(TCPConnection* connection, TCPOctetStream* stream) {
	connection->processOctet(stream);
}
void TCPEstablished::close(TCPConnection* connection) {
	changeState(connection, TCPListen::getInstance());
}

TCPEstablished::TCPEstablished() { ; }