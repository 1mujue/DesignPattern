#include "proxy/real_subjects/Image.h"

Image::Image(const char* filename)
	:m_filename(const_cast<char*>(filename)) {
	;
}
Image::~Image() { ; }

void Image::draw() {
	logMessage("draw an image...");
}

void Image::load(std::istream&) {
	logMessage("load an image...");
}
void Image::save(std::ostream&) {
	logMessage("save an image...");
}