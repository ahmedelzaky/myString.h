# MyString Library

An implementation of string and memory manipulation functions in C, similar to the standard `string.h` library.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Functions](#functions)
- [License](#license)

## Introduction

The MyString library provides a collection of functions that perform various string and memory manipulation operations. These functions are designed to be similar to those found in the standard `string.h` library, enabling developers to work with strings and memory blocks efficiently.

## Features

- A set of custom implementations of common string and memory manipulation functions.
- Covers a range of tasks, including string copying, concatenation, memory filling, and more.
- Compatible with standard C environments, aiming for portability and usability.

## Usage

To use the MyString library, include the `mystring.h` header file in your C program and make use of the functions provided by the library. Here's a simple example:

```c
#include "mystring.h"
#include <stdio.h>

int main() {
    const char *str = "Hello, ";
    const char *append = "world!";
    
    char dest[50];
    myStrcpy(dest, str);
    myStrcat(dest, append);
    
    printf("Concatenated string: %s\n", dest);
    
    return 0;
}
