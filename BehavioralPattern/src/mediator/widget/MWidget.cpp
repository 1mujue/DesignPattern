#include "mediator/widget/MWidget.h"
#include "mediator/director/DialogDirector.h"

MWidget::MWidget(DialogDirector* dd)
	: m_director(dd) {
	;
}

void MWidget::changed() {
	m_director->widgeChanged(this);
}
void MWidget::handleMouse(MouseEvent& me) {

}