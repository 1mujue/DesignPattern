#include "strategy/compositors/SimpleCompositor.h"

SimpleCompositor::SimpleCompositor() { ; }

int SimpleCompositor::compose(Coord*, Coord*, Coord*, int, int, int*) {
	return 2;
}