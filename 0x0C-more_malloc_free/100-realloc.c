#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - function that allocates a memory block using
 * malloc and free
 * @ptr: old pointer
 * @old_size:  old size allocated
 * @new_size: new size allocated
 * Return: new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	char *tmp, *ptr_dup;
	unsigned int i;

	if (new_size == old_size)
	{
		tmp = ptr;
		return (tmp);
	}
	if ((ptr != NULL) && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr_dup = ptr;
	new = malloc(sizeof(*tmp) * (old_size + new_size));

	tmp = new;
	for (i = 0; i < old_size; i++)
		tmp[i] = ptr_dup[i];
	free(ptr);

	return (new);
}
