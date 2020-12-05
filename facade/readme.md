# Facade Design Pattern

Pattern type - Structural

Encapsulates a complex system or API.
A system is usually built of numerous components that are responsible for a certain
part of the system's functionality. The end user, however should not have to interact with the components directly. 
Therefore, we provide a simple and easy-to-use interface that interacts with the different components under the hood.

## When to use ?
1. Encapsulation and data hiding
2. Avoid complex architectures if code is dependent on complex tools / libraries / sub-systems
3. To provide access to a small part of a larger, more complex system
4. Can be used to organize system into layers

## Disadvantages
1. Can become an extremely complex and large class
2. Can become an epicenter of coupling

