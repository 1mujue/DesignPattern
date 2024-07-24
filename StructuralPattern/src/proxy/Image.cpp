#include "proxy/Image.h"

Image::Image(const char* filename)
	:m_filename(const_cast<char*>(filename)) {
	;
}
Image::~Image() { ; }

void Image::draw(const Point& point) {
	point.draw();
}
void Image::handleMouse(Event& event) {
	;
}

const Point& Image::getExtent() {
	return Point::zero;
}

void Image::load(std::istream&) {

}
void Image::save(std::ostream&) {

}