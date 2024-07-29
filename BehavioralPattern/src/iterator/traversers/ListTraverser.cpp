#include "iterator/traversers/ListTraverser.h"
#include "iterator/iterators/ListIterator.h"

template<typename Item>
ListTraverser<Item>::ListTraverser(List<Item>* list) {
	this->p_it = *(new ListIterator(list));
}

template<typename Item>
bool ListTraverser<Item>::traverse() {
	bool res = false;

	for (this->p_it.first(); !this->p_it.isDone(); this->p_it.next()) {
		res = processItem(this->p_it.currentItem());

		if (res == false) {
			break;
		}
	}

	return res;
}

template<typename Item>
bool ListTraverser<Item>::processItem(const Item& item) {

}