#pragma once
#include "proxy/subjects/Graphic.h"

class Image : public Graphic {
private:
	char* m_filename;
public:
	Image(const char*);
	virtual ~Image();

	virtual void draw();

	virtual void load(std::istream&);
	virtual void save(std::ostream&);
};