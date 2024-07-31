#pragma once
class Font {
public:
	Font(const char*, int);
private:
	int m_size;
	const char* m_type;
};