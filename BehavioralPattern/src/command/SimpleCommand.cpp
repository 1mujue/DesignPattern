#include "command/SimpleCommand.h"

template<typename Receiver>
SimpleCommand<Receiver>::SimpleCommand(Receiver* receiver, Action action)
	:m_receiver(receiver), m_action(action) {
	;
}

template<typename Receiver>
void SimpleCommand<Receiver>::execute() {
	(m_receiver->*m_action)();
}