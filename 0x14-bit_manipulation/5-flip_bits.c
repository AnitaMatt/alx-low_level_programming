#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to move from one number to another
 * @n:  int
 * @m: desired number
 * Return: int count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int count;

	diff = n ^ m;
	count = 0;
	while (diff)
	{
		count++;
		diff &= (diff - 1);
	}
	return (count);
}
