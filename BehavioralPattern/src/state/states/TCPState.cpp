#include "state/contexts/TCPConnection.h"
#include "state/states/TCPState.h"

void TCPState::transmit(TCPConnection*, TCPOctetStream*) { ; }
void TCPState::activeOpen(TCPConnection*) { ; }
void TCPState::passiveOpen(TCPConnection*) { ; }
void TCPState::close(TCPConnection*) { ; }
void TCPState::synchronize(TCPConnection*) { ; }
void TCPState::acknowledge(TCPConnection*) { ; }
void TCPState::send(TCPConnection*) { ; }

void TCPState::changeState(TCPConnection* connection, TCPState* state) {
	connection->changeState(state);
}