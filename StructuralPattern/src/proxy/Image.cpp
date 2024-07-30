#include "proxy/Image.h"

Image::Image(const char* filename)
	:m_filename(const_cast<char*>(filename)) {
	;
}
Image::~Image() { ; }

void Image::draw() {
	;
}
void Image::handleMouse() {
	;
}

void Image::load(std::istream&) {

}
void Image::save(std::ostream&) {

}