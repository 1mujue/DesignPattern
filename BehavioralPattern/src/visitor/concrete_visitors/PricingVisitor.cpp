#include "visitor/concrete_visitors/PricingVisitor.h"
#include "visitor/concrete_elements/Chassis.h"
#include "visitor/concrete_elements/FloppyDisk.h"

PricingVisitor::PricingVisitor() 
	:m_totalPrice(0.0) {
	;
}

PricingVisitor::~PricingVisitor() { ; }

double PricingVisitor::getTotalPrice() {
	logMessage("get total price in Pricing Visitor...");
	return m_totalPrice;
}

void PricingVisitor::visitFloppyDisk(FloppyDisk* disk) {
	logMessage("visit Floppy Disk in Pricing Visitor...");
	m_totalPrice += disk->getNetPrice();
}
void PricingVisitor::visitChassis(Chassis* chassis) {
	logMessage("visit Chassis in Pricing Visitor...");
	m_totalPrice += chassis->getDiscountPrice();
}