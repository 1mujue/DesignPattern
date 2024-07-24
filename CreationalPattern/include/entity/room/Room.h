#pragma once
#include "entity/type/MapSite.h"

class Room : public MapSite {
protected:
	int p_roomId;
	MapSite* p_sites[4];
public:
	Room(int);
	Room(const Room&);

	const int getRoomId() const;
	const MapSite* getSite(const Direction&);
	void setSite(const Direction&, MapSite*);

	virtual void enter();
	virtual void printInfo();

	virtual Room* clone();
	void initialize(int);
};