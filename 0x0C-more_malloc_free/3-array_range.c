#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *new;
	int i;

	if (min > max)
		return (NULL);
	new = malloc(sizeof(int) * (max - min));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < max; i++)
		new[i] = min++;
	return (new);
}
