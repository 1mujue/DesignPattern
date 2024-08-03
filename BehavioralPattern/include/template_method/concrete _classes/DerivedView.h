#pragma once
#include "template_method/abstract_classes/View.h"

class DerivedView : public View {
public:
	DerivedView();
	~DerivedView();
protected:
	virtual void setFocus() override;
	virtual void doDisplay() override;
	virtual void resetFocus() override;
	virtual void showDerived() override;
};