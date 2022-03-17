#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - function name
 * Description: print lines diaginally
 * @n:    argument to be passed
 * Return:  nothing
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
