# Bridge Design Pattern

Pattern type - Structural

A pattern that lets us split a large classes into seperate hierarchies. The large class is split into
"Abstractions" and "Implementations".

## Example
Let's consider some objects that have a shape and a color. The classes for this could look like
are RedSquare, RedTriangle, GreenSquare and GreenTriangle. Let's try to add a new shape Rectangle to this.

In order to support Rectangle, we will have to create two classes representing a rectangle of each color. 
This same rule is applicable to adding a new color.

This is not a very maintainable scenario since we will have a lot of similar looking classes floating around.

To solve this, we seperate Color and Shape into their own hierarchies. We consider Shape as our abstract part of our 
design and consider the color as the visual implementation of the Shape. 

## When to use this pattern ?
1. When we want to divide and conquer a huge class that has many variation
    1. Allows us to manage entities that have multiple orthogonal dimensions that are independent of each other
2. To allow switching of implementation at runtime
3. Hide implementation details
    1. We do not know the concrete implementation until runtime
    
## Disadvantages
1. Code can get really complex if a highly cohesive class is being ripped apart into
smaller entities
2. The abstraction and implementation concept might not be very clear in large-scale projects
