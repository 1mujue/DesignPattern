#pragma once
#include "Graphic.h"
#include "Image.h"

class ImageProxy : public Graphic {
private:
	Image* m_image;
	Point m_extent;
	char* m_filename;
public:
	ImageProxy(const char*);
	virtual ~ImageProxy();

	virtual void draw(const Point&);
	virtual void handleMouse(Event&);

	virtual const Point& getExtent();

	virtual void load(std::istream&);
	virtual void save(std::ostream&);
protected:
	Image* getImage();
};