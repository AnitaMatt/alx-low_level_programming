#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array and
 * initializes it with a specific char
 * @size:  size of the array
 * @c:  character to be printed
 * Return: a pointer to the allocated space
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (s == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
