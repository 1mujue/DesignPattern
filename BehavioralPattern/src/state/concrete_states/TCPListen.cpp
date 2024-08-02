#include "state/concrete_states/TCPListen.h"
#include "state/concrete_states/TCPEstablished.h"

TCPState* TCPListen::getInstance() {
	static TCPListen* tcpListen = nullptr;
	if (tcpListen == nullptr) {
		tcpListen = new TCPListen();
	}
	return tcpListen;
}

void TCPListen::send(TCPConnection* connection) {
	changeState(connection, TCPEstablished::getInstance());
}

TCPListen::TCPListen() { ; }