#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function name
 * Description:  This function prints numbers from 0 through 9
 * Return: nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + 48);
	_putchar('\n');
}
