#include "main.h"

/**
 * get_endianness - checks if little or big
 *
 * Return: void pro.. so no return
 */

int get_endianness(void)
{
	unsigned int uni = 1;/*uni is an unsigned int*/

	char *c = (char *) &uni;

	return (*c);
}
