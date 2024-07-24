#pragma once
#include "entity/type/MapSite.h"

class Room : public MapSite {
protected:
	int m_roomId;
	MapSite* m_sites[4];
public:
	Room(int);

	const int getRoomId() const;
	const MapSite* getSite(const Direction&);
	void setSite(const Direction&, MapSite*);

	virtual void enter();
	virtual void printInfo();

	virtual Room* clone();
};