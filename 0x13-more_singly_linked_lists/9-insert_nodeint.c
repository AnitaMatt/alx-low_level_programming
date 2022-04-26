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

	if (*head == NULL)
		return (NULL);
	temp = *head;
	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = 0;
	temp = *head;
	if  (idx == 0)
	{
		new->next = temp->next;
		*head = new;
		return (new);
	}
	for (count = 0; count < (idx - 1); count++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;


	return (new);
}
