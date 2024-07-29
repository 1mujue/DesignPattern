#include "bridge/window/ApplicationWindow.h"
#include "tool/log.h"

ApplicationWindow::ApplicationWindow(WindowImpl* impl)
	:Window(impl) {
	;
}

//handled by windowimpl
void ApplicationWindow::setOrigin() {
	application();
	getWindowImpl()->setOriginImpl();
}

void ApplicationWindow::setExtent() {
	application();
	getWindowImpl()->setExtentImpl();
}

void ApplicationWindow::drawRect() {
	application();
	getWindowImpl()->drawRectImpl();
}

void ApplicationWindow::drawText() {
	application();
	getWindowImpl()->drawTextImpl();
}

void ApplicationWindow::application() {
	logMessage("in application window...");
}