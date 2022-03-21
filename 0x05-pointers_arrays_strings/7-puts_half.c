#include <stdio.h>
#include "main.h"

/**
 * puts_half - function that prints half a string
 * @str: string address
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, n;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	if (len % 2 == 0)
		n = len / 2;
	n = (len + 1) / 2;

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
