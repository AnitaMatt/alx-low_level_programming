#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements in the array
 * @size: size of bytes for each element
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new;
	unsigned int i;
	char *tmp;

	if ((nmemb || size) == 0)
		return (NULL);
	new = malloc(size * nmemb);
	tmp = new;
	if (new == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		tmp[i] = '\0';

	return (new);
}
