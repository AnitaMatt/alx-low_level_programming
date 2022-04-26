#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts node at index
 * @head:  head pointer
 * @idx:  index
 * @n: integer element to be added
 * Return: new node
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	unsigned int count = 0;

	temp = *head;
	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}
	if (idx == count || idx > count)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = 0;
	temp = *head;
	count = 0;
	while (temp != 0)
	{
		if (idx == 0)
		{
			new->next = temp->next;
			*head = new;
			break;
		}
		count++;
		if ((count) == idx)
		{
			new->next = temp->next;
			temp->next = new;
			break;
		}
		temp = temp->next;
	}
	return (new);
}
