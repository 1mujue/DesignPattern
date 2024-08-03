# Brief introduction

Sometimes we want to use an interface, but unfortunately, when we designed the interface, we didn't take that into consideration, so it is **not compatible**. However, what the interface provides with us is exactly what we want, so we have this pattern: Adapter Pattern.

Now, we have a Target(also an interface), and it has some requests. There is also an existent interface that has declared many methods in our need, but it can't coordinate with a specific Target(its sub class). Therefore, we will make this specific Target an Adapter that can use methods provided by Adaptee. Usually, there are two ways: Class and Object.

1. Class way: The Adapter would **public extend** Target and **private extend** Adaptee. That is, we just want Adapter be a sub class of Target, not a sub class of Adaptee. After all, we just want to use Adaptee, **not become a KIND OF** Adaptee!
2. Object way: The Adapter would public extend Target, and **contains a reference(or pointer) to Adaptee.** That is a method called "Object Aggregation", and it will decouple our code(better than inheritance). In this case, we can use methods of Adaptee through that reference(or pointer).

In class way, we can override methods provided by Adaptee. However, we can't use the sub class of Adaptee.

In object way, it is a little complicated, but it is more flexible! We could pass in Adaptee or its sub classes, which means polymorphism is permitted.



# Structure

Target, Adaptee, Adapter, Client

- Target: Shape

- Adaptee: Text Shape

- Adapter: Text Shape Class, Text Shape Object

- Client: Demonstrator



# How does it work



# TIPS

1. **Two-way adapter**: In this case, Target is ALSO an "Adaptee" of Adaptee, and Adaptee is ALSO a "Target" of Target. How can we implement this? Well, we just need to make Adapter extend Target and Adaptee **BOTH PUBLIC**(of course, we can also make Adapter contain references of Target and Adaptee), and that will handle the problem.

2. **Pluggable adapter**: Sometimes, we don't want to adapt **ONLY ONE** Adaptee. If there are a lot of Adaptees, and we want to make our Adapter able to adapt all of them **without CHANGING methods defined in target**, then the Adapter is a **PLUGGABLE ADAPTER.** 
   For example, we want to display TREE structure. There are two adaptees. The first adaptee is based on file system, and the method to get child node is `getSubDirectory()`. The second adaptee is based on inheritance, and the method to get child node is `getDerivedClass()`. We wish our Adapter could match both adaptees. 
   At the very beginning, you should find a **NARROW INTERFACE** of Adaptees. In our case, such a narrow interface should contain two methods: **demonstrate the current node, and get child nodes of the current node.** Then, we could make Adapter a pluggable adapter:

   Make a declaration of methods in narrow interface **in Target**. Adapter would **determine to use which Adpatee**, but we don't need to care about it. For example, if we want to get the child node, we may want to call a method like this in Adapter: `getChildNode()`, but we don't care how to get the child node, `getSubDirectory()` or `getDerivedClass()`, that would be the job of Adapter.