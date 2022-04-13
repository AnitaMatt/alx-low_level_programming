#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry function to calculate  (+, -, *, /, %)
 * @argc: argument count
 * @argv: arguments passed
 * Return: 0 or otherwise stated
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') &&
	    ((atoi(argv[3])) == 0))
	{
		printf("Error\n");
		return (100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	oper = argv[2];

	printf("%d\n", get_op_func(oper)(num1, num2));
	return (0);
}
