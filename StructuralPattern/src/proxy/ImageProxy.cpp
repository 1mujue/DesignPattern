#include "proxy/ImageProxy.h"

ImageProxy::ImageProxy(const char* filename)
	: m_image(0), m_filename(const_cast<char*>(filename)) {
	;
}
ImageProxy::~ImageProxy() { ; }

void ImageProxy::draw() {
	getImage()->draw();
}
void ImageProxy::handleMouse() {
	getImage()->handleMouse();
}

void ImageProxy::load(std::istream& is) {
	getImage()->load(is);
}
void ImageProxy::save(std::ostream& os) {
	getImage()->save(os);
}

Image* ImageProxy::getImage() {
	if (m_image == 0) {
		m_image = new Image(m_filename);
	}
	return m_image;
}