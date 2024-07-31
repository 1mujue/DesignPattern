#include "chain_of_responsibility/concrete_handlers/CORWidget.h"

CORWidget::CORWidget(CORWidget* widget, Topic topic)
	:HelpHandler(widget, topic) {
	m_parent = widget;
}