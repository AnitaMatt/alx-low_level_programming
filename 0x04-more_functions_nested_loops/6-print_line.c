#include <stdio.h>
#include "main.h"

/**
 * print_line - function name
 * Description: This prints a line on the terminal based on the argument passed
 * @n:   argument
 * Return:    nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}
