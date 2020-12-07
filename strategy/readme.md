# Strategy Design Pattern

Pattern type - Behavioural

Change implementation / strategy at run time

## Example

A character in a game can attack with different kinds of weapons. These weapons
have different characteristics such as damage, weight etc. However, all the weapons 
have a common functionality which is to attack.

Rather can creating characters classes such as SwordCharacter, GunCharacter, we can make a 
separate interface called Weapon that deals with the attack strategy of the character.
This ensures code decoupling and isolates the implementation of attacking from the character.

## When to use it ?
1. To implement a different algorithm depending on the use case.
2. To isolate the implementation of a strategy from the code that uses it

## When not to use it ?
1. If there are not many different strategies available. a simple if-else or switch-case statment would suffice