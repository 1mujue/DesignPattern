# Key words

Abstract Expression, Terminal Expression, Not Terminal Expression, Context, Client



# Brief Introduction

The Interpreter Pattern is a little "limited": usually, it is used in **COMPILER,** but it can extend to other situations if you can recognize the basic conditions to use it.

Generally speaking, if a specific problem happens frequently, then it might be a good choice to describe each instances of the problem **AS A SENTENCE IN A SIMPLE LANGUANGE**, and then we can build an **INTERPRETER** which figure out the problem by **INTERPRETING THESE SENTENCES ONE BY ONE.**

Take regular expression for example. It is an expression defines a set of the string to be matched. Since it would be extremely hard if we design an algorithm for each patterns to be matched, we have to find a **general algorithm** to handle the problem, and that's where regular expression comes from.

In Interpreter Pattern, we need to figure out basic **GRAMMARS** of the language, the way to **EXPRESS A SENTENCE** in the language and **HOW TO INTERPRETE** these sentences.

The grammars of regular expression may look like this:

```txt
expression ::= literal | alternation | sequence | repetition | '(' expression ')'
alternation ::= expression '|' expression
sequence ::= expression '&' expression
repetition ::= expression '*'
literal ::= 'a' | 'b' | 'c' | ... {'a' | 'b' | 'c' | ...}*
```

Each grammar would be a **CLASS.**



# How does it work

Abstract Expression would declare an abstract **interpretation method** which will be shared with all nodes in **ABSTRACT SYNTAX TREE.** Terminal Expression and Not Terminal Expression would extend Abstract Expression and implement the interpretation method. 'Terminal' here means whether the expression has **CHILD EXPRESSION.** Terminal Expression would be a LEAF NODE in abstract syntax tree, so it doesn't have child expression, while Not Terminal Expression is a NORMAL NODE in abstract syntax tree, which means it must contain **REFERENCES OR POINTERS** to Abstract Expression.

Context contains some other information(=quite important), and Client will **BUILD OR OFFER** an abstract syntax tree, which consists of Terminal Expression and Not Terminal Expression.



# Structure

Abstract Expression: Boolean Exp

Terminal Expression: Variable Exp, Constant Exp

Not Terminal Expression: Add Exp, Not Exp, Or Exp

Context: context 

Client: Demonstrator



# TIPS

1. If a grammar is so **COMPLEX** that it would be quite annoying to describe it in a class, or you want to be **MORE EFFECTIVE**, then you **SHOULDN'T** use Interpreter Pattern.
2. It would be much more **FLEXIABLE** to **change or extend the grammar** or add new way to **interpret the expression** if you use Interpreter Pattern.
3. Abstract Syntax Tree can be an instance of **Composite Pattern,** Not Terminal Expression can be an instance of **Flyweight Pattern**(since its outer state can be given by father node). To traverse the Abstract Syntax Tree, you can use **Iterator Pattern**. You can use **Visitor Pattern to be the interpreter.**

