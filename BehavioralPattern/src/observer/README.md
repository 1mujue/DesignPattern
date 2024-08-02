# Brief introduction

There are many **DEPENDENCY RELATION** when developing. If the depended one changes, the one who depends on it will probably change too, then you have to design a communication method.

For example, there are two classes: A and B. A depends on B. Now, you have to write a method in B, which will **notify A when B changes,** and A(usually) needs a **method to update**. However, that is really horrible. What if there are A1, A2, ..., An and B1, B2, ... , Bm? Do you want to write notify and update function one by one? Then what if B1 depends on A1, A2, A3, ..., Ak, and B1, B2, B3 ..., Bk depends on A1? Therefore, we have to use Observer Pattern to solve the problem.

In Observer Pattern, **subjects**(Class A1, A2, ..., An) and **observers**(class B1, B2, ... , Bm) are **decoupled**. That is, you don't have to write notify and update methods for each pair <Ai, Bj>, you just need to design notify methods in subjects **WITHOUT taking observers into consideration** as well as design update methods in observers **WITHOUT taking subjects into consideration.** Additionally, you don't have to PRESUME how many and what kinds of observers a specific subject will have.

In that case, you can add or delete subjects and observers SEPARATELY, which provides with a lot of convenience.



# Structure

Subject, Concrete Subject, Observer, Concrete Observer

- Subject: the class to be observed. Subject knows its observers, and it declare interfaces to register and delete observers.
- Observer: the class who observes subject(s). It declares an interface to update if subject(s) has changed.
- Concrete Subject: stores states in Concrete Observer. When its state changes, it will send message to all its observers(Concrete Observer).
- Concrete Observer: contains the reference or pointer to Concrete Subject(s). It usually store some related states which should be consistent with states of concrete subject(s). Meanwhile, it will implements the update interface provided by Observer to stay its states in line with states of concrete subject(s).



# How does it work

Subject(usually) just declares interfaces to register and delete observers, but it **DOESN'T know** what these observers are. These observers are those classes **who extend Observer**. Observer declares an interface to update when subjects change, but it also **DOESN'T know** what these subjects are. These subjects are those classes who extend Subject.

Those observers and those subjects are Concrete Observer and Concrete Subject. **(Usually) Only in** those concrete derived classes would store data. Here,  each concrete subjects will store references or pointers to its concrete observers, and each concrete observers will store references or pointers to its concrete subjects.



# TIPS

1. Object and Subject are **ABSTRACT CLASS,** and that helps decouple from Concrete Subject from Concrete Observer.
2. Since an observer **doesn't know** the existence of other observers, if the dependency are not defined critically or developers fail to maintain it, then **WRONG UPDATE** would occur, and it is extremely hard to trace it.
3. You can create a **MAP TABLE** to record relations between a concrete observer and a concrete subject. In this case, you don't have to make concrete subjects and concrete observers contain references or pointers to each other.
4. If a concrete observer observes many **DIFFERENT concrete subjects,** then it would be a good idea to make a judgement about which subject has changed before updating.
5. Who should be responsible for updating? there are two situations:
   1. **Every time** the concrete subject(s) changes, the concrete observer(s) would update. It is more reliable to maintain consistence in this way, but it is really ineffective.
   2. User would decide to change. In this case, many changes would happen, but only when they are all finished(or you can design the strategy) will concrete observer(s) update. You have to do that manually. It is much more effective, but it is not safe.
6. Remember to invalid reference or pointer to a concrete observer if it doesn't observe the concrete subject any more.
7. Be sure the state between concrete subjects and concrete observers is consistent. If a concrete subject notify its observer(s) before it makes all changes, then the state is inconsistent.
8. Two models to know: **Pull Model** and **Push Model**. The former would send ALL changes to its observer(s), while the latter would just notify its observer(s), and it will be observer(s) duty to get details from subject(s).
9. You can register a concrete observer which is **ONLY INTERESTED in some events.**
10. You can design a **Change Manager** to help the coordination between observers and subjects. In this case, Change Manager is a **Mediator.** Usually, it is a **Singleton.**