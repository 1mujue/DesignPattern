#include "bridge/window/IconWindow.h"

IconWindow::IconWindow(View* view)
	: Window(view) {
	;
}

void IconWindow::drawContents() { ; }

void IconWindow::open() { ; }
void IconWindow::close() { ; }
void IconWindow::iconify() { ; }
void IconWindow::deiconify() { ; }

//handled by windowimpl
void IconWindow::setOrigin(const Point&) { ; }
void IconWindow::setExtent(const Point&) { ; }
void IconWindow::raise() { ; }
void IconWindow::lower() { ; }

void IconWindow::drawLine(const Point&, const Point&) { ; }
void IconWindow::drawRect(const Point&, const Point&) { ; }
void IconWindow::drawPolygon(const Point*, int) { ; }
void IconWindow::drawText(const char*, const Point&) { ; }