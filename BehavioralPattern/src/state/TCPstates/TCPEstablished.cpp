#include "state/TCPstates/TCPEstablished.h"
#include "state/TCPstates/TCPListen.h"
#include "state/TCPConnection.h"

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