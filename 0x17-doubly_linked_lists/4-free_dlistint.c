#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function to free a list
 * @head: head pointer
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
