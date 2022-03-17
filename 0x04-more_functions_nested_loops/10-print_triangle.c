#include <stdio.h>
#include "main.h"

/**
 * print_triangle - function name
 * @size: size as an argument
 * Description: print a triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if ((i + 1) >= j)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
