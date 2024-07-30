#pragma once
#include "Graphic.h"
#include "Image.h"

class ImageProxy : public Graphic {
private:
	Image* m_image;
	char* m_filename;
public:
	ImageProxy(const char*);
	virtual ~ImageProxy();

	virtual void draw();
	virtual void handleMouse();

	virtual void load(std::istream&);
	virtual void save(std::ostream&);
protected:
	Image* getImage();
};