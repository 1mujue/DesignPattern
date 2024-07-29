#include "strategy/Composition.h"
#include "strategy/compositors/Compositor.h"
#include "entity/Coord.h"

Composition::Composition(Compositor* compositor)
	:m_compositor(compositor) {
	;
}
void Composition::repair() {
	Coord* natural = nullptr;
	Coord* stretchability = nullptr;
	Coord* shrinkability = nullptr;
	int componentCount = 0;
	int* breaks = nullptr;
	int breakCount = 0;

	breakCount = m_compositor->compose(natural, stretchability, shrinkability,
		componentCount, m_lineWidth, breaks);
}