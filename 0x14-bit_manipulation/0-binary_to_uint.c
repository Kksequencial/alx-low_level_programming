#include "main.h"

/**
 * binary_to_uint - convert a binary
 *
 * @b: character
 *
 * Return: success
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int b_two = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		b_two = 2 * b_two + (b[i] - '0');
	}

	return (b_two);
}
