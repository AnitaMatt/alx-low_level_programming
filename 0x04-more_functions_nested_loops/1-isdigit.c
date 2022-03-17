#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function name
 * Description: Checks if c is a digit
 * @c: C is the argument passed
 * Return:  1 if c is a digit or 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
