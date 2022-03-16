#include <stdio.h>
#include "main.h"
/**
 * times_table - function
 * Description:this function prints the nine times table
 * Return:nothing
 */
void times_table(void)
{
	int i;
	int j;
	int k;
	int n = 10;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			k = i * j;
			if (k < 10)
			{
				if (j > 0)
					_putchar(' ');
				_putchar(k + 48);
			}
			else
			{
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
			if (j < (n - 1))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
