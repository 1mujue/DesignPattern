# Key words

Command, Concrete Command, Receiver, Invoker, Client



# Brief Introduction

If we work in a team, and different member would design different components, then there is a big problem: Component A would use some methods in Component B, but these components are designed by different people. Then, Component A **don't know which methods to call exactly,** and that is why merging is so difficult, and that's why we need to use Command Pattern. 

Command Pattern would take a request as an **OBJECT**, and that makes it more flexible. First. an object can have its own methods, we can design these methods to make the way to handle a request **EASIER.** Second, we could assign an **EXACT EXECUTOR** in the object, which can also be changed, and that makes the way to handle a request more **VARIED.** Third, an object can be **STORED**, so you don't have to execute the command immediately, which leave you **MORE SPACE AND TIME** to deal with it.



# How does it work

Command would declare an interface to execute the request, and Concrete Commands would extend Command, override the method in Command and contains a reference or a pointer to a  Receiver that handles the request.

Client would create a Concrete Command and select a Receiver, and Invoker would ask the Concrete Command to execute the request.



# Structure

Command: Command

Concrete Command: Open Command, Paste Command, Simple Command

Receiver: Document

Invoker: Command Manager

Client: Application



# TIPS

1. Sometimes a Concrete Command **CAN BE A RECEIVER**, indicating that it can execute the request all by its own, while it can also be a **TRANSITOR**, just call the Receiver to execute the request when Invoker asks to execute it.
2. You may want to **UNDO and REDO** an operation, then you might need a history list to record the command you've executed.
3. You can use **TEMPLATE** in C++ if the Receiver is very simple and you don't need undo or redo, otherwise you have to create a specific Concrete Command for a specific Receiver, that is really annoying.