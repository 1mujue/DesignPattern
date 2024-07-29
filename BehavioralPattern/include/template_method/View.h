#pragma once
class View {
public:
	View();
	~View();

	void display();

protected:
	virtual void setFocus();
	virtual void doDisplay();
	virtual void resetFocus();
};