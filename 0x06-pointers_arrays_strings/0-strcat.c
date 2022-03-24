xc#include <stdio.h>
#include "main.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: destination pointer
 * @src: source pointer
 * Return:  a pointer to the destination pointer
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + (len + 1)] = src[i];
	}

	dest[i + (len + 1)] = '\0';

	return (dest);

}
