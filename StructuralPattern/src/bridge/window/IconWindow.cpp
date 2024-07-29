#include "bridge/window/IconWindow.h"
#include "tool/log.h"

IconWindow::IconWindow(WindowImpl* impl)
	:Window(impl) {
	;
}

//handled by windowimpl
void IconWindow::setOrigin() {
	icon();
	getWindowImpl()->setOriginImpl();
}

void IconWindow::setExtent() {
	icon();
	getWindowImpl()->setExtentImpl();
}

void IconWindow::drawRect() {
	icon();
	getWindowImpl()->drawRectImpl();
}

void IconWindow::drawText() {
	icon();
	getWindowImpl()->drawTextImpl();
}

void IconWindow::icon() {
	logMessage("in icon window...");
}