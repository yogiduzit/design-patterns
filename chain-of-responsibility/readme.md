# Chain of Responsibility Design Pattern

Pattern type - Behavioural

Allows us to process entities such as HTTP requests in a sequential (or any arbitrary order) using decoupled
classes with their own responsibilities.

## Example

Consider an HTTP request sent to a server. The server needs to perform authentication and authorization
before providing any data back. The server might also need to perfom some extra pre and post processing
logic on the request.

We separate all the processing logic into separate handlers and create a linked list of these handlers

Authentication -> Authorization -> Post-processing 

This allows us to create a chain of objects each with a unique responsibility.
 
 
 ## When to use
 1. When an entity needs to be processed in a particular order
 2. If the order of processing is not known and needs to be determined at runtime based on the data
 present in the entity