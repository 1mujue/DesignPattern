# Structure

Mediator, Concrete Mediator,Colleague, Concrete Colleague(Colleague Classes)

- Mediator: Dialog Director

- Concrete Mediator: Font Dialog Director

- Colleague: MWidget

- Concrete Colleague: Button, List Box



# Brief introduction

It is a good idea to program **COMPONENT BY COMPONENT,** as it fits the principle of **high aggregation and low coupling**, but then comes a problem: how do they coordinate or communicate with each other?

As a matter of fact, if you have more components, it would be more difficult for them to coordinate or communicate with each other, and the dependency relations would be so complex and messy that it will **OFFSET the advantage** of modular programming.

Mediator Pattern would handle the problem. In this pattern, a Mediator would in response for coordination and communication, and each components would just contain a reference or pointer to the Mediator, they will coordinate or communicate INDIRECTLY by sending the message to Mediator, and then Mediator sends the message to other components.



# How does it work

Mediator would declare an interface aiming to assist the coordination and communication between Colleagues(components), and Concrete Mediator would extend Mediator and implement the interface and know exactly its Colleagues(different Concrete Mediator would contain different Colleague).

Colleague would declare some interfaces that all Concrete Colleagues have in common, and Concrete Colleague would extend Colleague and implement interfaces. 

Attention: it is unnecessary to create a Colleague. You can just have a plenty of Concrete Colleague without similarity as long as you can handle the coordination and communication between then gracefully.



# TIPS

1. Mediator Pattern would decouple Colleague from Colleague, increasing their reusability.
2. Mediator Pattern is a '1 to n' model, 1 is Mediator and n is Colleague, and it would be much easier to stay consistent with the system if one of Colleagues changes since you just need to change something in Mediator, not in ALL Colleagues related with the changed one.
3. Mediator merely focuses on the interaction between Colleagues, so you can understand how they coordinate and communicate more easily by reading the code in Mediator.
4. However, if more Colleagues are included, them the Mediator would be too giant to maintain, which will offset the advantage of the pattern.
5. Facade Pattern and Mediator Pattern is different. The former is an abstraction of a sub system, which is usually **unidirectional**, meaning only Facade could send requests to sub system but sub system can't send requests to Facde. Mediator Pattern is bidirectional, since Colleagues can send message to it, and it can also send message to Colleagues.
6. You can use Observer Pattern to implement the coordination and communication.