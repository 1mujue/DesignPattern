#include "mediator/director/FontDialogDirector.h"

FontDialogDirector::FontDialogDirector() { ; }

FontDialogDirector::~FontDialogDirector() { ; }

void FontDialogDirector::WidgetChanged(MWidget* widget) {
	if (widget == m_fontList) {
		m_fontName->setText(m_fontList->getSelection());
	}
	else if (widget == m_ok) {
		//apply
	}
	else if (widget == m_cancel) {
		//cancel
	}
}
void FontDialogDirector::createWidgets() {
	m_ok = new Button(this);
	m_cancel = new Button(this);
	m_fontList = new ListBox(this);
	m_fontName = new EntryField(this);
}