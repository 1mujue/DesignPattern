#include "strategy/contexts/Composition.h"
#include "strategy/strategies/Compositor.h"

Composition::Composition(Compositor* compositor)
	:m_compositor(compositor) {
	;
}
void Composition::repair() {
	m_compositor->compose();
}