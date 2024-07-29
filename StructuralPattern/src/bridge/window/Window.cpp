#include "bridge/window/Window.h"

Window::Window(WindowImpl* impl)
	:m_impl(impl) {
	;
}

void Window::setOrigin() {
	m_impl->setOriginImpl();
}

void Window::setExtent() {
	m_impl->setExtentImpl();
}

void Window::drawRect() {
	m_impl->drawRectImpl();
}

void Window::drawText() {
	m_impl->drawTextImpl();
}

WindowImpl* Window::getWindowImpl() {
	return m_impl;
}

