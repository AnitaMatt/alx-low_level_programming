#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps an integer
 * @a: first argument
 * @b: second argument
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
