#include "main.h"
/**
 * is_prime_number - if the input integer is a prime number
 * @n: number
 * Return: On success 1.
 * Other ways, 0 is returned.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (mircont_prime_fun(n, 2));
	}
}

/**
 * mircont_prime_fun - if the input integer is a prime number
 * @n: number
 * @s: div
 * Return: On success 1.
 * Other ways, 0 is returned.
 */
int mircont_prime_fun(int n, int s)
{
	if (n % s == 0 && s < n)
	{
		return (0);
	}
	else if (s >= n)
	{
		return (1);
	}
	else
	{
		return (mircont_prime_fun(n, s + 1));
	}
}

