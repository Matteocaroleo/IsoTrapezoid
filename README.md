# IsoTrapezoid
3 geometric shapes to be utilized
## A graphical user-interface for drawing 3 different polygons
This program was written for an excercise given in class. It allows the creation of isotrapezoids, rhombuses and rectangles 

## Overview
The program utilizes features that are characteristic of C++: classes, objects and polymorphism, as well as virtual functions and inheritance.
It also uses Doxygen comments for documentation.

## How to use
It is given a main for testing the classes. However, **it requires the operator ">>" to be defined** in the subclasses in order to work properly 
(in the given ones it has been defined).
This is because the ">>" operator has to be of the specific object.

In the main.cpp there is a test that is capable of performing different actions depending on the user input:
1. Creates a rectangle object, it asks the user for the parameters
2. Creates a rhombus object, it asks the user for the parameters
3. Creates an isotrapezoid object, it asks the user for the parameters
4. Draws all object created
5. Exit the program

It should be noted that the "Draw" functions and "Draw" options do not actually draw the polygons, they are just a placeholder.

## Authors
Matteo Caroleo S5216938
Pietro Baldi S5331899
