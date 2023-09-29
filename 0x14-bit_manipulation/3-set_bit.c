#include "main.h"

/**
 * set_bit - sets bit
 *
 * @n: pointer
 *
 * @index: inx
 *
 * Return: success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 60)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
