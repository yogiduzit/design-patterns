# Mediator Design Pattern

We use this pattern whenever we want one component to talk to another component, but they are completely decoupled
and unaware of each other. Similar to the Observer pattern. Mediators can cause different parts of a system to react to a component.
However, it is different from the observer pattern because Mediators allow us to have bidirectional communication.
An observer is more of a broadcaster. 

### Use Cases

1. When you do not want components to be highly coupled, but need them to be able to communicate with one another
2. Implements the Single responsibility principle. The responsibility to faciliate communication between objects is extracted into one class
3. Implements the Open/Closed Principle. We can introduce mediators for new contexts without changing the components. 


### Disadvantages
1. The Mediator itself becomes a complex object and an epicentre for coupling.
2. It becomes a God object, an object that knows too much or does too much.
