#pragma once
#include "mediator/mediators/DialogDirector.h"
#include "mediator/concrete_colleagues/MButton.h"
#include "mediator/concrete_colleagues/ListBox.h"

class FontDialogDirector : public DialogDirector {
public:
	FontDialogDirector();
	virtual ~FontDialogDirector();
	virtual void WidgetChanged(MWidget*);

protected:
	virtual void createWidgets();

private:
	MButton* m_ok;
	MButton* m_cancel;
	ListBox* m_fontList;
};