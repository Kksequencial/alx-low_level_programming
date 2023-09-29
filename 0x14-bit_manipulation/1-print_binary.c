#include "main.h"

/**
 * print_binary - prints a num
 *
 * @n: the required unsigned long int
 *
 * Return: success
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)/*>> remove last number by req amount*/
	{
		if (n >> 1)/*if removing one bit*/
			print_binary(n >> 1);
		_putchar((n & 1) + '0');/*add a zero to the end*/
	}
	else/*else condition*/
	{
		_putchar('0');
	}
}
