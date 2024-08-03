# Brief introduction

When working in a team, it is quite important to make a standard that everyone obey. The standard is usually some **"thoughts" or "styles"** to do something, for example, a unified code style requires to add space between an operator and expressions if the operator is binary or tertiary operator while NOT add space if the operator is unary operator.

Now, if you need to make a **STANDARD SET OF PROCEDURES** to do something, then you can use Template Method Pattern. In the pattern, you can just **define how to do something,** listing the basic procedures, but how each of these procedures exactly is implemented will be other developers' job, and that helps a lot to make the team **COLSE and COHESIVE.**

Attention, the Template Method Pattern it not something like rules written on paper, it is rules **WRRITEN IN CODE!**



# Structure

Abstract Class: View

Concrete Class: Derived View

- Abstract Class would define some **ABSRACT PRIMITIVE OPERATIONS** which will be implemented in derived classes(Concrete Class). Meanwhile, it will implement a **TEMPLATE METHOD** which will **define the skeleton of an algorithm,** and the method would call many operations including primitive operations, methods in Abstract Class or in other objects.
- Concrete Class would extend Abstract Class and implement primitive operations, But it **CAN'T CHANGE** template method.



# How does it work

As we've mentioned before, you just need to create an Abstract Class and design a template method, some primitive operations and some member methods in Abstract Class, and then create many Concrete Classes to extend Abstract Class and implement those primitive operations. Then, you can use a Abstract Class's pointer points to a Concrete Class object and call template method through it. then those primitive operations would be operations implemented by the Concrete Class.



# TIPS

1. NOT ALL OPERATIONS in template method have to be implemented or overrode in derived class. First, the operation might be the method IN OTHER OBJECT, so you can't implemented or overrode it since it is not a method in based class. Second, some operations are **PRIVATE IN Abstract Class**, you can't override it but hide it in derived class. Third, some operations may have default implementations in Abstract Class(**HOOK OPERATION**), so it is not obliged to override them in Concrete Class.
2. In C++, template method is usually a **NOT VIRTUAL FUNCTION,** and you can make **ALL PRIMITIVE OPERATIONS PROTECTED** to make sure it can be only used in template method and overrode in derived class. Moreover, if you think Concrete Class **MUST OVERRIDE(OR IMPLEMENT)** these operations, then you can make them as **PURE VIRTUAL FUNCTION.** Attention: pure virtual function can also have its implementation.
3. Template Method Pattern usually coordinates with Factory Method Pattern.