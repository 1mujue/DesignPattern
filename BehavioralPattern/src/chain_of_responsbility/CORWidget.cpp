#include "chain_of_responsbility/Widget.h"

CORWidget::CORWidget(CORWidget* widget, Topic topic)
	:HelpHandler(widget, topic) {
	m_parent = widget;
}