#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function name
 * Description:  This function prints numbers 1 -14 ten times
 * Return: nothing
 */

void more_numbers(void)
{
	int i;
	int count = 0;

	while (count < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
		count++;
	}
}
