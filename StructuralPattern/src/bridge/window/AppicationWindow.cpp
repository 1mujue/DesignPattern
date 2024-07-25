#include "bridge/window/ApplicationWindow.h"

ApplicationWindow::ApplicationWindow(View* view)
	: Window(view) {
	;
}

//handled by window
void ApplicationWindow::drawContents() { ; }

void ApplicationWindow::open() { ; }
void ApplicationWindow::close() { ; }
void ApplicationWindow::iconify() { ; }
void ApplicationWindow::deiconify() { ; }

//handled by windowimpl
void ApplicationWindow::setOrigin(const Point&) { ; }
void ApplicationWindow::setExtent(const Point&) { ; }
void ApplicationWindow::raise() { ; }
void ApplicationWindow::lower() { ; }

void ApplicationWindow::drawLine(const Point&, const Point&) { ; }
void ApplicationWindow::drawRect(const Point&, const Point&) { ; }
void ApplicationWindow::drawPolygon(const Point*, int) { ; }
void ApplicationWindow::drawText(const char*, const Point&) { ; }