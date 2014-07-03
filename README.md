game-engine-architecture
========================

Learning how to design 3D game engines from the book
*Game Engine Architecture* by Jason Gregory.

This repository contains updates and notes as I learn along and
code my own examples. After each chapter, these notes will
be moved to this repo's wiki.


###What is a Game Engine?
A game engine is a software development kit that allows programmers to reuse
and modify code and resources of a game in a similar genre. Game engines often
hide the underlying communication to hardware and graphics cards, and
provide APIs to abstract away many difficult or common low-level tasks.


##Engine Support System

###Startup and Shutdown
We want to startup subsystem in a specific order, and shutdown in the reverse order.
Since constructors and destructors are called in an unpredictable order, a custom system
is required.

One major design pattern is to define a **singleton class** for each subsystem.
However this design does not allow us to destroy objects in a specific order.

The simplest method is to explicitly define startup and shutdown methods for
each singleton class and leave the constructor and destructor empty.
Then in `main()`, startup and shutdown the subsystems in the desired order.


###Block Memory Allocation
It is important to avoid costly calls to dynamic memory allocation as much as possible.
Data that is located in small continous blocks allows the CPU to operate much
more efficient than allocating memory scattered acrossed a range of memory addresses.

The built-in functions `malloc() / new` and `free() / delete` are very slow
because they are general purpose functions that require management overhead
and requires context switching between user mode and kernel mode. One key
rule of thumb:

`keep heap allocations to a minimum, and never allocate dynamic memory in a loop`

####Techniques to Allocate Memory Efficiently
Use a **Stack-based allocator** by allocating a large continous block of memory
using `malloc()`, maintain a pointer to the top of this stack, and everything
below this pointer is considered to be in use. Use marker pointers to set
points where the stack can roll back and freed to a previous point.

A more efficient technique is to use a **double-ended stack** where two pointers
are used to keep track of the top and lower part of the stack. The bottom part
of the stack can be used for level loading; the top of the stack can be
used for more temporary memory that are allocated and freed with each frame.

A **pool allocator** works by allocating memory for matrices where the number
of matrix elements is equaled to the number of bytes required.
