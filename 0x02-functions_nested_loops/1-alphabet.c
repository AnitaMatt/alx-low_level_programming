#include <stdio.h>
#include "main.h"





/**
 * print_alphabet - Printing the alphabet from a function
 * Description:printing alphabet and a newline
 * Return: 0
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
