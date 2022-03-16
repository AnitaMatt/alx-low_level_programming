#include <stdio.h>

/**
 * main - function
 * @n: parameter
 * Return: 0
 * Description:sum of natural numbers
 */

void sum_of_natural_numbers(int);

int main(void)
{
	sum_of_natural_numbers(1024);

	return (0);
}

void sum_of_natural_numbers(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i < n; i++)
	{
		if ((i % 3 == 0) || (i % 5 ==0))
			sum = sum + i;
	}
	printf("%d\n",sum);
}
