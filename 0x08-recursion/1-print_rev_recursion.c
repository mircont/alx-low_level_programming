#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to print in reverse.
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0')
        return;
    
    _print_rev_recursion(s + 1);  // Recursively move to the end of the string
    _putchar(*s);                // Print the character in reverse order
}

