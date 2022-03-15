#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function
 * @c: argument
 * Description:prints the last digit of a number
 * Return: last digit
 */

int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + 48);

	return (last_digit);
}
