#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * on each element of an array
 * @array: array
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
