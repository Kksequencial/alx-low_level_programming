#include "main.h"

/**
 * clear_bit - sets value
 *
 * @n: pointer
 *
 * @index: inx
 *
 * Return: success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 60)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
