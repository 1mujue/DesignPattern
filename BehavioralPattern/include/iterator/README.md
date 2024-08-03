# Brief introduction

We usually use container. If we write a container such as list, hash_map, vector, etc, we have to think about a question: how to traverse it?

Most people would say, "I just use index or key!" But that is for an easy container. What if a container is much more complicated? Of course, as long as you read the code and know how to implement it, you can always figure out a way to do that. But it is **TIME-WASTING and DIFFICULT!** First, you have to know exactly how it works, which may lead to **UNEXPECTED ERROR** if you misunderstand it; Second, every time when you want to traverse it, you need to write **A BUNCH OF CODE** since the structure is quite complex, and mistakes would probably happen.

That is why you should use Iterator Pattern. It aims to traverse an aggregate WITHOUT exposing its concrete implementation, making it much **safer** and **more understandable**. Meanwhile, you could write many kinds of iterators to traverse differently, and that is quite **flexible.**



# Structure

Aggregate, Concrete Aggregate, Iterator, Concrete Iterator

- Aggregate: Abstract List

- Concrete Aggregate: List

- Iterator: Iterator(external iterator), Traverser(internal iterator)

- Concrete Iterator: List Iterator(external iterator), List Traverser(internal iterator), Iterator Ptr(proxy)



# How does it work

Aggregate is an abstract container, and it declare a **method to return an Iterator**. Iterator would declare methods to visit and traverse Aggregate. Concrete Iterators would extend and implement Iterator, and each Concrete Aggregates would implement the method to return an Iterator and the method would return a Concrete Iterator related to the Concrete Aggregate.



# TIPS

1. In Iterator Pattern, you could create many Concrete Iterator with different traverse algorithm to support different way to traverse a complex Aggregate.
2. Iterator Pattern simplifies the interface of Aggregate.
3. You can create a lot of iterators on the same aggregate and traverse differently.
4. External iterator: user would **CONTROL THE PROCESS** of iteration. Internal iterator: user would provide with an **OPERATION,**  and the internal iterator would iterate automatically and then call the operation to every elements it reaches.
5. The traverse algorithm can also be defined by **Aggregate, not Iterator.** In that case, iterator would be a **CURSOR** that can only illustrate the current position,  and it might have a method called `next()` to move it.
6. As you can see, Iterator and Aggregate are **BINDING**, and that will definitely break the encapsulation of Aggregate. Usually, Iterator would be the **FRIEND CLASS** of Aggregate.
7. Sometimes you need to make you Iterator **ROBUST**, meaning it won't make mistakes when iterating the Aggregate if the Aggregate changed.
8. Iterator Pattern may be used with Composite Pattern.
9. The way we introduce to use Iterator Pattern is **POLYMORPHISM ITREATOR,**  and you need to use Factory Method to create it.
10. Memento Pattern can be used with Iterator Pattern to record the pattern of an iteration.