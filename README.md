game-engine-architecture
========================

Learning how to design 3D game engines from the book
*Game Engine Architecture* by Jason Gregory.

This repository contains updates and notes as I learn along and
code my own examples. After each chapter, these notes will
be moved to this repo's wiki.


###What is a Game Engine?
A game engine is a software development kit that allows programmers to reuse
and modify the code and resources of a game in a similar genre. Game engines often
hide the underlying communication to hardware and graphics cards, and
provide APIs to abstract away many difficult or common low-level tasks.

[List of Game Engines on Wikipedia](https://en.wikipedia.org/wiki/List_of_game_engines)

###Basic Implementation Outline

####Core Engine and Input
* Core Engine - FPS monitering, updates, rendering loop
* Keyboard Input - Key codes, key press, key hold, key release
* Mouse Input - Mouse codes, mouse click, mouse hold, mouse release
* Resource Loader - Load external data (images, text)

####Mathematical Mechanics
* Vector2 - length, dot product, normalize, rotate, operations
* Vector3 - Similar to Vector2 but with cross product
* Matrix4 - Identity, transpose, multiplication
* Quaternion - Vector4 with imaginary components, conjugate, multiplication

####Rendering Mechanics
* Functions - Clearing screen
* Initialize Graphics - Geometry faces, auto gamma correction, z-depth
* Components - Vertex, Triangle Face, and Mesh

####Rendering Operations
* Shaders and GLSL - Vertex and fragment shaders
* Shader Variables - Uniform, varying, attribute
* Transformation - translation, rotation, scale
