#pragma once
#include "connection/CC.h"
#include "tool/log.h"

class Composition {
public:
	Composition(Compositor*);
	void repair();

private:
	Compositor* m_compositor;
};