#include "iterator/traversers/Traverser.h"

template<typename Item>
Traverser<Item>::Traverser(AbstractList<Item>* it)
	:p_it(it) {
	;
}