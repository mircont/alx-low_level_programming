#include "main.h"
/**
 * _sqrt_recursion - the natural square root of a number.
 * @n: the number
 * Return: the natural square root of n
 * On error, -1 is returned.
 */
int _sqrt_recursion(int n)
{
	return (mircont_needs_this(n, 0));
}

/**
 * mircont_needs_this - function added
 * @n: the number
 * @s: root
 * Return: the natural square root of n
 * On error, -1 is returned.
 */
int mircont_needs_this(int n, int s)
{
	if (s * s == n)
	{
		return (s);
	}
	else if (s * s > n)
	{
		return (-1);
	}
	else
	{
		return (mircont_needs_this(n, s + 1));
	}
}

