#include "proxy/proxies/ImageProxy.h"

ImageProxy::ImageProxy(const char* filename)
	: m_image(0), m_filename(const_cast<char*>(filename)) {
	;
}
ImageProxy::~ImageProxy() { ; }

void ImageProxy::draw() {
	proxy();
	getImage()->draw();
}

void ImageProxy::load(std::istream& is) {
	proxy();
	getImage()->load(is);
}
void ImageProxy::save(std::ostream& os) {
	proxy();
	getImage()->save(os);
}

Image* ImageProxy::getImage() {
	proxy();
	logMessage("get image...");
	if (m_image == 0) {
		m_image = new Image(m_filename);
	}
	return m_image;
}

Image* ImageProxy::operator->() {
	return getImage();
}
Image& ImageProxy::operator*() {
	return *(getImage());
}

void ImageProxy::proxy() {
	logMessage("visit image by image proxy...");
}