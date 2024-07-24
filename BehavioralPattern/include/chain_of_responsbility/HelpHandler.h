#pragma once
typedef int Topic;
const Topic NO_HELP_TOPIC = -1;

class HelpHandler {
private:
	HelpHandler* m_successor;
	Topic m_topic;
public:
	HelpHandler(HelpHandler* = 0, Topic = NO_HELP_TOPIC);

	virtual bool hasHelp();
	virtual void setHandler(HelpHandler*, Topic);
	virtual void handleHelp();
};