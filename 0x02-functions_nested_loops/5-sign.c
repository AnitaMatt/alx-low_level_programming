#include <stdio.h>
#include "main.h"
/**
 * print_sign - function
 * @n: argument
 * Description: this function prints the sign of a number and
 * Return: 1 if n > 0, rt 0 if n is zero, rt -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
