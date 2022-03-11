#include <stdio.h>
/**
 * main - Entry point
 * Description: printing numbers using putchar
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + 48);
	putchar('\n');

	return (0);
}
