#pragma once
#include "maze/Maze.h"

/*
* key words: builder, concrete builder, product
* This is a Builder, it will provide us with interfaces to create 
* A PART OF a Product, which is usually a CERTAIN CLASS. 
*
* Why? Well, a concrete builder will extend builder, and then implements
* SOME of its interfaces. Yes, different concrete builders will probably
* build different products, and they probably have nothing same.
* 
* That brings a big problem: since these products are quite different and 
* have different part, the Builder will ALWAYS provide us with interfaces to
* create ALL these parts! 
* 
* Therefore, these interfaces(methods) are usually empty, and the Builder usually
* will NOT be used. If you want to build a product, then you just need to write a 
* Concrete Builder, and then implement methods that create different parts of the product.
*/
class MazeBuilder {
protected:
	MazeBuilder();
public:
	virtual void buildMaze();
	virtual void buildRoom(int);
	virtual void buildDoor(int, int);

	virtual Maze* getMaze();
};