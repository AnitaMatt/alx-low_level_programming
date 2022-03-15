#include <stdio.h>
#include "main.h"
/**
 * _islower - This function checks for lowercase characters
 * @c: integer to be used
 * Description:print
 * Return:1 if c is lowercase or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
