# Structure

Memento, Originator, Caretaker

- Memento: Constraint Solver Memento
- Originator: Constraint Solver
- Caretaker: Move Command(it is also an instance of Command Pattern.)



# Brief introduction

Sometimes it is necessary to record the inner state of an object, and then store the state **OUT OF THE OBJECT.** Then, if something goes wrong and we want to go back to the right version, then we can set the state of the object to the state stored previously.

However, the state of an object is usually encapsulated,  so we have to design gracefully to avoid destroy the encapsulation, otherwise the inner information would be exposed when using a simple and raw **NOTE BOOK(kidding).** 

Memento Pattern would solve the problem. A Memento would store the state of an object **at a certain moment** as well as not expose details of the object, making its encapsulation intact.



# How does it work

Caretaker is the object to store mementos.

Originator is the object whose state needs to be record. It will have two methods: `createMemento()` to create a Memento object to record the current state, `setMemento(Memento* memento)` to set the current state as the state in memento.

Memento has **TWO INTERFACES:  NARROW INTERFACE AND WIDE INTERFACE.** Caretaker can ONLY use narrow interface, which will probably indicates some **BASIC information** of the memento ITSELF,  while Originator can use wide interface, which can provide with a complete state to Originator.



# TIPS

1. As we've mentioned, Memento Pattern can not only store the state of an object but keeps its encapsulation as well relying on NARROW and WIDE interfaces. You can realize that in C++ by **FRIEND CLASS.**
2. If you use Memento Pattern, then the Originator doesn't have to store the state by itself, it can focus on his **EXCULSIVE duty.**

3. If a state is too large and complex, then you can store the state **INCREMENTALLY.**
4. An Iterator interface can be implemented **BASED ON MEMENTO.**
5. Command Pattern could serve as the Caretaker.