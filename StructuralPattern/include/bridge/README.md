# Brief introduction

Usually, we would make an abstract class to declare some methods, and then, we will make many derived classes to implement these methods differently. However,  that **BINDS** the abstract and its implementation.

For example, we have a Shape. It declares a method called `draw()`, and it has many derived classes, such as Circle, Rectangle, Triangle, etc., and they all implement `draw()`. However, that makes a binding. What if you want to change the way to draw a circle? In this case, you have to change the concrete implementation of `draw()` in Circle, and that is really annoying.

However, you may ask: then why can't we make more Circle classes, each of whom contains a different `draw()` method? Well, of course you can do that, but that is really a bad idea because it is **NOT WORTHY** to create so many Circle classes since their`draw()` methods are different. **They are mostly common!**

The key is about the implementation of `draw()`. Then why shouldn't we take the abstract and the implementation **APART?** And that is the thought of Bridge Pattern.

We will declare methods in Abstraction, and "implement" them in Implementor. To be exactly, **Implementor declares methods that methods in Abstraction might call.**  We assume that methods in Abstraction would do nothing but just call methods in Implementor. Refined Abstraction would make an extension of Abstraction, and Concrete Implementor would REALLY implement methods declared in Implementor.



# Structure

Abstraction, Refined Abstraction, Implementor, Concrete Implementor

- Abstraction: Window
- Refined Abstraction: Application Window, Icon Window

- Implementor: Window Impl

- Concrete Implementor: XWindow Impl, PMWindow Impl



# How does it work



# TIPS

1. You could get the right Concrete Implementor by Abstract Factory Pattern. 
1. Please mind the difference between Adapter Pattern and Bridge Pattern. In Adapter Pattern, the Adaptee knows **NOTHING** about Target, and that's why we need an Adapter, whereas in Bridge Pattern, the Implementor knows **WHAT Abstraction declared** in advance.