#include <stdio.h>
/**
 * main - Entry point
 * Description: This prints numbers from 0 - 10
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');

	return (0);
}
