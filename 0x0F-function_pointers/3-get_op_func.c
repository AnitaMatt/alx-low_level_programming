#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - function to get operator function
 * @s: operator parameter
 * Return: an in
 */

int (*get_op_func(char *s))(int, int)
{
	p_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
	}
	return (NULL);
}
