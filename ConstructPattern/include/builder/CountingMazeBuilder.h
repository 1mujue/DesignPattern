#pragma once
#include "MazeBuilder.h"

class CountingMazeBuilder : public MazeBuilder {
private:
	int m_doorNumber;
	int m_roomNumber;
public:
	CountingMazeBuilder();

	virtual void buildMaze();
	virtual void buildRoom(int);
	virtual void buildDoor(int, int);
	
	void getCounts(int&, int&) const;
};