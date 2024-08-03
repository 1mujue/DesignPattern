# brief introduction

Sometimes, we don't know how to instantiate a class in super class, and we have to give the task to its sub class, and that is where factory method pattern comes from.

Product will define interfaces of object created by factory method, and Concrete Product would implements some of them.  

Creator will declare factory method, which will return a Product object. However, you could also just return nothing, making it **EMPTY**, that is reasonable, since Creator is "abstract", it should only make a declaration, but that is **NOT A BIG DEAL**, you needn't to be confused about it. Concrete Creator would override factory method to return a concrete product. 

However, the weakness of this pattern is obvious: if we want to create a new Concrete Product, then we **have to** create a Concrete Creator, which may lead to "Class Explosion".

Moreover, there are two ways to use factory method: 

1. the Creator is completely an **ABSTRACT class,** and **no** implementation of factory method exists, which requires its SUB class to implement it. **This is the way I prefer.**
2. the Creator is a Concrete class, and it has **default implementation** of factory method. That is to say, you could create a Product through Creator directly(Creator is also a Concrete Creator), or write a new Concrete Creator to **OVERRIDE** the factory method, and that is more flexible.

In my realization, I use the **second way,**  trying to be consistent with Abstract Factory.

# Structure

Product, Concrete Product, Creator, Concrete Creator

- Creator: Maze Creator

- Concrete Creator: [Enchanted, Bomb, null] Maze Creator

- Product: Room, Door, Wall

- Concrete Product: [Enchanted, Bomb, null] Door, Wall



# TIPS

1. In C++, the factory method in Creator is a virtual function, and it is usually a **PURE** virtual function.
2. You can use **TEMPLATE** to avoid create too many Concrete Creator. After all, the reason we use factory method is we want to a unified interface, but the instantiation of a certain object has to be **delayed** until we create a sub class of Creator, a Concrete Creator, and TEMPLATE would deal with that problem.
   ```C++
    class Creator{
        virtual Product createObject() = 0;
    }
    
    template<typename T : Product> // T should be the sub class of Product.
    class ConcreteCreator : public Creator{
        virtual Product creatObject();
    }
    
    template<typename T : Product>
    Product ConcreteCreator::creatObject(){
        return *(new T());
    }
   ```

   
