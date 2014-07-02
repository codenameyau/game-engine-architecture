game-engine-architecture
========================

Learning how to design 3D game engines from the book
*Game Engine Architecture* by Jason Gregory.

This README will contain updates and notes as I learn along and
practice coding my own examples. After each chapter, these notes will
be posted to this repo's wiki.


##Chapter 1 - Introduction

###Structure of Game Development Team

#####Engineers
Design, implement, and test the code that runs the game.
Broken down into *runtime programmers* who work on the engine and
game itself, and *tools programmers* who develop tools for an
easier and more effect workflow. Programmers usually either focus
on a specific niche, such as AI, or work on any overall task.

#####Artists
Produce artistic content including concept art, storyline, music, sound effects,
3D graphic models, textures, sprites, voice acting, and animations.

#####Game Designers
Design and plan the gameplay, levels, and goals of the game itself.
Focuses on player abilities, enemies, puzzles, and user experience.

#####Producers
Involved in scheduling and management of the different sectors of the
team. Often liasons between development team and business aspects such as
marketing, finance, and legal.

#####IT Department
Provide support for tasks such as hardware configuration, debugging, and
dev ops for managing large server clusters.

#####Publishers
Market, manufacture, and distribute game to audiences.


###What is a Game Engine?
A game engine is a software development kit that allows programmers
to reuse and modify aspects of a game in a similar genre. Game engines
hide the underlying communication to hardware and graphics cards, and
provide an API to abstract away many difficult low-level tasks.


###Popular Video Game Genre
* first person shooters (FPS)
* real-time strategy (RTS)
* massively multiplayer online (MMO)
* platformers
* fighting
* racing
* sandbox
* role-playing
* science-fiction
* adventure
* sports
* simulation
* puzzle
* god mode building
* card & board games


###Runtime Engine Architecture
* hardware
* device drivers
* operating system
* SDK and middleware
* data structure and algorithms
* graphics rendering
* collision and physics
* character and object animation
* artificial intelligence
* character and entity models
* platform independence layer
* core system utilities
* resource management
* optimizations
* visual effects
* front-end display
* human interface device controls
* audio and music
* online and networking
* event system and handler
* artificial intelligence
