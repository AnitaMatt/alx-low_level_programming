#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the numbers of elements in a linked list
 * @h: const head pointer to list
 * Return: size of the list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
