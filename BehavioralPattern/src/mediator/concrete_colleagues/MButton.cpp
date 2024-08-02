#include "mediator/concrete_colleagues/MButton.h"

MButton::MButton(DialogDirector* dd)
	:MWidget(dd) {
	;
}

void MButton::setText(const char* content) {
	logMessage("set text in button, the text is:", ' ');
	logMessage(content);
	m_content = content;
}

const char* MButton::getText() {
	return m_content;
}

void MButton::handleMouse() {
	logMessage("handle mouse in button...");
	changed();
}