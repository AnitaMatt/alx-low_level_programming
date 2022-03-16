#include <stdio.h>
/**
 * main - function name
 * Descritption: print fibonacci numbers
 * Return:0
 */

int main(void)
{
	int i;
	unsigned long int c = 0;
	unsigned long int a = 1;
	unsigned long int b = 2;
	int count = 50;

	printf("%ld, %ld, ", a, b);
	for (i = 3; i <= count; i++)
	{
		c = a + b;
		a = b;
		b = c;

		if (i == count)
		{
			printf("%ld", c);
			continue;
		}
		printf("%ld, ", c);
	}
	printf("\n");

	return (0);
}
