# Key words

Flyweight, Concrete Flyweight, Unshared Concrete Flyweight, Flyweight Factory, Client



# Brief Introduction

Sometimes we have to create **A LOT OF** objects that are **quite similar but not completely same**, and Prototype Pattern is quite suitable.

However, Prototype Pattern is about creation, then what about storage? That is the job of **Flyweight Pattern.** It is a kind of memory waste to store all there similar objects. For example, we have a text editor. If we write in English, then the most characters we use are probably the 26 alphabets.  In text editor, an alphabet may differ from one to one like this: **a** *a* `a` . They are all alphabet 'a', but styles differ.

Shall we create 3 objects, each of whom contains a character 'a' and the style of it? Of course you can, but that is really **memory-wasting**. After all, the 3 characters are different **merely because of their styles!**

We call 'style' here **OUTER STATE**, and alphabet 'a' **INNER STATE.** Inner state won't change even though the context changes,  and alphabet 'a' will never change if the character is 'a'. However, outer state would change as the context changes, obviously. Generally speaking, inner state is context-unrelated, but outer state is context-related.

In this case, we just need to store outer state, and that will reduce the memory use violately.



# How does it work

**Flyweight** will declare some methods, and **Concrete Flyweight** and **Unshared Concrete Flyweight** will extend it. Concrete Flyweight would implement methods declared by Flyweight, and it would **STORE INNER STATE**. Concrete Flyweight must be shared, while Unshared Concrete Flyweight doesn't have to. The only difference between Concrete Flyweight and Unshared Concrete Flyweight is **whether it needs to be shared compulsorily.**

Then a Client will **STORE OUTER STATE** of Flyweights. It is obvious that Client is context-related, and it is usually a context(For example, a Client in text editor would store different outer states in different position in the article). Ultimately, Flyweight Factory would create and manage Flyweight objects.

Take text editor for example. **a** is a character, we find the **context(Client)** of it, and know its **outer state is BOLD**, and we visit Flyweight Factory to get Flyweight of it to get its **inner state, which is alphabet a.**



# Structure

Flyweight: Glyph

Concrete Flyweight: Character

Unshared Concrete Flyweight: Row, Column

Flyweight Factory: Glyph Factory

Client: Glyph Context



# TIPS

1. Users interact with Flyweight **by Flyweight Factory**. That would decouple the structure.
2. Whether you can **distinguish** OUTER STATE from INNER STATE determines the effectiveness of this Pattern.
3. Flyweight Pattern usually combines with Composite Pattern. **Leaf would be Flyweight**, in this case.
4. It is a good idea to implement **State Pattern objects and Strategy Pattern objects** by Flyweight.