#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that ads a new node at the beginning of a listint_t
 * list
 * @head:  head pointer of the list
 * @n: integer element
 * Return: newnode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
