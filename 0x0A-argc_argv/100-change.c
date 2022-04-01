#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print change returned
 * @argv: arguments passed
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int temp, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	temp = atoi(argv[1]);
	while (temp)
	{
		if (temp < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (temp == 1)
		{
			count++;
			temp -= 1;
		}
		else if ((temp > 1) && (temp < 5))
		{
			count++;
			temp -= 2;
		}
		else if ((temp >= 5) && (temp < 10))
		{
			count++;
			temp -= 5;
		}
		else if ((temp >= 10) && (temp < 25))
		{
			count++;
			temp -= 10;
		}
		else if (temp >= 25)
		{
			count++;
			temp -= 25;
		}
	}
	printf("%d\n", count);
	return (0);
}
