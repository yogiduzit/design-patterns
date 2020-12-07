# Design Patterns

A set of solutions to common object oriented design problems.

**Selecting a Pattern**
1. understand problem's dependencies, modularity & abstract concepts
2. identify behavioural, structural or creational issue
3. identify constraints
4. evaluate if simpler solution exists, select a pattern if not

**Pros**
* proven solutions
* abstract and widely applicable
* easily communicate between developers

**Cons**
* can add unneeded complexity
* can introduce new constraints
* code may not be directly reusable

## Behavioural Patterns: *Algorithms, Relationships & Responsibilities*

Object interactions while minimizing coupling.

**Low Complexity**
- [x] **Observer:** an object (subject) maintains a list of objects (observers) to update of any state changes

**Medium Complexity**
- [x] **Chain of Responsibility:** sequential process refactored into a series of handlers
- [x] **Mediator:** collaboration between objects through singular intermediary object to reduce dependency complexity 

**High Complexity**
- [ ] **State:** change object behaviour based on internal state
- [ ] **Strategy:** refactor and change approaches (algorithms) to deal with a context 

## Structural Patterns: *Data Structures*

Architecting structure for flexibility and maintainability 

**Low Complexity**
- [x] **Façade:** provides simple interface to complex subsystem, allows for easy swapping of service
- [x] **Proxy:** intermediary wrapper class to access resource intensive object, can encapsulate management of requests and service (like a gatekeeper)

**Medium Complexity**
- [x] **Bridge:** split complex class into composition of *implementations* facilitated by an *abstraction* interface

**High Complexity**
- [x] **Decorator:** use composition/aggregation to apply multiple behaviours to an object at runtime without complexities of inheritance 


## Creational Patterns: *Objects*

Techniques to instantiate objects or groups of objects.

**Low Complexity**
- [x] **Singleton:** one globally accessible instance of object
- [ ] **Lazy Initialization:**  only initialized when needed (often used for singleton)

**Medium Complexity**
- [x] **Builder:** enables flexible, customizable construction of objects

**High Complexity**
- [ ] **Factory:** facilitates creation of different subclasses from common base interface 
- [x] **Abstract Factory:** facilitates creation of different subclasses from common base interface using abstract interfaces, instead of concrete implementations