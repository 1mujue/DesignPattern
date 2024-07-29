#include "bridge/window_impl/PMWindowImpl.h"
#include "tool/log.h"

void PMWindowImpl::setOriginImpl() {
	PMWindow();
	logMessage("set origin...");
}

void PMWindowImpl::setExtentImpl() {
	PMWindow();
	logMessage("set extent...");
}

void PMWindowImpl::drawRectImpl() {
	PMWindow();
	logMessage("draw rectangle...");
}

void PMWindowImpl::drawTextImpl() {
	PMWindow();
	logMessage("draw text...");
}

void PMWindowImpl::PMWindow() {
	logMessage("in PMWindow...");
}