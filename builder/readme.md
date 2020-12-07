# Builder Design Pattern

Pattern Type - Creational

Enables complex object creation, through step by step customization.
Eliminates need for complex inheritance hierarchies or massive constructors with many unused parameters.

A good use case of the builder pattern, would be for objects that potentially have a lot of variation 
from object to object. An example of this could be cars, with varying number of doors or wheels, and different types
of engines or  transmission types (automatic or manual).

Example: Want to create different types of pizza, but the client doesn’t want to manually specify all ingredients. They
want to order from a menu. The menu tells the builder to build a very specific type of pizza, and returns that to the client

## When to use
1. When a class has many variations
2. When a class requires fine-tuned configuration

## Advantages
1. Adhere to Single Responsibility Principle. Isolated complex construction code from business logic
2. Step by Step construction & customization; ability to defer steps or run them recursively
3. Reuse construction code for various representations of product

## Disadvantages
1. Increases code complexity due to requiring multiple new classes.