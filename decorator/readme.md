# Decorator Design Pattern

Pattern Type - Structural

A good example is a notification system, some people may want email notifications, SMS notifications, or facebook notifications. 
How can we accomdate all these combinations without creating classes for specific notifications? 

## When to use
1. When you want to dynamically add behaviour to an object without going back to re-write the object
2. When there are many combinations of subclasses that someone might need

## Advantages
1. Adhere to Single Responsibility Principle. Each Decorator is responsible for one thing.
2. Adhere to the Open Close Principle. Our concrete component is closed to modifications but open to extension through decorators
3. Add or remove responsibilities at run-time

## Disadvantages
1. Can be difficult to remove or access the concrete object or a specific wrapper in the stack of wrappers
2. Hard to avoid scenarios where the behaviour changes based on the order in the decorators stack
3. Can be difficult to trace and debug if too many decorators are layered one upon the other
