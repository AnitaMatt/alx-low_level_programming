#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: string as parameter
 * Return: pointer to new allocated memory
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	s = malloc(sizeof(char) * len + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';

	return (s);
}
