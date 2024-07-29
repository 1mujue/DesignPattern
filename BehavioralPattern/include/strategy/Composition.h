#pragma once
#include "connection/CCC.h"

class Composition {
public:
	Composition(Compositor*);
	void repair();

private:
	Compositor* m_compositor;
	Component* m_component;
	int m_componentCount;
	int m_lineWidth;
	int* m_lineBreaks;
	int m_lineCount;
};