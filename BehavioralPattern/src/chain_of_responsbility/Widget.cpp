#include "chain_of_responsbility/Widget.h"

Widget::Widget(Widget* widget, Topic topic)
	:HelpHandler(widget, topic) {
	m_parent = widget;
}