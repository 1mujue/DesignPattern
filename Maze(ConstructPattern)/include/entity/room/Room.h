#pragma once
#include "MapSite.h"

class Room : public MapSite {
protected:
	int m_roomId;
	MapSite* m_sites[4];
public:
	Room(int);

	virtual void Enter();
	virtual void printInfo() {
		logMessage("I am a room.");
	}

	const int getRoomId() const;
	const MapSite* getSite(const Direction&);
	void setSite(const Direction&, MapSite*);
};