#pragma once
class VisualComponent {
public:
	VisualComponent();

	virtual void draw();
	virtual void resize();
};