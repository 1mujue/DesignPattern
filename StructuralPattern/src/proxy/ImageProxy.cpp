#include "proxy/ImageProxy.h"

ImageProxy::ImageProxy(const char* filename)
	: m_extent(Point::zero), m_image(0), m_filename(const_cast<char*>(filename)) {
	;
}
ImageProxy::~ImageProxy() { ; }

void ImageProxy::draw(const Point& point) {
	getImage()->draw(point);
}
void ImageProxy::handleMouse(Event& event) {
	getImage()->handleMouse(event);
}

const Point& ImageProxy::getExtent() {
	if (m_extent == Point::zero) {
		m_extent = getImage()->getExtent();
	}
	return m_extent;
}

void ImageProxy::load(std::istream& is) {
	
}
void ImageProxy::save(std::ostream& os) {

}

Image* ImageProxy::getImage() {
	if (m_image == 0) {
		m_image = new Image(m_filename);
	}
	return m_image;
}