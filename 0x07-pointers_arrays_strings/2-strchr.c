#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string pointer
 * @c: character to be found
 * Return: pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (*s) != '\0'; i++, s++)
	{
		if ((*s) == c)
			return (s);
	}

	return ('\0');
}
