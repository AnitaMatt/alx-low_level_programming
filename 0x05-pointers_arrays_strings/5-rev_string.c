#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string passed as argument
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = 0;
	char temp;
	int div;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	div = len / 2;

	for (i = 0; i < div; i++)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
	}

	s[len + 1] = '\0';
}
