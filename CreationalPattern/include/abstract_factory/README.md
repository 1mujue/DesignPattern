# Key words
Abstract Factory, Concrete Factory, Abstract Product, Concrete Product, Client



# Introduction
An ABSTRACT factory provides with some interfaces (1) to create some products, and each product here is also an ABSTRACT product. 

Then, we can have many CONCRETE factories to EXTEND this abstract factory,  and they will create CONCRETE products(EXTEND abstract product) for us.

HOWEVER, in this example, we ALSO make abstract factory and abstract product CONCRETE. (2)
As you can see in MazeFactory.cpp , our Maze Factory could create Door, Wall, Room,
which indicates Maze Factory ,Door, Wall and Room are also concrete.

Client is who use interfaces provided by abstract factory and abstract product.



# Structure
Abstract Factory: Maze Factory

Concrete Factory: [Bomb, Enchanted, null] Maze Factory

Abstract Product: Door, Wall, Room

Concrete Product: [Bomb, Enchanted, null] Door, Wall, Room

Client: Maze Game.


# TIPS 
1. "interface" is NOT the interface in java here, it just represents a "switch",we pull it, then we will turn on or off the light, but how it happens, we don't care, we just know to pull it.

2. I really don't like it. I don't like make something abstract concrete.

3. Usually we would use Factory Method or Prototype to implement Abstract Factory, whereas a Concrete Factory is usually a Singleton.
