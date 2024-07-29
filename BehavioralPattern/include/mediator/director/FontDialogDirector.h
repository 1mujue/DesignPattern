#pragma once
#include "DialogDirector.h"
#include "mediator/widget/Button.h"
#include "mediator/widget/EntryField.h"
#include "mediator/widget/ListBox.h"

class FontDialogDirector : public DialogDirector {
public:
	FontDialogDirector();
	virtual ~FontDialogDirector();
	virtual void WidgetChanged(MWidget*);

protected:
	virtual void createWidgets();

private:
	Button* m_ok;
	Button* m_cancel;
	ListBox* m_fontList;
	EntryField* m_fontName;
};