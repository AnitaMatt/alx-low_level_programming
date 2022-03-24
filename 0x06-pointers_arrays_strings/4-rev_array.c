#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function to reverse an array
 * @a: array passed
 * @n: number of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int div = n/2;

	for (i = 0; i < div; i++)
	{
		temp = a[i];
		a[i] = a[n - i -1];
		a[n - i - 1] = temp;
	}
}
