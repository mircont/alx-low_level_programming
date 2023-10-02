# 0x09. C - Static libraries

The "0x09. C - Static libraries" project is a programming project that focuses on the concept of static libraries in the C programming language. It is part of a larger curriculum in low-level programming and software development. 
The primary objectives of this project are to teach students about static libraries, how they work, how to create them, and how to use them in C programming. Additionally, it introduces students to various C functions that they need to implement or use in creating these static libraries.

### General

- What is a static library, how does it work, how to create one, and how to use it
- Basic usage of `ar`, `ranlib`, `nm`


## Tasks

### 0. A library is not a luxury but one of the necessities of life

Create the static library `libmy.a` containing all the functions listed below:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

### 1. Without libraries, what have we? We have no past and no future

Creating a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.


## Files :

Here's a brief description of each file in this directory:

0-isupper.c: Checks if a character is an uppercase letter.
0-memset.c: Fills memory with a constant byte.
0-strcat.c: Concatenates two strings.
100-atoi.c: Converts a string to an integer.
1-isdigit.c: Checks if a character is a digit.
1-memcpy.c: Copies memory area.
1-strncat.c: Concatenates two strings, using at most n bytes from src.
2-strchr.c: Locates a character in a string.
2-strlen.c: Returns the length of a string.
2-strncpy.c: Copies a string, with a byte limit.
3-islower.c: Checks if a character is a lowercase letter.
3-puts.c: Prints a string to stdout.
3-strcmp.c: Compares two strings.
3-strspn.c: Gets the length of a prefix substring.
4-isalpha.c: Checks if a character is an alphabetic letter.
4-strpbrk.c: Searches a string for any of a set of bytes.
5-strstr.c: Locates a substring.
6-abs.c: Computes the absolute value of an integer.
9-strcpy.c: Copies the string pointed to by src to dest.
create_static_lib.sh: A script that creates a static library named liball.a from all the .c files in the current directory.
liball.a: The static library containing the compiled object files from the .c files.
main.h: A header file containing the function prototypes used in these programs.
_putchar.c: A file with the function _putchar that writes a character c to stdout.
