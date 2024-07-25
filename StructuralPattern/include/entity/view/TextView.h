#pragma once
#include "entity/point/Coord.h"
#include "View.h"

class TextView : public View {
private: 
	const char* m_content;
public:
	TextView(const char*);

	void getOrigin(Coord&, Coord&) const;
	void getExtent(Coord&, Coord&) const;
	virtual bool isEmpty() const;
};