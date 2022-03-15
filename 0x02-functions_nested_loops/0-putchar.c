#include <stdio.h>
#include "main.h"
/**
 * main - This program prints _putchar to the screen
 * Return: 0;
 * Description: creating our own putchar
 */

int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');

	return (0);
}
