#include "main.h"
/**
 *_isdigit - function that verifies if a  character is is digit  or not
 *@c: tested character
 *Return: returns 1 if it is digit , 0 if not
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
