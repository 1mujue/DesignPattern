#include "bridge/window_impl/XWindowImpl.h"
#include "tool/log.h"

void XWindowImpl::setOriginImpl() {
	XWindow();
	logMessage("set origin...");
}

void XWindowImpl::setExtentImpl() {
	XWindow();
	logMessage("set extent...");
}

void XWindowImpl::drawRectImpl() {
	XWindow();
	logMessage("draw rectangle...");
}

void XWindowImpl::drawTextImpl() {
	XWindow();
	logMessage("draw text...");
}

void XWindowImpl::XWindow() {
	logMessage("in XWindow...");
}