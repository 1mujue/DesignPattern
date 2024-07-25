#include "entity/view/TextView.h"
#include "tool/log.h"
#include <iostream>

TextView::TextView(const char* message)
	: View(),m_content(message) {
	;
}

void TextView::getOrigin(Coord& c1, Coord& c2) const {
	logMessage("Please enter the origin coordinates(x, y):");
	double tx, ty;
	std::cin >> tx >> ty;
	c1.setValue(tx);
	c2.setValue(ty);
}
void TextView::getExtent(Coord& c1, Coord& c2) const {
	logMessage("Please enter the extent coordinates(x, y):");
	double tx, ty;
	std::cin >> tx >> ty;
	c1.setValue(tx);
	c2.setValue(ty);
}
bool TextView::isEmpty() const {
	return m_content == nullptr;
}