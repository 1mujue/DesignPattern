# Key words

Facade, Subsystem Classes



# Introduction

As the development goes, if you follow the principle, then a lot of sub systems would be created. Usually, we make a sub system since its components are quite similar, or they corporate with each other to finish a specific assignment. 

Naturally, we don't want to visit components of a sub system directly because there might be a lot of them or it is extremely hard for us to understand how these components corporate. Therefore, it is necessary to provide a **UNIFIED INTERFACE** for users to use a sub system, and that is the job of **Facade.**

Additionally, if we use a Facade to represent a sub system, then we will decouple between sub system and users. You could make Facade a based class, and its child classes **represents different sub systems,** and that will make things much easier since we don't have to change something related to users.

However, if you are a developer and want to know more concisely about the sub system, it is allowed to visit its components directly **EVEN THOUGH** we use Facade Pattern.

The pattern is quite simple, and I suggest you read the code more to understand it. I take a probable implementation of a Compile System to illustrate the pattern.



# Structure

Facade: Compiler

Sub System Classes: (Based Class)Code Generator, (Derived Class)RISC Code Generator, Parser, Program Node Builder, Scanner



# TIPS

1. You could use Abstract Factory Pattern to provide an interface that create the object of a sub system without depending on a certain sub system.
2. Usually, Facade follows Singleton Pattern.
3. The difference between Mediator and Facade: Mediator is a 'platform' for each sub system's classes **COMMUNICATE WITH EACH OTHER,** and every sub system's class knows the existence of Mediator, and they will send message by Mediator, while Facade is an interface that makes the sub system **MORE EASY TO USE,**  and sub system's classes probably know nothing about the Facade.