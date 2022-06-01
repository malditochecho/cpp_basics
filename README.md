# C++ Basics

## Things to learn

- variables
- data types
- output
- user input
- operators
- strings
- if conditions
- switch conditions
- while loop
- for loop
- do while loop
- arrays
- structures
- functions
- oop in c++

## Variables

A variable is a space of memory reserved to store something like a digit, a number, a text, etc..

There is a specific syntax to declare (create) and define (assign something) a variable:

**To declare a variable** we must specify the type of data that it will store and the name of the variable:

```cpp
// examples
int myAge;
char favoriteLetter;
bool isAdult;

// int, char, bool are the types of those variables
// myAge, favoriteLetter, isAdult are the names of those variables
```

When the variables are declared they dont have any value yet until we assign something to it. We can assign something later or at the same time that they are declared. When is done at the same time is called `initialization`.

```cpp
// this is how we can declare a variable and then assign a value to it
int myAge;
myAge = 35;

// this is the same as initialize it with a value from the begginning
int myAge = 35;
```

The data stored in the variables must have a type like integer number, decimal number, character, etc.. These are the `data types`.

## Data Types
