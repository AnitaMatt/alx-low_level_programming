#include <stdio.h>
#include "main.h"

/**
 * _isupper - function name
 * Description:this function checks for uppercase characters
 * @c:argument passed
 * Return:1 if c is uppercase or 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
