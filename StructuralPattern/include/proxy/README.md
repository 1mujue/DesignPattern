# Brief introduction

Proxy is a representation of something. Of course, it is also a **CONTROLLER.**

If a country wants to communicate with another country will it communicate with all people in that country? Of course no! The communication between leaders will **represent** the communication between countries. You could ask the leader something about his country, he could choose to answer you or not, and that is **CONTROL.**

In programming world, a proxy has more duties:

- Remote Proxy: represents an object in **DIFFERENT ADDRESS SPACES.**
- Virtual Proxy: creates a giant object **ACCORDING TO DEMAND** to avoid creating such a giant object casually, which may be a waste of time and space.
- Protection Proxy: controls **DIFFERENT ACCESS PERMISSION** to an object.
- Smart Reference: executes some auxiliary operations when visiting an object, which includes:
  - Calculates reference times to the object(smart pointer, pp_ref in OS)
  - Loads a lasting object into memory when using it the first time.
  - Locks the object or checks whether it is locked.





# Structure

Subject, Real Subject, Proxy, Client

- Subject: Graphic

- Real Subject: Image

- Proxy: Image Proxy

- Client: Demonstrator



# How does it work

Subject would declare a public interface of Real Subject and Proxy, then **everywhere you can use a Real Subject, you can use a Proxy.**

Real Subject will extend Subject, and you just need to design it as you wish.

Proxy will contains a reference(or pointer) to Real Subject(or Subject), and it will control almost everything about a Real Subject. Depends on different types of Proxy, there are other functions of a Proxy:

- Remote Proxy: sends requests to Real Subject in different address space.
- Virtual Proxy: stores information related to Real Subject**(CACHE)**, and (usually) initialize a Real Subject object **ONLY when you visit it.**
- Protection Proxy: checks ACCESS PERMISSION of a caller.



# TIPS

1. If the interface provided by Subject **is enough to control a Real Subject,** then you **DON'T HAVE TO** create a specific Proxy for a specific Real Subject(which may be a Factory Method Pattern)
2. Adapter Pattern would provide a **DIFFERENT INTERFACE**, while Proxy would provide exactly **SAME INTERFACE** with Real Subject.
3. Decorator Pattern has the **same implementation** with Proxy Pattern, but they have different targets.
4. Remote Proxy's reference(pointer) might be an **ID of another computer**, and Virtual Proxy's reference(pointer) might be a **PATH to a file.**