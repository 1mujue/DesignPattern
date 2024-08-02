#include "state/concrete_states/TCPClosed.h"
#include "state/concrete_states/TCPEstablished.h"
#include "state/concrete_states/TCPListen.h"

TCPState* TCPClosed::getInstance() {
	static TCPClosed* tcpClosed = nullptr;
	if (tcpClosed == nullptr) {
		tcpClosed = new TCPClosed();
	}
	return tcpClosed;
}

void TCPClosed::acitveOpen(TCPConnection* connection) {
	changeState(connection, TCPEstablished::getInstance());
}
void TCPClosed::passiveOpen(TCPConnection* connection) {
	changeState(connection, TCPListen::getInstance());
}

TCPClosed::TCPClosed() { ; }