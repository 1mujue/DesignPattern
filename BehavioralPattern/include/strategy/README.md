# Brief introduction

In OOP, if we want to extend or change methods, then usually we will create a based class which may declare or provide with default implementation of a method(s),  and then create many derived classes that extend based class and override the method(s). 

However, that brings a problem: we create so many classes **MERELY BECAUSE THEY HAVE DIFFERENT WAY TO IMPLEMENT METHOD(S).** If the based class is very giant, then it will be really time-consuming and unnecessary.

Additionally, if you want to use different implementations of a method, **A BUNCH OF IF BRANCHES** will appear again, making your code much harder to read.

Moreover, if you don't use inheritance, then it would be even worse: if you write the method directly in another method(that means you don't make the method as a member function in class, it is just a composition of many code lines), which is **HARD-CODED**, and then it would be very very very EXTREMELY HARD to extend or change the method. 

Therefore, Strategy Pattern is of great significance. It define a series of algorithms(methods) ,then encapsulates them in different "strategy classes" and make them **replaceable.** In that case, you can extend or change the method easily just by editing one class (or more, if more methods are included), and you can change the method at runtime. That is cool.



# Structure

Strategy, Concrete Strategy, Context

- Strategy: Compositor
- Concrete Strategy: Array Compositor, Simple Compositor, TeX Compositor
- Context: Composition



# How does it work

Strategy define interfaces that all algorithms support. Context would use these interfaces to call a Concrete Strategy's algorithm.

Concrete Strategy would implement interfaces defined in Strategy.

Context would contain a Concrete Strategy object(with reference or pointer of Strategy). Usually it will define some specific interfaces for Strategy visit its data.



# TIPS

1. Strategy Pattern make it more flexible and easy to change algorithm that can take the place of inheritance as well as eliminate a lot of if branches.
2. However, users must know different types of Concrete Strategy to use it.
3. Different strategies usually need different information. If Context pass ALL data to Strategy, it is unnecessary. From my perspective, I would declare Strategy as **FRIEND CLASS** and define some interfaces in Context that are **used ONLY BY Strategy.**  Of course, you can take **Context ITSELF AS A PARAMETER** and pass it to Strategy.
4. You can reduce the cost by applying Flyweight Pattern to Concrete Strategy if possible.
5. Sometimes Strategy could have **TEMPLATE PARAMETER** if you can choose Strategy at compile time and you don't need to change it at running time.