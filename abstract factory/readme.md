# Abstract Factory Design Pattern

Pattern Type - Creational

Produce families of related objects using interfaces, an upgrade from Factory Pattern which relies on concrete implementations 

Example: Want to create a set of furniture; different types of furniture + styles (chair, sofa, table; art deco, victorian, modern)
Use interfaces to create chairs in factory, but can specify different implementation types 

## When to use
1. When class requires different variants of a family of objects

## Advantages
1. Adhere to Single Responsibility Principle: extract creation code to one place
2. Adhere to Open/Close Principle: introduce new variants without breaking existing code 
3. Avoid tight coupling
4. Ensure product compatibility

## Disadvantages
1. Increases code complexity due to requiring multiple new classes and interfaces.