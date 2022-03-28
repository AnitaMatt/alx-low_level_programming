#include <stdio.h>
#include "main.h"

/**
 * _memset - this function filles memory with a constant byte
 * @s: destination pointer
 * @b: character
 * @n: n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
