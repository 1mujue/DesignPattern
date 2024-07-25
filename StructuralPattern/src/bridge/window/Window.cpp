#include "bridge/window/Window.h"

Window::Window(View* view)
	:m_contents(view) {
	;
}

void Window::drawContents() { ; }

void Window::open() { ; }
void Window::close() { ; }
void Window::iconify() { ; }
void Window::deiconify() { ; }

//handled by windowimpl
void Window::setOrigin(const Point&) { ; }
void Window::setExtent(const Point&) { ; }
void Window::raise() { ; }
void Window::lower() { ; }

void Window::drawLine(const Point&, const Point&) { ; }
void Window::drawRect(const Point&, const Point&) { ; }
void Window::drawPolygon(const Point*, int) { ; }
void Window::drawText(const char*, const Point&) { ; }