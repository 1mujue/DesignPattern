#include "state/TCPstates/TCPListen.h"
#include "state/TCPstates/TCPEstablished.h"

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