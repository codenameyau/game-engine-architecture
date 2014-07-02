game-engine-architecture
========================

Learning how to design 3D game engines from the book
*Game Engine Architecture* by Jason Gregory.

This README will contain updates and notes as I learn along and
code my own examples. After each chapter, these notes will
be moved to this repo's wiki.


###What is a Game Engine?
A game engine is a software development kit that allows programmers to reuse
and modify code and resources of a game in a similar genre. Game engines often
hide the underlying communication to hardware and graphics cards, and
provide APIs to abstract away many difficult or common low-level tasks.



##Tools of the Trade

#####Version Control
Version control is a tool that maintains the development history of each file,
and allows programmers to host, share, modify, branch, and revert changes to those
files while working with other programmers.

Open source version control systems include subversion, git, and mercurial.
Professional-grade examples used in the game industry include Preforce and Alienbrain.

#####Integrated Development Environments (IDEs)
IDEs are fancy text editors that provide many useful tools for easier workflows.
Common tools include build automator, debugger, SDK package manager, and test runners.

#####Build Configuration
There are three typical modes used when building and compiling games:

1. **Debug:** a very slow mode where optimizations are turned off, assertions are turned on,
and debugging information is included while running the game.

2. **Release:** a user testable version of the game where optimizations are included,
are debugging and logging information are active.

3. **Production:** is considered the finish product for the public. In production builds,
tests, assertions, and debugging tools are removed, and final optimizations are included
such as code minification, compiler optimizations, and data compression.

#####Profiling Tools
Profiling tools are used to measure the running time of each function and the number of
times each function is called. They are also used to inspect variables, program execution
callstack, memory issues, and event calls.

#####Continuous Integration
Continuous integration software are used to report build and test failures
that occur after updates are merged into the project. They are used to ensure that
integration issues are quickly resolved before adding or modifying additional work
on the merge code.

#####Issue Tracker
Issue trackers are ticketing systems where the team reports and discusses issues,
bugs, tasks, and proposals. They are used to keep track of the development history.

