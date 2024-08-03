# Brief introduction

Sometimes, we want to make a class **ONLY have ONE instance**. This kind of class is usually a **TOOL class,** it is unnecessary to instantiate it a lot of time, and we call that kind of class **Singleton.** But this is too simple. What you should learn is, the Singleton Pattern should focus on **controlling the number of its objects,** so it is possible that it has many objects(usually we do this by **EXTENDING the Singleton**).

You can take singleton as an assembly of many **GLOBAL functions**. Of course, you can declare these global functions and then realize them, but that is not a good hobby, Since you may encounter countless conflicts or errors extremely hard to trace!

How can we make a class Singleton? this is very interesting. Usually, there are 3 steps:

1. Let a class contain a **private static pointer** of itself. It doesn't matter if you use public or protected, but I suggest you use private.
2. Let the constructor method of the class be **protected(sub class exists) or private(sub class doesn't exist)**. Because we don't want to instantiate the class casually, we have to do it. (If we could instantiate everywhere, then it is not Singleton.)  But if you use protected, there will be **"many" Singleton objects**, but these Singleton objects are not completely same: each one of them is still the ONLY object of a Singleton class's sub class.
3. If the pointer create in step 1 is **private or protected**, then you should write a **static public method** (usually called getInstance()) to get the pointer.



# Structure

Singleton

- Singleton: Singleton [Bomb, Enchanted, null] Maze Factory.



# How does it work



# TIPS

1. Please bear in your mind the step to create a Singleton class.
2. In my implementation, it is a little bit different: In Singleton Maze Factory, I create a **REGISTRY** to register ALL kinds of Singletons. In that case, Singleton Maze Factory **may have many objects,** but as a matter of fact, there are only 3 objects, each of them is a singleton of Singleton Maze Factory, Singleton Bomb Maze Factory and Singleton Enchanted Maze Factory.