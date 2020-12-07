# Factory Design Pattern

Pattern Type - Creational

Separate creation and client code, use common base interface

Example: Logisitics class that could deal with both trucking or shipping logistics 

## When to use
1. When client/service only depends on base class & not concrete class

## Advantages
1. Adhere to Single Responsibility Principle: extract creation code to one place
2. Adhere to Open/Close Principle: introduce new variants without breaking existing code 
3. Avoid tight coupling

## Disadvantages
1. Increases code complexity due to requiring multiple new classes and interfaces.