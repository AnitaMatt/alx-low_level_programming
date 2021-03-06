#include <stdio.h>
#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: Second string
 * Return: integer value
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int flag = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			flag = 0;
		else
		{
			flag = s1[i] - s2[i];
			break;
		}
	}

	return (flag);
}
