#pragma once
#include "command/commands/Command.h"

template<typename Receiver>
class SimpleCommand : public Command {
public:
	//Action here is a function pointer of whom the return value type is void,
	//and no parameter is required. (void dunction_name();)

	//this makes it more flexible. However, you don't have to do it in this way.
	//You could simply create a super class of Reciever(Super Receiver), and when 
	// executing, we always call a specific method in Super Receiver,
	// which can be "changed" by passing in a Receiver(its sub class) and then
	//Polymorphism would happen.
	typedef void (Receiver::*Action)();

	SimpleCommand(Receiver*, Action);

	virtual void execute();
private:
	Action m_action;
	//it is equal to this:
	//void (*m_action)();
	Receiver m_receiver;
};