#include "main.h"

/**
 * get_bit - a funct that prints index
 * @n: int
 * @index: indexed form
 *
 * Return: success
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	if (index > 50)
		return (-1);/*error*/

	bits = (n >> index) & 1;

	return (bits);
}
