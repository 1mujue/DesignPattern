# Brief introduction

Sometimes we want to add some new methods to the **existent class**, but it would be a little messy if you to it directly by writing new methods in the class. After all, if there are mounts of methods to add, then the class would be quite big that it would be **BORING**(not hard) to read. I believe no one will be interested in a file with more than 1000 lines. Moreover, you have to spend much time **scrolling the screen.**

Therefore, we can put Visitor Pattern into usage. In this case, every time you want to add some new methods, you just need to create a new Concrete Visitor class. Moreover, Unlike most design pattern, in Visitor Pattern, the objects you visit **DON'T NEED TO HAVE SAME INTERFACES**! That would make the whole  thing much easier.



# Structure

Visitor, Concrete Visitor, Element, Concrete Element, Object Structure

- Visitor: defines a **VISIT operation** for **EVERY Concrete Element** in Object Structure. Usually, the name and the parameter of the operation will illustrate which Concrete Element it will visit.
- Concrete Visitor: implements every operations defined in Visitor. Usually a Concrete Visitor represents an **ALGORITHM** to visit different Concrete Element, so it will usually store **context and state** when executing the algorithm.
- Element: defines an accept operation which takes a Visitor as parameter.
- Concrete Element: implements the accept operation defined in Element.
- Object Structure: A structure that can list its elements and provides with an interface for Visitor to visit its element. It can be a composition or a set.



# How does it work

Object Structure would contain many Concrete Element, define an algorithm to traverse them and provide an interface to visit them.

Visitor would define a visit operation as we've mentioned in *Structure* and Concrete Visitor would extend Visitor and implement the operation.

Element would define an accept operation which takes a Visitor as parameter, and Concrete Element would implements it.

Now, when traversing elements in Object Structure, we would use a reference or pointer of Visitor refers or points to an instance of Concrete Visitor, and **pass it as the parameter** when calling **accept operation** of each Concrete Element. Usually, the accept operation would call Concrete Element-related visit operation in  the Concrete Visitor, and then the **Concrete Visitor would visit the Concrete Element.** As a matter of fact, it is **DOUBLE-DISPATCH.**



# TIPS

1. Visitor Pattern makes it MUCH EASIER to add new operations to the existence classes. You don't have to change the class at all!

2. All data structure related to algorithm to visit the Concrete Element can be hidden in Concrete Visitor, which will reduce the responsibility of Concrete Element.

3. Sometimes it will destroy the encapsulation since the Concrete Visitor may need to now the inner state of  the Concrete Element.

4. However, Visitor Pattern can be used **ONLY IF** the existence class **WOULD'T CHANGE A LOT**, which means there is probably **no new class anymore** and the existence class **won't make RECONSTITUTION**.

5. As we've mentioned before, Visitor Pattern is a **DOUBLE-DISPATCH MODEL**. What is that? Here I would show you an example:
   ```C++
   //in .h files:
   
   //(to avoid "including cycle", you should declare the existence of these classes at the beginning of each .h files. I would put them in another .h file and include it at the begining of each .h files.)
   class Base;
   class Derived;
   class AnotherDerived;
   class AbstractVisitor
   class Visitor;
   class AnotherVisitor;
   
   //AbtractVisitor.h
   class AbstractVisitor{
       virtual void visitClass(Base*) = 0;
       virtual void visitClass(Derived*) = 0;
       virtual void visitClass(AnotherDerived*) = 0;
   }
   
   //Visitor.h
   #include "AbstractVisitor.h"
   class Visitor : public AbstractVisitor{
       virtual void visitClass(Base*);
       virtual void visitClass(Derived*);
       virtual void visitClass(AnotherDerived*);
   }
   
   //AnotherVisitor.h
   #include "AbstractVisitor.h"
   class AnotherVisitor : public AbstractVisitor{
       virtual void visitClass(Base*);
       virtual void visitClass(Derived*);
       virtual void visitClass(AnotherDerived*);
   }
   
   //Base.h
   class Base{
       virtual void accept(AbstractVisitor*);
   }
   
   //Derived.h
   #include "Base.h"
   class Derived : public Base{
       virtual void accept(AbstractVisitor*);
   }
   
   //AnotherDerived.h
   #include "Base.h"
   class AnotherDerived : public Base{
       virtual void accept(AbstractVisitor*);
   }
   
   //in .cpp files:
   
   //Visitor.cpp
   void Visitor::visitClass(Base* base){
       std::cout << "visit Base Class in Visitor..." << '\n';
   }
   void Visitor::visitClass(Derived* derived){
       std::cout << "visit Derived Class in Visitor..." << '\n';
   }
   void Visitor::visitClass(AnotherDerived* anotherDerived){
       std::cout << "visit Another Derived Class in Visitor..." << '\n';
   }
   
   //AnotherVisitor.cpp
   void AnotherVisitor::visitClass(Base* base){
       std::cout << "visit Base Class in Another Visitor..." << '\n';
   }
   void AnotherVisitor::visitClass(Derived* derived){
       std::cout << "visit Derived Class in Another Visitor..." << '\n';
   }
   void AnotherVisitor::visitClass(AnotherDerived* anotherDerived){
       std::cout << "visit Another Derived Class in Another Visitor..." << '\n';
   }
   
   //Base.cpp
   void Base::accept(AbstractVisitor* visitor){
       visitor->visitClass(this);
   }
   
   //Derived.cpp
   void Derived::accept(AbstractVisitorr* visitor){
       visitor->visitClass(this);
   }
   
   //AnotherDerived.cpp
   void AnotherDerived::accept(AbstractVisitor* visitor){
       visitor->visitClass(this);
   }
   
   //main.cpp
   #include "Derived.h"
   #include "AnotherDerived.h"
   #include "Visitor.h"
   #include "AnotherVisitor.h"
   
   int main(){
       AbstractVisitor *vistor = new Visitor();
       AbstractVisitor *anotherVisitor = new AnotherVisitor();
       Base* derived = new Derived();
       Base* anotherDerived = new AnotherDerived();
       
       //single-dispatch
       visitor->visitClass(derived);
       visitor->visitClass(anotherDerived);
       //output: 
       //visit Base Class in Visitor...
       //visit Base Class in Visitor...
       
       //double-dispatch
       derived->accept(visitor);
       anotherDerived->accept(visitor);
       derived->accept(anotherVisitor);
       anotherDerived->accept(anotherVisitor);
       //output:
       //visit Derived Class in Visitor...
       //visit AnotherDerived Class in Visitor...
       //visit Derived Class in Another Visitor...
       //visit AnotherDerived Class in Another Visitor...
   }
   ```

   As you can see, the operation to be called in double-dispatch depends on **Concrete Visitor and Concrete Element**. To be more abstract, it depends both on the object **WHO CALL THE OPERATION and the TYPE OF PARAMETER**.

6. You need to consider who should take **the responsibility to traverse elements**. There are 3 options: Object Structure, Iterator and Visitor itself. Usually we use Object Structure to traverse. However, you can also choose Iterator to traverse, and it may be more understandable. Only when you want to implement a **VERY COMPLEX traverse operation** will you let the Concrete Visitor do iteration.