# Key words

Prototype, Concrete Prototype, Client

# Introduction

In Factory Method Pattern, if we want to create a new Concrete Product,we have to create a related Concrete Creator. However, the difference between old and new Concrete Product may be quite **trivial** that it seems **unnecessary** to create a brand new Concrete Creator Class. After all, no one wants to waste time on **rewriting almost same codes** for many times. Additionally, sometimes we already have a **TEMPLATE**, so we may just want to create a new object based on the template.

That is where Prototype Pattern comes from. If a class will be used a lot of time, and instantiate it may be too  time-costing, then you would better use Prototype. A Prototype class would declare an interface to **CLONE** itself, and Concrete Prototype class would extend it and implement the **clone() method.**

However, we often don't want to just get a copy of the original object, we need to make some changes, so an   **initialize() method** is usually required. 

# Structure

Prototype: Door, Wall, Room

Concrete Prototype: [Enchanted, Bomb, null] Door, Wall, Room

Client: Maze Game

# TIPS

1. Prototype Pattern is very **powerful and flexible**, but it is also quite difficult: how to implement clone() method? Shallow or Deep copy? Especially when the object is very complicated, the implementation would also be quite confusing.

2. If you use Prototype Pattern,**MEMORY LEAK** is a problem you should pay attention to. If you have read the code, you will find (take Door as example) something like this: 
   ```C++
   Door::Door(const Door& other)
       :p_room1(other.p_room1), p_room2(other.p_room2),p_isOpen(false){
           ;
       }
   Door* Door::clone(){
       return new Door(*this);
   }
   ```

   What is this doing? Well, in this case, we override a method to instantiate a Door object, this method is **instantiating a new object with a existent object**, the existent object here serves as a  constant reference. And as you can see, when cloning, we return a new Door object based on the current Door object, and it **ALLOCATE** memories on heap! We have to release it after using it(with **delete or delete[]** key words to release memories on heap), otherwise a memory leak would occur.