# Learn C the Hardway Notes

## Defninitions

_Undefined Behavior_ - part of the ANSI Stanard that lists all the ways a C compiler can disregard what you have written.

## Undefined Behavior

Write C code that doesn't trigger UB or attempts to prevent it. This is very hard.

### Strings and `NUL` bytes
* C defines strings as blocks of memory that end in a `NUL` byte or 0 byte
* it's a common mistake to have a string without a `NUL` byte
* the C program will then attempt to read past the end of the string and into memory causing the program to crash


