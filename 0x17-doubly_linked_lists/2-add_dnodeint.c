#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - function that adds a node at beginning of a list
 * @head: head pointer
 * @n: value for each node
 * Return: a pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
	else
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
