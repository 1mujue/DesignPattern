#pragma once
#include <iostream>

class Graphic {
public:
	virtual ~Graphic();

	virtual void draw() = 0;
	virtual void handleMouse() = 0;

	virtual void load(std::istream&) = 0;
	virtual void save(std::ostream&) = 0;
protected:
	Graphic();
};