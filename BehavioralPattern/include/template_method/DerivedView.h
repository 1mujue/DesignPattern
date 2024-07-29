#pragma once
#include "View.h"

class DerivedView : public View {
public:
	DerivedView();
	~DerivedView();
protected:
	virtual void setFocus() override;
	virtual void doDisplay() override;
	virtual void resetFocus() override;
};