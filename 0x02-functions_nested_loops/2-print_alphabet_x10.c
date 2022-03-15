#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet 10x;
 * Description:Printing
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char i;
	int count = 0;

	while (count < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		count += 1;
	}
}
