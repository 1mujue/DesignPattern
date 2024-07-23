#pragma once
#include "flyweight/entity/BTree.h"
#include "flyweight/entity/Font.h"

class GlyphContext {
private:
	int m_index;
	BTree* m_fonts;
public:
	GlyphContext();
	virtual ~GlyphContext();

	virtual void next(int = 1);
	virtual void insert(int = 1);

	virtual Font* getFont();
	virtual void setFont(Font*, int = 1);
};