#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - function to print all elements of a list
 * @h: value at head
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t num = 0;

	while (temp)
	{
		num++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (num);
}
