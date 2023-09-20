# 0x06. C - More pointers, arrays, and strings

## Project Overview

In this project, you will delve deeper into the world of C programming by focusing on pointers, arrays, strings, and other essential concepts. You will implement various functions that manipulate strings and arrays without using the standard library functions. The project aims to reinforce your understanding of these fundamental concepts in C.

## Learning Objectives

- By completing this project, you will achieve the following learning objectives:

- Understand Pointers: You will gain a solid grasp of what pointers are and how to effectively use them in C programming.

- Work with Arrays: You will learn how to create and manipulate arrays, including dynamic arrays.

- Differentiate Pointers and Arrays: You will understand the key distinctions between pointers and arrays.

- String Manipulation: You will become proficient in working with strings in C, including functions to concatenate, copy, and compare strings.

- Scope of Variables: You will grasp the concept of variable scope, understanding where variables are accessible and how they behave within different contexts.



## Tasks

### 0. strcat

Write a function that concatenates two strings.

- Prototype: `char *_strcat(char *dest, char *src);`
- This function appends the src string to the dest string, overwriting the terminating null byte (`\0`) at the end of dest, and then adds a terminating null byte
- Returns a pointer to the resulting string dest
- FYI: The standard library provides a similar function: `strcat`. Run `man strcat` to learn more.

### 1. strncat

Write a function that concatenates two strings.

- Prototype: `char *_strncat(char *dest, char *src, int n);`
- The `_strncat` function is similar to the `_strcat` function, except that it will use at most `n` bytes from `src`, and `src` does not need to be null-terminated if it contains `n` or more bytes.
- Return a pointer to the resulting string `dest`
- FYI: The standard library provides a similar function: `strncat`. Run `man strncat` to learn more.

### 2. strncpy

Write a function that copies a string.

- Prototype: `char *_strncpy(char *dest, char *src, int n);`
- Your function should work exactly like `strncpy`.
- FYI: The standard library provides a similar function: `strncpy`. Run `man strncpy` to learn more.

### 3. strcmp

Write a function that compares two strings.

- Prototype: `int _strcmp(char *s1, char *s2);`
- Your function should work exactly like `strcmp`.
- FYI: The standard library provides a similar function: `strcmp`. Run `man strcmp` to learn more.

### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

Write a function that reverses the content of an array of integers.

- Prototype: `void reverse_array(int *a, int n);`
- Where `n` is the number of elements of the array.

### 5. Always look up

Write a function that changes all lowercase letters of a string to uppercase.

- Prototype: `char *string_toupper(char *);`

### 6. Expect the best. Prepare for the worst. Capitalize on what comes

Write a function that capitalizes all words of a string.

- Prototype: `char *cap_string(char *);`
- Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`

### 7. Mozart composed his music not for the elite, but for everybody

Write a function that encodes a string into 1337.

- Letters `a` and `A` should be replaced by `4`
- Letters `e` and `E` should be replaced by `3`
- Letters `o` and `O` should be replaced by `0`
- Letters `t` and `T` should be replaced by `7`
- Letters `l` and `L` should be replaced by `1`
- Prototype: `char *leet(char *);`

### 8. rot13

Write a function that encodes a string using rot13.

- Prototype: `char *rot13(char *);`

### 9. Numbers have life; they're not just symbols on paper

Write a function that prints an integer.

- Prototype: `void print_number(int n);`
- You can only use `_putchar` function to print.

### 10. A dream doesn't become reality through magic; it takes sweat, determination, and hard work

Write a function that adds two numbers.

- Prototype: `int add(int a, int b);`

### 11. Midpoint of a line

Write a function that computes the midpoint of a line segment.

- Prototype: `void print_line(int n, char symbol);`

### 12. Add two strings

Write a function that adds two numbers stored as strings.

- Prototype: `char *add_strings(char *s1, char *s2);`


