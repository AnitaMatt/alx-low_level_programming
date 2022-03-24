#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings using bytes
 * @dest:  destination string
 * @src:   source string
 * @n: number of bytes
 * Return:  pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len++;

	for (i = 0; i < n && src[i]; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
