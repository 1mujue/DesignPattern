# Brief introduction

When we use a text editor, there are a lot of components, and we assume all of them can be **CLICKED,** and then help information would show up.

How to implement this? Well, of course you can use Facade Pattern, but it is a little strange, because all these components are not like a sub system, they are **PARALLEL.** 

To simplify the question, we can take "click" as a **REQUEST** for help information. What kind of help information will be demonstrated may depend on **THE POSITION WE CLICK**, and that is a **CONTEXT**. Therefore, we can just click, and pass in the position, then every components would check if the position is quite close to it position, if it is, then the component should show its help information. That's the thought of Chain Of Responsibility!

With Chain Of Responsibility Pattern, we can **DECOUPLE** the sender and the handler, sender just care about sending requests, and a specific handler would handle those requests fit some conditions. Additionally, you could **ADD, EDIT OR REMOVE** components as you wish! That make's the system more flexible. The only problem is, if the handler that handles a certain request is far behind(or doesn't exist), then it will take too much time to **TRAVERSE ALL** components to find the handler.



# Structure

Handler, Concrete Handler, Client

- Handler: Help Handler

- Concrete Handler: (Based Class)COR Widget;  (Derived Class)Button, Dialog; Application

- Client: Demonstrator



# How does it work

Handler would define a **method to handle requests** and contain a **reference(or pointer) to Handler.** Concrete Handlers would extend Handler, and override the method to handle the requests. If the current Concrete Handler couldn't handle the request, it will **pass the request to the next Concrete Handler(successor)**(referred or pointed by reference or pointer in Handler) until there is no successor or the current Concrete Handler don't want to pass the request.



# TIPS

1. You can use the existent chain as a chain of successor. For example, a chain defined in Composite Pattern(from father to son).
2. The default implementation of handle-request method defined in Handler usually will just pass the request to the successor.
3. It would be a good idea to pass in an Request Object to represent different types of requests.