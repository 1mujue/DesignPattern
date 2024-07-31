#pragma once
#include "proxy/subjects/Graphic.h"
#include "proxy/real_subjects/Image.h"

class ImageProxy : public Graphic {
public:
	ImageProxy(const char*);
	virtual ~ImageProxy();

	virtual void draw();

	virtual Image* operator->();
	virtual Image& operator*();

	virtual void load(std::istream&);
	virtual void save(std::ostream&);

	void proxy();
private:
	Image* getImage();
	
private:
	Image* m_image;
	char* m_filename;
};