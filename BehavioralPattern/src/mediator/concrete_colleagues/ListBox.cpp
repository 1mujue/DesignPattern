#include "mediator/concrete_colleagues/ListBox.h"

ListBox::ListBox(DialogDirector* dd)
	:MWidget(dd), m_list(nullptr) {
	;
}

const char* ListBox::getSelection() {
	logMessage("get selection in list box...");
	return "test...";
}
void ListBox::setList(std::list<char*>* list) {
	logMessage("set list in list box...");
	m_list->resize(list->size());
	auto it1 = m_list->begin(), it2 = list->begin();
	while (it2 != list->end()) {
		size_t len = strlen(*it1);
		*it2 = new char[len];
		strcpy_s(*it2, len + 1, *it1);
		it2++;
		it1++;
	}
}
void ListBox::handleMouse() {
	logMessage("handle mouse in list box...");
}