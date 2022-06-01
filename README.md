# C++ Basics

## Things to learn

- What are `variables`?
- Which are the available `data types`?
- How to `output` information?
- How to take the `user input`?
- Which `operators` are available?
- How to use `strings`?
- How to use `if` conditions?
- How to use `switch` conditions?
- How to use the `for` loop?
- How to use the `while` loop?
- How to use the `do while` loop?
- What are `arrays` and how to use them?
- What are `structures` and how to use them?
- How to define `functions` and how are they useful?
- A glance of `Object Oriented Programming (OOP)` in `C++`
- Transition from `C++` to `C#`.

## Variables

A `variable` is a space of memory reserved to store something like a digit, a number, a text, etc..
There is a specific syntax to `declare` (create) and `define` (assign something) a variable:

To declare a variable we must specify the type of data that it will store and the name of the variable:

```cpp
// examples
int myAge;
char favoriteLetter;
bool isAdult;

// int, char, bool are the types of those variables
// myAge, favoriteLetter, isAdult are the names of those variables
```

When the variables are declared they dont have any value yet until we assign something to it. We can `assign` something later or at the same time that they are declared. When is done at the same time is called `initialization`.

```cpp
// this is how we can declare a variable and then assign a value to it
int myAge;
myAge = 35;

// this is the same as initialize it with a value from the beginning
int myAge = 35;
```

The variables can be `redefined/reassigned` as many times as we want:

```cpp
int age = 35;
cout << age;  // will output: 35

age = 36;
cout << age;  // will output: 36
```

The data stored in the variables must have a type like integer number, decimal number, character, etc.. These are the **data types**.

## Data Types

There are many `primitive` `data types` on C++ but we are gonna focus on some of them for now.
Primitive means that they are built-in in C++ so you can use them without the need of an external library like the `strings` or `structs` that we are gonna see later.

These are the main ones:

- `int` integer
- `char` character
- `bool` boolean
- `float` floating point
- `double` double floating point

### int

The `int` data type allows us to store numbers. We **can't** store any other type of data than numbers.
The minimum value is -2147483648 and the maximum is 2147483647.

So this will work:

```cpp
int age = 35;
```

But this will not:

```cpp
int age = 'thirty five'; // error
```

This will give an error too because the number is bigger:

```cpp
int age = 2147483648; // error. maximum is 2147483647
```

This will give an error because the number is not integer:

```cpp
int pi = 3.14; // error
```

### char

The `char` data type allows us to store a single character. It could be any character like letters, numbers, or signs. But the value is considered as text, so if we store the number 5 for example, it will be considered as the text 5, not the number 5. That means that we **can't** perform aritmetic operations over these variables.

The value must be enclosed in quotes:

```cpp
char bestLetter = 's';
char anotherGoodLetter = 'S';
char yearsToStudy = '3';
```

This would give an error because is not a single character, is more than one:

```cpp
char age = '35'; // error
```

This is also not good because is not a character, is a number.

```cpp
char age = 35; // error
```

Remember that characters are enclosed in quotes.

### bool

The `bool` data type is used to represent only 2 states, true or false.
We can use it to say that something is true or not, for example:

```cpp
bool isCitizen = false;
bool isRoovaneeUnderage = true;
bool roovaneeIsCool = true;
```

In C++ the value `true` or `false` must be written in lowercase.

### float and double

The data types `float` and `double` are used to store decimal numbers. The difference is that double allows to store numbers the double size of a float.

```cpp
float pi = 3.14;
```

## Output

The applications that we are building are console applications, that means they will run in the terminal. The only way to show something to the user is to output text to the console.

C++ came with a lot of libraries to do different things like math operations, file handling, input/output, etc.. But they are not included by default. We need to explicitly say to the compiler to include them if we need them.

In this case we need to include the library to perform output writings. To do this we need to use the `#include` `directive` to include a section of the standard C++ code known as the _header iostream_ that allows us to perform `standard input and output operations`.

**In short, we need to add that line at the beginning to be able to write outputs to the console, and to read inputs from the user.**

```cpp
#include <iostream>
```

After that we will be able to use `cin` and `cout`.

```cpp
#include <iostream>

int main() {
    int age = 35;
    std::cout << age;
}
```

`std::cout` means that we are using `cout` from the standard library (`std::`) that we include before in `#include <iostream>`.

To avoid writing that all the time we can use this line:

```cpp
using namespace std
```

That line allows us to use `cin` and `cout` directly like this:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int age = 35;
    cout << age; // no need for std::cout
}
```

The behaviour of `cout` is to show everything that is passed with `<<` chained together.
In `cout` we can use different things like `string literals`, `variables`, `expressions`, `functions`, etc..

For a practice example look at the file `cout_example.xlsx` in the `output` folder.

## User input
