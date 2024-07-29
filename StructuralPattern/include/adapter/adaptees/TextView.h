#pragma once

class TextView {
private: 
	const char* m_content;
public:
	TextView(const char*);

	void getOrigin() const;
	void getExtent() const;
	virtual bool isEmpty() const;
};