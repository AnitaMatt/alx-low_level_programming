#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - funtion to add two int
 * @a: int a
 * @b: int b
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function to substract two int
 * @a: first int
 * @b: second int
 * Return:int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - fucntion to multiply two integers
 * @a: first int
 * @b: second int
 * Return:int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function to divide two integers
 * @a: first int
 * @b: second int
 * Return:int
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function to find the remainder
 * @a: first int
 * @b: second int
 * Return:int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
