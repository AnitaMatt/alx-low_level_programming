#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a postion
 * @h: value at head
 * @idx: index
 * @n:value at n
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int num = 0;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*h == NULL)
		*h = new;
	while (temp)
	{
		num++;
		if (idx == (num - 1))
		{
			new->prev = temp->prev;
			new->next = temp;
			temp->prev = new;
			new->prev->next = new;
			break;
		}
		temp = temp->next;
	}
	if (idx > (num - 1))
		return (NULL);
	return (new);
}
