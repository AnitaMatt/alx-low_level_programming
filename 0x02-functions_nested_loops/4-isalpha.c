#include <stdio.h>
#include "main.h"
/**
 * _isalpha - This function checks if the argument is an alphabet
 * @c: argument
 * Description: function
 * Return: 1 if c is a letter, lowercase or uppercase
 * else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
