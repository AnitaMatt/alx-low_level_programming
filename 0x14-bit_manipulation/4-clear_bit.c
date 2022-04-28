#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function that sets a bit at index to 0;
 * @n: integer
 * @index:index to be shifted
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	long int mask;

	if (index > 64)
		return (-1);
	mask = 1 << index;
	mask = ~mask;

	*n = *n & mask;

	return (1);
}
