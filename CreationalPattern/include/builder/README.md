# Key words

Builder, Concrete Builder, Product, Director



# Introduction

This is a Builder, it will provide us with interfaces to create A PART OF a Product, which is usually a CERTAIN CLASS. 

Why? Well, a concrete builder will extend builder, and then implements SOME of its interfaces. Yes, different concrete builders will probably build different products, and they probably have nothing in same. 

That brings a big problem: since these products are quite different and have different part, the Builder will ALWAYS provide us with interfaces to create ALL these parts! 

Therefore, these interfaces(methods) are usually empty, and the Builder usually will NOT be used. If you want to build a product, then you just need to write a Concrete Builder, and then implement methods that create different parts of the product.

Then you will know that, even though we will probably not instantiate Builder, its methods are not pure virtual methods, since Concrete Builder will probably override SOME of them, and the rest of them would use Builder's default implementations (usually, they are EMPTY).

Director is who use interfaces provided by Builder to create product.



# Structure

Builder: Maze Builder

Concrete Builder: Counting Maze Builder(this builder will calculate the NUMBER of room and door), Standard Maze Builder

Product: Maze(built by Standard Maze Builder), the number of room and door (built by Counting Maze Builder)

Director: Maze Game



# TIPS

1. Abstract Factory is quite similar with Builder, but Builder focuses on create a complex object step by step, while Abstract Factory focuses on create products in many series.
2. Composite is usually created by Builder