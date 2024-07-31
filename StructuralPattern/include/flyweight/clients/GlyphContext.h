#pragma once
#include "entity/text/BTree.h"

class GlyphContext {
private:
	int m_index;
	BTree* m_trees;
public:
	GlyphContext();
	virtual ~GlyphContext();

	virtual void next(int = 1);
	virtual void insert(int = 1);

	virtual void setFont(Font*, int = 1);
	virtual Font* getFont();
};