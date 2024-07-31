#include "entity/text/BTree.h"
#include "tool/log.h"

void BTree::setFont(Font* font, int index, int span) {
	logMessage("set font at:", ' ');
	logVar(index, ' ');
	logMessage("with span:", ' ');
	logVar(span);

	for (int i = 0; i < span; ++i) {
		if (m_fonts.find(index + i) != m_fonts.end()) {
			m_fonts.find(index + i)->second = font;
		}
		else {
			m_fonts.insert({ index + i, font });
		}
	}
	
}
Font* BTree::getFont(int index) {
	logMessage("get font at:", ' ');
	logVar(index, ' ');
	return m_fonts.find(index)->second;
}
