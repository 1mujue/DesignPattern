# Brief introduction

In real life, how a machine work mainly depend on its state. In different states, it will perform quite different.

Then how to realize that in code? Shall we write a **BUNCH OF member variables** and use the combination of them to represent the state? And then we write a **BUNCH OF if branches** to distinguish one state from others? That is really annoying since the task REPEATS for a thousand of time. Moreover, the **READABILITY** of code will decrease dramatically if so many member variables and if branches exist. Eventually,  you are lying to make **A LOT OF MISTAKES** in this code style.

Therefore, State Pattern is quite necessary. In this case, a state would be **AN OBJECT,** and the object contains not only some related variables, but also some methods that is **BINDING WITH STATE.** These "state objects" have the exactly same interfaces,  so If the state changes, then we just need to change the state object, but we can still use **the same interfaces.** 



# Structure

Context, State, Concrete State

- Context: TCP Connection
- State: TCP State
- Concrete State: TCP Established, TCP Listen, TCP Closed



# How does it work

Context would define(declare) interfaces **users are interested in**, and contains an instance of Concrete State(with State reference or pointer) to illustrate its current state.

State would declare interface(s) that related to the state of Context, and Concrete State would implement interface(s).



# TIPS

1. It would be extremely easy to **EXPRESS and CHANGE** the state with State Pattern.
2. If states doesn't have member variables, you can make them as **Flyweight.**
3. You should figure out who should define the transformation of states. If the rule is relatively **FIXED,** then it would be the **duty of Context.** However, you can also switch state from one to another **IN CONCRETE STATE.** That is much more flexible, but the problem is, concrete states would know each other and that destroy the encapsulation. Of course you can even use **FINITE STATE MACHINE**, but it would be difficult for others to read the code.
4. You can create the state object **when necessary** and **destroy it immediately after using it**, or create all states **in advance** and **never destroy them**. The former way would be more flexible and avoid unnecessary memory allocation, but if the state changes a lot, you should use the latter way.

