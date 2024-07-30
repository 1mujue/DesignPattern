# Key words

Components, Concrete Components, Decorators, Concrete Decorators



# Introduction

Usually, when we want to add something new to a Class, then we will write a Derived Class which will extend the original Class, and the original Class would become the Based Class. However, the process is **STATIC:** we have done this before the program run. 

That is definitely not enough! We can't write Derived Class one by one if there are too many! That is horrible! In Creational Pattern, we've introduced a pattern called Prototype Pattern, and that pattern could deal with the situation that many Derived Classes are required but they are just different results of **PERMUTATION and COMBINATION.**

Therefore, how to add functions **DYNAMICALLY** is the focus of Decorator Pattern. Since the whole process is dynamic, what we are changing is actually **an OBJECT, not a CLASS**.

The frame of Decorator Pattern is quite similar with Composite Pattern. First, there is a Component that declares some common methods, and some Concrete Components that extend Component and implement these methods. Second, a Decorator would also extend Component. and it will contain a reference or pointer to Component. The most important thing is, the interface of Decorator must be **COMPLETELY SAME** with that in Component, and some Concrete Decorators would extend Decorator. In that case, we just need to use the interface without knowing whether it is a Concrete Component or a Concrete Decorator.

Usually, the implementation in Concrete Decorator would do something unique(related to the type of Concrete Decorator), and would **call methods in Component** before or after it. For example, we could make a Concrete Decorator A(CDA) decorates a Concrete Component A(CCA), and a Concrete Decorator B(CDB) decorates the CDA. Assume they have a method called `show()`.

CDA and CDB both contain **a reference or pointer to a Component,** and we assume that CDB refers(points) to CDA, and CDA refers(points) to CCA. In CDB's `show()`, it would call its Component's(CDA) `show()`, and in CDA's `show()`, it would also call its Component's(CCA) `show()`, and that's it! We decorates CCA with CDA, and decorates CDA with CDB, so we can say we decorate CCA with CDA and CDB!



# Structure

Component: Visual Component

Concrete Component: Concrete Visual Component

Decorator: Decorator

Concrete Decorator: Border Decorator, Scroll Decorator



# TIPS

1. Please bear in your mind that the Decorator's interface must **be CONSISTENT with** the interface in Component.
2. Keep Component as simple as possible. Due to TIPS 1, if a Component is too giant, then the Decorator would also be giant, and that is not a good thing. Usually, we just declare methods in an Abstract Class, and the way to store data would be defined in Derived Class. (This is **STILL SUITABLE** when you are designing an Abstract Class)
3. A Component **DON'T know** it is decorated.
4. If a Component is too giant, you may use **Strategy Pattern.**



