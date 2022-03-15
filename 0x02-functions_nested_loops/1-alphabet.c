#include <stdio.h>
#include "main.h"
/**
 * void print_alphabet(void) - Printing the alphabet from a function
 * Return: 0
 * Description: printing alphabet
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
