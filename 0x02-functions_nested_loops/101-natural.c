#include <stdio.h>

/**
 * main - function
 * Return: 0
 * Description:sum of natural numbers
 */

int main(void)
{
	int n = 1024;
	int i;
	int sum = 0;

	for (i = 1; i < n; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
	}
	printf("%d\n", sum);

	return (0);
}
