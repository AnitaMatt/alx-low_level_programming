#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints elements of an array
 * @a: address of array
 * @n: number of elements to be printed
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
