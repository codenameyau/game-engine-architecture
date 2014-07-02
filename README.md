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



##Mathematics
A game is a mathematical model of a virtual world simulated in real-time.
Nearly all of applications of mathematics are used including algebra, geometry,
trigonometry, calculus, and linear algebra. Linear algebra is the most heavily
used underlying concept especially with the use of vectors and matrices.

###Points and Vectors
In the 3D-Cartesian coordinate system, a point 'P' has a position
called (x, y, z). The x-axis is defined as left to right on the horizontal axis;
the y-axis is defined as bottom to top as the vertical axis; and the z-axis
is defined as out to in, or further to closer, as the depth axis.

A vector is a line that has a magnitude and a direction. The magnitude is the
length of the vector, and the direction is where the vector points to from
head to tail. A scalor, or regular number, on the other hand just has a magnitude.
A triplet of scalors, e.g. (1, 2, 3), can be interpreted as a point or vector, which
both usually refered to as a "vector" in game development and computer graphics.

####Unit and Normal Vectors
The unit vectors are define to correspond to each directional axis with a length of 1.
Vector **i** has the value (1, 0, 0); vector **j** has the value (0, 1, 0); and vector
**k** has the value (0, 0, 1). All of these vectors point in the positive direction.

Any point or vector can be expressed as a sum of scalors multiplied by each
of the unit vectors. EX. **(5, 3, -2)** -> **5i + 3j -2k**.

The normal vector of a vector is the component of each vector divided by the length
of the vector. Each component should be less than or equal to 1. EX:

* 'V' = (12, 32, 6)
* vector length 'L' = sqrt(12^2, 32^2, 6^2)
* normal 'Vn' = (12/L, 32/L, 6/L)

**Use sqare magnitudes rather than square roots when possible**


####Vector Operations

* Scalor multiplication
* Vector additional or subtraction
* Vector multiplication (two types): dot and cross product
* Vector projection
* Dot product tests (collinear - test if same line as normal vectors)
* Cross product

#####Dot Product
Given two vectors **A** and **B**, (**A** . **B**) = (ax bx) + (ay by) + (az bz).
Can also be written as: |**A**| |**B**| cos(theta), where theta is the angle between
the two vectors.

#####Applications of Dot Product
Lots of applications. Test whether an enemy is behind or infront of the player.
Find the height of a point above or below a plane: h = **v** . **n** = (**P** - **Q**) . n

#####Cross Product
Yields a vector that is perpendicular to the two vectors being multiplied.
**A** x **B** = [(ay bz - az by), (az bx - ax bz), (ax by - ay bx)]

The magnitude of a cross product is |**A** x **B**| = |**A**| |**B**| sin(theta).
It can be used to determine the area of the parallelogram for A and B.
Direction is the direction of your thumb in right hand rule.


####Linear Interpolation of Points and Vectors
