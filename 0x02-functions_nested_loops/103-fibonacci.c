#include <stdio.h>
/**
 * main - function name
 * Description:print fibonnacci numbers from 1 without exceeding 4000000
 * Return:0;
 */

int main(void)
{
	int c;
	int total = 0;
	int a = 1;
	int b = 2;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			total += b;
		c = b;
		b += a;
		a = c;
	}
	printf("%d\n", total);
	return (0);
}
