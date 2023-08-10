# MyString Library

An implementation of string and memory manipulation functions in C, similar to the standard `string.h` library.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Functions](#functions)

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
```

## Functions

The MyString library provides the following functions:

Of course, here's a list of all the functions provided by your `MyString` library:

- `size_t myStrlen(const char *str)`
- `void *myMemchr(const void *str, int c, size_t n)`
- `int myMemcmp(const void *str1, const void *str2, size_t n)`
- `void *myMemset(void *StartAddress, unsigned char Value, unsigned int Length)`
- `void *myMemcpy(void *DestAddress, const void *SrcAddress, unsigned int Length)`
- `void *myMemmove(void *dest, const void *src, size_t n)`
- `char *myStrcat(char *dest, const char *src)`
- `char *myStrncat(char *dest, const char *src, size_t lenth)`
- `char *myStrchr(const char *str, int c)`
- `int myStrcmp(const char *str1, const char *str2)`
- `int myStrncmp(const char *str1, const char *str2, size_t n)`
- `int myStrcoll(const char *s1, const char *s2)`
- `char *myStrcpy(char *dest, const char *src)`
- `char *myStrncpy(char *dest, const char *src, size_t n)`
- `size_t myStrcspn(const char *str1, const char *str2)`
- `char *myStrpbrk(const char *str1, const char *str2)`
- `char *myStrrchr(const char *str, int c)`
- `size_t myStrspn(const char *str1, const char *str2)`
- `char *myStrstr(const char *haystack, const char *needle)`
- `char *myStrtok(char *str, const char *delim)`
- `size_t myStrxfrm(char *dest, const char *src, size_t n)`

Each of these functions serves a specific purpose related to string and memory manipulation. For detailed descriptions and usage examples, please refer to the `mystring.h` header file.

