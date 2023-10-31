#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: String containing 0 and 1 characters
 *
 * Return:The converted number or 0 if the string contains an invalid character
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, num;
	int index;

	if (b == NULL)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		num = b[index] - '0';

		result = result * 2 + num;
	}

	return (result);
}

