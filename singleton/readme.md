# Singleton Design Pattern
Pattern Type - Creational

Guarantees that only a single global instance of a class will ever exist. 
Prevents new instances from being created.

## Pattern
1. Instantiate the object on first use
2. Hide the initializer (private constructor)
3. Reveal a get_instance() that returns a <b>static</b> reference to the single instance
4. Provide global access

## When to use this pattern ?
Use this pattern when a single instance of an object must be globally available

##

