#include "state/TCPConnection.h"
#include "state/TCPstates/TCPState.h"

TCPConnection::TCPConnection()
	:m_state(nullptr) {
	;
}

void TCPConnection::activeOpen() {
	m_state->activeOpen(this);
}
void TCPConnection::passiveOpen() {
	m_state->passiveOpen(this);
}
void TCPConnection::close() {
	m_state->close(this);
}
void TCPConnection::send() {
	m_state->send(this);
}
void TCPConnection::acknowledge() {
	m_state->acknowledge(this);
}
void TCPConnection::synchronize() {
	m_state->synchronize(this);
}

void TCPConnection::processOctet(TCPOctetStream* stream) {
	;
}
void TCPConnection::changeState(TCPState* state) {
	m_state = state;
}