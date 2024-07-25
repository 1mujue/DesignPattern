#pragma once
class Document {
private:
	const char* m_content;
public:
	Document(const char*);

	const char* getContent();
	void setContent(const char*);
	void open();
	void execute();
};