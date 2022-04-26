#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * and returns the element of the node
 * @head: head pointer to the list
 * Return: integer element of node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	num = temp->n;
	free(temp);
	return (num);
}
