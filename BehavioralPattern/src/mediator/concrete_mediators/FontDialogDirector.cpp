#include "mediator/concrete_mediators/FontDialogDirector.h"

FontDialogDirector::FontDialogDirector()
	:m_ok(nullptr), m_cancel(nullptr), m_fontList(nullptr) {
	;
}

FontDialogDirector::~FontDialogDirector() { ; }

void FontDialogDirector::WidgetChanged(MWidget* widget) {
	if (widget == m_fontList) {
		m_ok->setText(m_fontList->getSelection());
		m_cancel->setText(m_fontList->getSelection());
	}
	else if (widget == m_ok) {
		logMessage("the ok button is clicked...");
	}
	else if (widget == m_cancel) {
		logMessage("the cancel button is clicked...");
	}
}
void FontDialogDirector::createWidgets() {
	m_ok = new MButton(this);
	m_cancel = new MButton(this);
	m_fontList = new ListBox(this);
}