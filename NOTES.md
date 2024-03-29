# Learn C the Hardway Notes

## Defninitions

_Undefined Behavior_ - part of the ANSI Stanard that lists all the ways a C compiler can disregard what you have written.

## Undefined Behavior

Write C code that doesn't trigger UB or attempts to prevent it. This is very hard.

### Strings and `NUL` bytes
* C defines strings as blocks of memory that end in a `NUL` byte or 0 byte
* it's a common mistake to have a string without a `NUL` byte
* the C program will then attempt to read past the end of the string and into memory causing the program to crash

## Memorizing C Operators

2 big tricks to speed up learning a programming language.

learn how to memorize the key core parts of a programming language.

### The Plan

* Learn why memorizing works
* Learn how to memorize things
* Review C operators

### Memorization

* a "backdoor" to hack learning
* Memorize the operators, then reading is easier
* Works with any language

### Memorization Process

* Write everything on index cards
* Use Anki, but make your own cards
* Spend 30-60 minutes a day
* Track what you don't know, drill those more.

## Pointers

### Practical Pointer Usage

4 primary uses of pointers:

* Ask the OS for a chunk of memory and use a pointer to work with it (strings or structs)
* Pass large blocks of memory to functions with a pointer so you don't have to pass the whole thing
* Take the address of a function so you can use it as a dynamic callback
* Scan complex chunks of memory, converting bytes off of a network socket into a data structure or parsing files

for almost everything else you should probably be using an array.
