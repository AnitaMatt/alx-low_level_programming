#include <stdio.h>
#include "main.h"
/**
 * _islower - This function checks for lowercase characters
 * Description:print
 * Return:1 if c is lowercase
 * Return:0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
