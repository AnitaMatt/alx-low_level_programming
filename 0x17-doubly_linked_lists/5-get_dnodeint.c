#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node
 * @head: head pointer
 * @index: index node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n = 0;

	while (temp)
	{
		n++;
		if (index == (n - 1))
			break;
		temp = temp->next;
	}
	if (index > (n - 1))
		return (NULL);
	return (temp);
}
