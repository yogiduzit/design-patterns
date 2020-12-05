# Observer Design Pattern

### Components

1. Subject - May have any number of dependent observers.
2. Observers - Notified of all state changes

The subject is a stateful object with any number of observers dependent on it.
Every time, the subject state changes, the observers need to be notified. 
Each observer, then queries the subject to synchronise their state.

## Pattern

1. <b>(Abstract) Subject</b>
    1. Knows its observers
    2. Can have any number of observers
    3. Provides an interface for subscribing and unsubscribing
    
2. <b>(Abstract) Observer</b>
    1. Defines an interface for objects that should be notified of changes in the subject
    and updated, subsequently

3. <b>Concrete Subject</b>
    1. Sends notification of state change to its observers

4. <b>Concrete Observer</b>
    1. Maintains a reference to the concrete subject
    2. Stores state that is consistent with the subject
    3. Implements the observer updating interface

### Use Cases

1. One subject needs to change others but we don't know how many need to be 
changed
2. One subject needs to notify others but we can't make any assumptions about the observer type (Promotes loose coupling)
