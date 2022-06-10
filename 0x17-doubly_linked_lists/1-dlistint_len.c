#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - function returns number of elements in a list
 * @h: head of the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t num = 0;

	while (temp)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}
