#include "state/TCPstates/TCPClosed.h"
#include "state/TCPstates/TCPEstablished.h"
#include "state/TCPstates/TCPListen.h"

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