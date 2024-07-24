#include "builder/CountingMazeBuilder.h"

CountingMazeBuilder::CountingMazeBuilder() { 
	m_roomNumber = 0;
	m_doorNumber = 0;
}

void CountingMazeBuilder::buildMaze() {
	; 
}
void CountingMazeBuilder::buildRoom(int) {
	m_roomNumber++;
}
void CountingMazeBuilder::buildDoor(int, int) {
	m_doorNumber++;
}

void CountingMazeBuilder::getCounts(int& rn, int& dn) const {
	rn = m_roomNumber;
	dn = m_doorNumber;
}