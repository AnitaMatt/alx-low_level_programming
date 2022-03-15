#include <stdio.h>
#include "main.h"

/**
 * _abs - function
 * @c: argument
 * Description: prints the absolute value of an integer
 * Return: c
 */
int _abs(int c)
{
	if (c >= 0)
		return (c);
	c = c * -1;
	return (c);
}
