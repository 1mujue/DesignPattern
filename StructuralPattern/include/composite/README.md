# Brief introduction

As we mentioned in Adapter Pattern, sometimes we want to illustrate a **TREE-LIKE** structure, then how to realize a tree-like structure? In file system, we have directories and normal files. To be more abstract, we have **CONTAINER and COMPONENT.** 

Here comes the problem: shall we create a container **specifically?** I mean, shall we create a special Container Class that is not related with Component Class? That is really funny. Of course you can implement your own containers, as C++ and Java did, you can realize your List, HashMap, etc. 

However, that will bring a big problem. In client view, they don't want to **DISTINGUISH Container from Component!** "Everything is a file", as the saying goes in Linux, it would be a better choice to NOT make Container apart from Component,  and that's is the key thought of Composite Pattern.

In Composite Pattern, we will create a Component, which,  literally, makes a declaration of components' methods. Leaf and Composite would extend Component. Leaf doesn't have child components, while Composite does. Therefore, in Composite, it will contain references or pointers to **Component**! That makes sense, since Composite may have many child components, it is necessary to record them.

Of course, Composite also has `add()` and `remove()` methods to **manage its child components.**



# Structure

Component, Leaf, Composite, Client

- Component: Equipment

- Composite: (Based Class)Composite Equipment, (Derived Class)Chassis

- Leaf: Bus, Floppy Disk

- Client: Demonstrator



# How does it work



# TIPS

1. Component usually would declare **ALL(at least most)** methods in Leaf and Composite, that means, it will declare `add()` and `remove()`. However, it doesn't make sense for a Leaf to have these two methods since they don't have child components. 
   Therefore, we have to make a choice between **SECURITY AND TRANSPARENT.** If we declare `add()` and  `remove()` in Component, then we usually would make a default implementation, which is usually **EMPTY**. Only Composite would override it. However, if something goes wrong(for example, we forget to make an empty implementation, or make a wrong implementation), then the process may do something out of expectation, such as add a child component of a Leaf.
   If we declare `add()` and `remove()` in Composite, that is much  securer, but that distinguishes Composite from Component, which is not transparent.
2. Sometimes you may want to contain a father reference in case to traverse more effective. Usually, Component would contain a father reference.
3. You can use Flyweight Pattern to share Component.