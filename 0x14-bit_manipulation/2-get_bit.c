#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at
 * a given index
 * @n:  number
 * @index: index
 * Return: the bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int mask;

	mask = n >> index;

	return (mask & 1);
}
