#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s:  string source
 * @accept: word search
 * Return:   a pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0' && accept[i] != '\0'; i++)
	{
		if ((s[i] == accept[i]) || (s[i - 1] == accept[i]))
			return (s + i - 1);
	}

	return ('\0');
}
